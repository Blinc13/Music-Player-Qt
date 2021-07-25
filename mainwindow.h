#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui {
  #include "Ui.h"
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
    QLineEdit   *TrackName;
    QPushButton *PlayM;

public slots:
    /*
    void PlayMusic()       ;
    void SetTime  (int)    ;
    void OpenTrack(QString);
    */
};
#endif // MAINWINDOW_H
