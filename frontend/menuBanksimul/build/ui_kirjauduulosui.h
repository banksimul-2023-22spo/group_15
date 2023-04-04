/********************************************************************************
** Form generated from reading UI file 'kirjauduulosui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KIRJAUDUULOSUI_H
#define UI_KIRJAUDUULOSUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_kirjauduUlosUI
{
public:

    void setupUi(QDialog *kirjauduUlosUI)
    {
        if (kirjauduUlosUI->objectName().isEmpty())
            kirjauduUlosUI->setObjectName(QString::fromUtf8("kirjauduUlosUI"));
        kirjauduUlosUI->resize(400, 300);

        retranslateUi(kirjauduUlosUI);

        QMetaObject::connectSlotsByName(kirjauduUlosUI);
    } // setupUi

    void retranslateUi(QDialog *kirjauduUlosUI)
    {
        kirjauduUlosUI->setWindowTitle(QCoreApplication::translate("kirjauduUlosUI", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kirjauduUlosUI: public Ui_kirjauduUlosUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIRJAUDUULOSUI_H
