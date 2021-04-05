/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_bold;
    QCheckBox *checkBox_italic;
    QRadioButton *radioButton_left;
    QRadioButton *radioButton_center;
    QRadioButton *radioButton_right;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 180, 81, 21));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(310, 120, 121, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_bold = new QCheckBox(widget);
        checkBox_bold->setObjectName(QString::fromUtf8("checkBox_bold"));

        verticalLayout->addWidget(checkBox_bold);

        checkBox_italic = new QCheckBox(widget);
        checkBox_italic->setObjectName(QString::fromUtf8("checkBox_italic"));

        verticalLayout->addWidget(checkBox_italic);

        radioButton_left = new QRadioButton(widget);
        radioButton_left->setObjectName(QString::fromUtf8("radioButton_left"));

        verticalLayout->addWidget(radioButton_left);

        radioButton_center = new QRadioButton(widget);
        radioButton_center->setObjectName(QString::fromUtf8("radioButton_center"));

        verticalLayout->addWidget(radioButton_center);

        radioButton_right = new QRadioButton(widget);
        radioButton_right->setObjectName(QString::fromUtf8("radioButton_right"));

        verticalLayout->addWidget(radioButton_right);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Change Me", nullptr));
        checkBox_bold->setText(QCoreApplication::translate("MainWindow", "Bold", nullptr));
        checkBox_italic->setText(QCoreApplication::translate("MainWindow", "italic", nullptr));
        radioButton_left->setText(QCoreApplication::translate("MainWindow", "left", nullptr));
        radioButton_center->setText(QCoreApplication::translate("MainWindow", "center", nullptr));
        radioButton_right->setText(QCoreApplication::translate("MainWindow", "right", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
