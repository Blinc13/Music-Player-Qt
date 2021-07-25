/********************************************************************************
** Form generated from reading UI file 'mainwindowUVKaVg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWUVKAVG_H
#define MAINWINDOWUVKAVG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QPushButton *PlayButton;
    QPushButton *NextButton;
    QPushButton *LastButton;
    QRadioButton *MusicStat;
    QLineEdit *MusicFile;
    QLabel *label;
    QProgressBar *progressBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(877, 446);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(655, 0, 221, 441));
        PlayButton = new QPushButton(centralwidget);
        PlayButton->setObjectName(QString::fromUtf8("PlayButton"));
        PlayButton->setGeometry(QRect(280, 390, 88, 28));
        PlayButton->setAutoDefault(true);
        PlayButton->setFlat(false);
        NextButton = new QPushButton(centralwidget);
        NextButton->setObjectName(QString::fromUtf8("NextButton"));
        NextButton->setGeometry(QRect(370, 390, 41, 28));
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

#endif // MAINWINDOWUVKAVG_H
