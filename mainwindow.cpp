#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Player.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent),
                                         ui(new Ui::Ui_MainWindow),player(new Player())
{
    ui->setupUi(this);

    QObject::connect(ui->PlayButton,SIGNAL(clicked()),player,SLOT(Play())      )               ;
    QObject::connect(ui->MusicFile,SIGNAL(returnPressed()),SLOT(setTrackName()))               ;
    QObject::connect(ui->VolumeSlider,SIGNAL(valueChanged(int)),player,SLOT(SetVolum(int)));
}

void MainWindow::setTrackName()
{player->SetMusicFile(ui->MusicFile->text());}

MainWindow::~MainWindow()
{delete ui,player;}
