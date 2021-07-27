#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Player.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent),
                                         ui(new Ui::Ui_MainWindow),player(new Player()),model(new QFileSystemModel())
{
    model->setRootPath(QDir::homePath());

    ui->setupUi(this);

    ui->FileView->setModel(model);

    QObject::connect(ui->PlayButton,SIGNAL(clicked())/*,player*/,SLOT(Play())                 );
    QObject::connect(ui->VolumeSlider,SIGNAL(valueChanged(int)),player,SLOT(SetVolum(int)));

    QObject::connect(ui->FileView,SIGNAL(doubleClicked(QModelIndex)),SLOT(Path(QModelIndex)));
    //QObject::connect(ui->BackFileButton,SIGNAL(clicked()),);
}

void MainWindow::Play()
{
    ui->MusicTime->setValue(player->Progress());
    player->Play();
}

void MainWindow::Path(const QModelIndex &i)
{
    if (model->isDir(i))
        ui->FileView->setRootIndex(i);
    else{
        player->SetMusicFile(model->filePath(i));
        ui->MusicTime->setMaximum(player->Duration());
        ui->MusicTime->setValue(0);
    }
}

MainWindow::~MainWindow()
{delete ui,player;}
