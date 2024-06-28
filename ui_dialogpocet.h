/********************************************************************************
** Form generated from reading UI file 'dialogpocet.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPOCET_H
#define UI_DIALOGPOCET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dialogpocet
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *le_pocet;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dialogpocet)
    {
        if (dialogpocet->objectName().isEmpty())
            dialogpocet->setObjectName(QString::fromUtf8("dialogpocet"));
        dialogpocet->resize(400, 118);
        verticalLayout_2 = new QVBoxLayout(dialogpocet);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(dialogpocet);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        le_pocet = new QLineEdit(dialogpocet);
        le_pocet->setObjectName(QString::fromUtf8("le_pocet"));

        horizontalLayout->addWidget(le_pocet);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(dialogpocet);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(dialogpocet);
        QObject::connect(buttonBox, SIGNAL(accepted()), dialogpocet, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dialogpocet, SLOT(reject()));

        QMetaObject::connectSlotsByName(dialogpocet);
    } // setupUi

    void retranslateUi(QDialog *dialogpocet)
    {
        dialogpocet->setWindowTitle(QCoreApplication::translate("dialogpocet", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dialogpocet", "Celkov\303\275 po\304\215et parkovac\303\255ch m\303\255st:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialogpocet: public Ui_dialogpocet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPOCET_H
