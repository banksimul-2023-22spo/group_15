/********************************************************************************
** Form generated from reading UI file 'omattiedot.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMATTIEDOT_H
#define UI_OMATTIEDOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_omatTiedot
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *omatTiedot)
    {
        if (omatTiedot->objectName().isEmpty())
            omatTiedot->setObjectName(QString::fromUtf8("omatTiedot"));
        omatTiedot->resize(400, 300);
        label = new QLabel(omatTiedot);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 40, 251, 21));
        label_2 = new QLabel(omatTiedot);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 60, 251, 21));
        label_3 = new QLabel(omatTiedot);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 80, 251, 21));
        label_4 = new QLabel(omatTiedot);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 100, 251, 21));

        retranslateUi(omatTiedot);

        QMetaObject::connectSlotsByName(omatTiedot);
    } // setupUi

    void retranslateUi(QDialog *omatTiedot)
    {
        omatTiedot->setWindowTitle(QCoreApplication::translate("omatTiedot", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("omatTiedot", "nimi", nullptr));
        label_2->setText(QCoreApplication::translate("omatTiedot", "osoite", nullptr));
        label_3->setText(QCoreApplication::translate("omatTiedot", "puhelin numero", nullptr));
        label_4->setText(QCoreApplication::translate("omatTiedot", "kortin oikeudet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class omatTiedot: public Ui_omatTiedot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OMATTIEDOT_H
