/********************************************************************************
** Form generated from reading UI file 'tiliui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILIUI_H
#define UI_TILIUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tiliUI
{
public:
    QPushButton *takaisin;

    void setupUi(QDialog *tiliUI)
    {
        if (tiliUI->objectName().isEmpty())
            tiliUI->setObjectName(QString::fromUtf8("tiliUI"));
        tiliUI->resize(400, 300);
        takaisin = new QPushButton(tiliUI);
        takaisin->setObjectName(QString::fromUtf8("takaisin"));
        takaisin->setGeometry(QRect(120, 240, 131, 51));

        retranslateUi(tiliUI);

        QMetaObject::connectSlotsByName(tiliUI);
    } // setupUi

    void retranslateUi(QDialog *tiliUI)
    {
        tiliUI->setWindowTitle(QCoreApplication::translate("tiliUI", "Dialog", nullptr));
        takaisin->setText(QCoreApplication::translate("tiliUI", "<- takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tiliUI: public Ui_tiliUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILIUI_H
