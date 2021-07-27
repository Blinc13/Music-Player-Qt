/********************************************************************************
** Form generated from reading UI file 'mainwindowYSDsxi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWYSDSXI_H
#define MAINWINDOWYSDSXI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListView *FileView;
    QPushButton *PlayButton;
    QPushButton *NextButton;
    QPushButton *LastButton;
    QProgressBar *MusicTime;
    QSlider *VolumeSlider;
    QPushButton *BackFileButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(877, 446);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:black;\n"
"color:white;\n"
"}\n"
"QPushButton{\n"
"border: 2px solid ;\n"
"border-radius: 6px;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #00F900, stop: 1 #0CF90C);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #12B500, stop: 1 #13BE00);\n"
"}\n"
"QProgressBar{\n"
"border: 2px solid black;\n"
"border-radius: 5px;\n"
"background-color:#414141;\n"
"color:black;\n"
"text-align: center;\n"
"}\n"
"QProgressBar::chunk {\n"
"background-color:#00F900 ;\n"
"width: 20px;\n"
"}"));
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        FileView = new QListView(centralwidget);
        FileView->setObjectName(QString::fromUtf8("FileView"));
        FileView->setGeometry(QRect(660, 30, 221, 411));
        FileView->setLineWidth(0);
        FileView->setModelColumn(0);
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
        MusicTime = new QProgressBar(centralwidget);
        MusicTime->setObjectName(QString::fromUtf8("MusicTime"));
        MusicTime->setGeometry(QRect(0, 420, 651, 23));
        MusicTime->setValue(0);
        VolumeSlider = new QSlider(centralwidget);
        VolumeSlider->setObjectName(QString::fromUtf8("VolumeSlider"));
        VolumeSlider->setGeometry(QRect(630, 270, 21, 141));
        VolumeSlider->setMaximum(100);
        VolumeSlider->setValue(100);
        VolumeSlider->setOrientation(Qt::Vertical);
        VolumeSlider->setTickPosition(QSlider::TicksAbove);
        VolumeSlider->setTickInterval(19);
        BackFileButton = new QPushButton(centralwidget);
        BackFileButton->setObjectName(QString::fromUtf8("BackFileButton"));
        BackFileButton->setGeometry(QRect(660, 0, 211, 31));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        PlayButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(accessibility)
        MainWindow->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        PlayButton->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        NextButton->setText(QCoreApplication::translate("MainWindow", "Last", nullptr));
        LastButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        BackFileButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWYSDSXI_H
