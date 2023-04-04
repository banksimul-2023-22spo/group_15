/********************************************************************************
** Form generated from reading UI file 'nostoui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTOUI_H
#define UI_NOSTOUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_nostoUI
{
public:
    QPushButton *takaisin;

    void setupUi(QDialog *nostoUI)
    {
        if (nostoUI->objectName().isEmpty())
            nostoUI->setObjectName(QString::fromUtf8("nostoUI"));
        nostoUI->resize(400, 300);
        takaisin = new QPushButton(nostoUI);
        takaisin->setObjectName(QString::fromUtf8("takaisin"));
        takaisin->setGeometry(QRect(140, 227, 131, 51));

        retranslateUi(nostoUI);

        QMetaObject::connectSlotsByName(nostoUI);
    } // setupUi

    void retranslateUi(QDialog *nostoUI)
    {
        nostoUI->setWindowTitle(QCoreApplication::translate("nostoUI", "Dialog", nullptr));
        takaisin->setText(QCoreApplication::translate("nostoUI", "<- takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nostoUI: public Ui_nostoUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTOUI_H
