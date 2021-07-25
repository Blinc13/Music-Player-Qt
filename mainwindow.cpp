#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Player.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Ui_MainWindow)
{
    ui->setupUi(this);
    player=new Player();
    QObject::connect(ui->PlayButton,SIGNAL(clicked()),player,SLOT(Play()));
    QObject::connect(ui->MusicFile,SIGNAL(returnPressed()),SLOT(setTrackName()));
}

void MainWindow::setTrackName()
{
    player->SetMusicFile(ui->MusicFile->text());
}

MainWindow::~MainWindow()
{
    delete ui;
}

