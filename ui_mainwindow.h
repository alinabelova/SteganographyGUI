/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonRun;
    QLabel *label_TextFile;
    QLabel *label_WAVFile;
    QPushButton *pushButtonOpenWav;
    QPushButton *pushButtonOpenText;
    QMenuBar *menuBar;
    QMenu *menuCaesar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(252, 248);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButtonRun = new QPushButton(centralWidget);
        pushButtonRun->setObjectName(QString::fromUtf8("pushButtonRun"));
        pushButtonRun->setGeometry(QRect(80, 130, 94, 27));
        label_TextFile = new QLabel(centralWidget);
        label_TextFile->setObjectName(QString::fromUtf8("label_TextFile"));
        label_TextFile->setGeometry(QRect(30, 60, 181, 17));
        label_WAVFile = new QLabel(centralWidget);
        label_WAVFile->setObjectName(QString::fromUtf8("label_WAVFile"));
        label_WAVFile->setGeometry(QRect(30, 10, 191, 16));
        pushButtonOpenWav = new QPushButton(centralWidget);
        pushButtonOpenWav->setObjectName(QString::fromUtf8("pushButtonOpenWav"));
        pushButtonOpenWav->setGeometry(QRect(30, 30, 99, 27));
        pushButtonOpenText = new QPushButton(centralWidget);
        pushButtonOpenText->setObjectName(QString::fromUtf8("pushButtonOpenText"));
        pushButtonOpenText->setGeometry(QRect(30, 80, 99, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 252, 25));
        menuCaesar = new QMenu(menuBar);
        menuCaesar->setObjectName(QString::fromUtf8("menuCaesar"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuCaesar->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Steganography", 0, QApplication::UnicodeUTF8));
        pushButtonRun->setText(QApplication::translate("MainWindow", "Run", 0, QApplication::UnicodeUTF8));
        label_TextFile->setText(QApplication::translate("MainWindow", "Text File:", 0, QApplication::UnicodeUTF8));
        label_WAVFile->setText(QApplication::translate("MainWindow", "WAV File:", 0, QApplication::UnicodeUTF8));
        pushButtonOpenWav->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        pushButtonOpenText->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        menuCaesar->setTitle(QApplication::translate("MainWindow", "Steganography", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
