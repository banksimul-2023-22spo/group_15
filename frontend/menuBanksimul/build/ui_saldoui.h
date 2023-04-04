/********************************************************************************
** Form generated from reading UI file 'saldoui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDOUI_H
#define UI_SALDOUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_saldoUI
{
public:
    QPushButton *takaisin;

    void setupUi(QDialog *saldoUI)
    {
        if (saldoUI->objectName().isEmpty())
            saldoUI->setObjectName(QString::fromUtf8("saldoUI"));
        saldoUI->resize(400, 300);
        takaisin = new QPushButton(saldoUI);
        takaisin->setObjectName(QString::fromUtf8("takaisin"));
        takaisin->setGeometry(QRect(130, 230, 131, 51));

        retranslateUi(saldoUI);

        QMetaObject::connectSlotsByName(saldoUI);
    } // setupUi

    void retranslateUi(QDialog *saldoUI)
    {
        saldoUI->setWindowTitle(QCoreApplication::translate("saldoUI", "Dialog", nullptr));
        takaisin->setText(QCoreApplication::translate("saldoUI", "<- takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saldoUI: public Ui_saldoUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDOUI_H
