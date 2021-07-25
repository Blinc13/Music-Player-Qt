#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Player.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Ui_MainWindow)
{
    ui->setupUi(this);
    player=new Player();
    QObject::connect(ui->pushButton,SIGNAL(clicked()),player,SLOT(Play()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

