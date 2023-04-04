/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *saldo;
    QPushButton *nosto;
    QPushButton *tili;
    QPushButton *kirjauduUlos;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menubankSimul;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(472, 339);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 40, 451, 261));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        saldo = new QPushButton(verticalLayoutWidget);
        saldo->setObjectName(QString::fromUtf8("saldo"));

        verticalLayout_2->addWidget(saldo);

        nosto = new QPushButton(verticalLayoutWidget);
        nosto->setObjectName(QString::fromUtf8("nosto"));

        verticalLayout_2->addWidget(nosto);

        tili = new QPushButton(verticalLayoutWidget);
        tili->setObjectName(QString::fromUtf8("tili"));

        verticalLayout_2->addWidget(tili);

        kirjauduUlos = new QPushButton(verticalLayoutWidget);
        kirjauduUlos->setObjectName(QString::fromUtf8("kirjauduUlos"));

        verticalLayout_2->addWidget(kirjauduUlos);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 10, 261, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 472, 17));
        menubankSimul = new QMenu(menubar);
        menubankSimul->setObjectName(QString::fromUtf8("menubankSimul"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menubankSimul->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        saldo->setText(QCoreApplication::translate("MainWindow", "Saldo", nullptr));
        nosto->setText(QCoreApplication::translate("MainWindow", "Nosto", nullptr));
        tili->setText(QCoreApplication::translate("MainWindow", "Tili", nullptr));
        kirjauduUlos->setText(QCoreApplication::translate("MainWindow", "Kirjaudu ulos", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Terve terve terva perse", nullptr));
        menubankSimul->setTitle(QCoreApplication::translate("MainWindow", "bankSimul", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
