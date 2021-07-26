#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Player.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent),
                                         ui(new Ui::Ui_MainWindow),player(new Player()),model(new QFileSystemModel())
{
    model->setRootPath(QDir::homePath());

    ui->setupUi(this);

    ui->treeView->setModel(model);

    //              Ui
    QObject::connect(ui->PlayButton,SIGNAL(clicked()),player,SLOT(Play())                 );
    QObject::connect(ui->MusicFile,SIGNAL(returnPressed()),SLOT(setTrackName())           );
    QObject::connect(ui->VolumeSlider,SIGNAL(valueChanged(int)),player,SLOT(SetVolum(int)));

    //              FileSystem
    QObject::connect(ui->treeView,SIGNAL(clicked(QModelIndex)),SLOT(Path(QModelIndex)));
}

void MainWindow::setTrackName()
{player->SetMusicFile(ui->MusicFile->text());}

void MainWindow::Path(const QModelIndex &i)
{
    if (model->isDir(i))
        model->setRootPath(i.data().toString());
    else
        player->SetMusicFile(model->filePath(i));
}

MainWindow::~MainWindow()
{delete ui,player;}
