/********************************************************************************
** Form generated from reading UI file 'menuui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUUI_H
#define UI_MENUUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menuUI
{
public:
    QPushButton *tili;
    QPushButton *nosto;
    QPushButton *saldo;
    QPushButton *ulos;
    QLabel *label;

    void setupUi(QDialog *menuUI)
    {
        if (menuUI->objectName().isEmpty())
            menuUI->setObjectName(QString::fromUtf8("menuUI"));
        menuUI->resize(480, 308);
        tili = new QPushButton(menuUI);
        tili->setObjectName(QString::fromUtf8("tili"));
        tili->setGeometry(QRect(0, 110, 481, 41));
        nosto = new QPushButton(menuUI);
        nosto->setObjectName(QString::fromUtf8("nosto"));
        nosto->setGeometry(QRect(0, 160, 481, 41));
        saldo = new QPushButton(menuUI);
        saldo->setObjectName(QString::fromUtf8("saldo"));
        saldo->setGeometry(QRect(0, 210, 481, 41));
        ulos = new QPushButton(menuUI);
        ulos->setObjectName(QString::fromUtf8("ulos"));
        ulos->setGeometry(QRect(0, 260, 481, 41));
        label = new QLabel(menuUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 20, 291, 20));

        retranslateUi(menuUI);

        QMetaObject::connectSlotsByName(menuUI);
    } // setupUi

    void retranslateUi(QDialog *menuUI)
    {
        menuUI->setWindowTitle(QCoreApplication::translate("menuUI", "Dialog", nullptr));
        tili->setText(QCoreApplication::translate("menuUI", "tili tiedot", nullptr));
        nosto->setText(QCoreApplication::translate("menuUI", "nosto", nullptr));
        saldo->setText(QCoreApplication::translate("menuUI", "saldo", nullptr));
        ulos->setText(QCoreApplication::translate("menuUI", "kirjaudu ulos", nullptr));
        label->setText(QCoreApplication::translate("menuUI", "terve k\303\244ytt\303\244j\303\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuUI: public Ui_menuUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUUI_H
