/********************************************************************************
** Form generated from reading UI file 'mainwindowlfoaVx.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWLFOAVX_H
#define MAINWINDOWLFOAVX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *PlayButton;
    QPushButton *NextButton;
    QPushButton *LastButton;
    QRadioButton *MusicStat;
    QLineEdit *MusicFile;
    QLabel *label;
    QProgressBar *progressBar;
    QSlider *VolumeSlider;
    QTreeView *treeView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(877, 446);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        PlayButton = new QPushButton(centralwidget);
        PlayButton->setObjectName(QString::fromUtf8("PlayButton"));
        PlayButton->setGeometry(QRect(280, 390, 88, 28));
        PlayButton->setStyleSheet(QString::fromUtf8("background-color: green;"));
        PlayButton->setAutoDefault(true);
        PlayButton->setFlat(false);
        NextButton = new QPushButton(centralwidget);
        NextButton->setObjectName(QString::fromUtf8("NextButton"));
        NextButton->setGeometry(QRect(370, 390, 41, 28));
        NextButton->setStyleSheet(QString::fromUtf8("background-color: red;"));
        LastButton = new QPushButton(centralwidget);
        LastButton->setObjectName(QString::fromUtf8("LastButton"));
        LastButton->setGeometry(QRect(237, 390, 41, 28));
        MusicStat = new QRadioButton(centralwidget);
        MusicStat->setObjectName(QString::fromUtf8("MusicStat"));
        MusicStat->setGeometry(QRect(550, 390, 99, 24));
        MusicStat->setCheckable(false);
        MusicStat->setChecked(false);
        MusicFile = new QLineEdit(centralwidget);
        MusicFile->setObjectName(QString::fromUtf8("MusicFile"));
        MusicFile->setGeometry(QRect(0, 20, 411, 28));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 131, 16));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(0, 420, 651, 23));
        progressBar->setValue(24);
        VolumeSlider = new QSlider(centralwidget);
        VolumeSlider->setObjectName(QString::fromUtf8("VolumeSlider"));
        VolumeSlider->setGeometry(QRect(630, 269, 20, 121));
        VolumeSlider->setMaximum(100);
        VolumeSlider->setValue(100);
        VolumeSlider->setOrientation(Qt::Vertical);
        VolumeSlider->setTickPosition(QSlider::TicksAbove);
        VolumeSlider->setTickInterval(25);
        treeView = new QTreeView(centralwidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(655, 0, 221, 441));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        PlayButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        PlayButton->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        NextButton->setText(QCoreApplication::translate("MainWindow", "Last", nullptr));
        LastButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        MusicStat->setText(QCoreApplication::translate("MainWindow", "Music status", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "File patch", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWLFOAVX_H
