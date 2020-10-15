/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *SelectText;
    QTextEdit *textEdit;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(383, 284);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SelectText = new QPushButton(centralwidget);
        SelectText->setObjectName(QString::fromUtf8("SelectText"));
        SelectText->setGeometry(QRect(200, 190, 181, 71));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 381, 191));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(5, 200, 191, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 383, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        SelectText->setText(QApplication::translate("MainWindow", "Select text", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Arabic", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Chinese simple", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "English", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "French", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "German", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "Italian", nullptr));
        comboBox->setItemText(6, QApplication::translate("MainWindow", "Japanese", nullptr));
        comboBox->setItemText(7, QApplication::translate("MainWindow", "Kazakh", nullptr));
        comboBox->setItemText(8, QApplication::translate("MainWindow", "Korean", nullptr));
        comboBox->setItemText(9, QApplication::translate("MainWindow", "Kyrgyz", nullptr));
        comboBox->setItemText(10, QApplication::translate("MainWindow", "Persian", nullptr));
        comboBox->setItemText(11, QApplication::translate("MainWindow", "Polish", nullptr));
        comboBox->setItemText(12, QApplication::translate("MainWindow", "Portuguese", nullptr));
        comboBox->setItemText(13, QApplication::translate("MainWindow", "Russian", nullptr));
        comboBox->setItemText(14, QApplication::translate("MainWindow", "Spanish", nullptr));
        comboBox->setItemText(15, QApplication::translate("MainWindow", "Swedish", nullptr));
        comboBox->setItemText(16, QApplication::translate("MainWindow", "Tajik", nullptr));
        comboBox->setItemText(17, QApplication::translate("MainWindow", "Turkish", nullptr));
        comboBox->setItemText(18, QApplication::translate("MainWindow", "Uzbek", nullptr));
        comboBox->setItemText(19, QApplication::translate("MainWindow", "Vietnamese", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
