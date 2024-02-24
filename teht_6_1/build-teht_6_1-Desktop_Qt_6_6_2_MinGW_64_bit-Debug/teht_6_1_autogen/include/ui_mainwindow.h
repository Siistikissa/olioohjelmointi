/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *B1;
    QPushButton *B4;
    QPushButton *B7;
    QPushButton *B2;
    QPushButton *B5;
    QPushButton *B8;
    QPushButton *B3;
    QPushButton *B6;
    QPushButton *B9;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *div;
    QPushButton *B0;
    QPushButton *clear;
    QPushButton *enter;
    QPushButton *mult;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        B1 = new QPushButton(centralwidget);
        B1->setObjectName("B1");
        B1->setGeometry(QRect(150, 130, 75, 24));
        B4 = new QPushButton(centralwidget);
        B4->setObjectName("B4");
        B4->setGeometry(QRect(150, 160, 75, 24));
        B7 = new QPushButton(centralwidget);
        B7->setObjectName("B7");
        B7->setGeometry(QRect(150, 190, 75, 24));
        B2 = new QPushButton(centralwidget);
        B2->setObjectName("B2");
        B2->setGeometry(QRect(230, 130, 75, 24));
        B5 = new QPushButton(centralwidget);
        B5->setObjectName("B5");
        B5->setGeometry(QRect(230, 160, 75, 24));
        B8 = new QPushButton(centralwidget);
        B8->setObjectName("B8");
        B8->setGeometry(QRect(230, 190, 75, 24));
        B3 = new QPushButton(centralwidget);
        B3->setObjectName("B3");
        B3->setGeometry(QRect(310, 130, 75, 24));
        B6 = new QPushButton(centralwidget);
        B6->setObjectName("B6");
        B6->setGeometry(QRect(310, 160, 75, 24));
        B9 = new QPushButton(centralwidget);
        B9->setObjectName("B9");
        B9->setGeometry(QRect(310, 190, 75, 24));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(390, 130, 75, 24));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(390, 160, 75, 24));
        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setGeometry(QRect(390, 190, 75, 24));
        B0 = new QPushButton(centralwidget);
        B0->setObjectName("B0");
        B0->setGeometry(QRect(150, 220, 75, 24));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(230, 220, 75, 24));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(310, 220, 75, 24));
        mult = new QPushButton(centralwidget);
        mult->setObjectName("mult");
        mult->setGeometry(QRect(390, 220, 75, 24));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(150, 100, 91, 22));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(250, 100, 91, 22));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(350, 100, 113, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        B1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        B4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        B7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        B2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        B5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        B8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        B3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        B6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        B9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        B0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
