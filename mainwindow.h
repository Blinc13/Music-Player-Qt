#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include "Player.h"

QT_BEGIN_NAMESPACE
namespace Ui {
  #include "ui_mainwindow.h"
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool MusicIsPlaing();
private:
    Ui::Ui_MainWindow *ui;
    Player      *player;

public slots:
    void setTrackName();
};
#endif // MAINWINDOW_H
