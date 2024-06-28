/********************************************************************************
** Form generated from reading UI file 'dialogupravit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUPRAVIT_H
#define UI_DIALOGUPRAVIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dialogupravit
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *le_hid;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *le_nspz;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *le_nhod;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dialogupravit)
    {
        if (dialogupravit->objectName().isEmpty())
            dialogupravit->setObjectName(QString::fromUtf8("dialogupravit"));
        dialogupravit->resize(400, 183);
        verticalLayout_3 = new QVBoxLayout(dialogupravit);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(dialogupravit);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        le_hid = new QLineEdit(dialogupravit);
        le_hid->setObjectName(QString::fromUtf8("le_hid"));

        horizontalLayout_4->addWidget(le_hid);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(dialogupravit);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        le_nspz = new QLineEdit(dialogupravit);
        le_nspz->setObjectName(QString::fromUtf8("le_nspz"));

        horizontalLayout_2->addWidget(le_nspz);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(dialogupravit);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        le_nhod = new QLineEdit(dialogupravit);
        le_nhod->setObjectName(QString::fromUtf8("le_nhod"));

        horizontalLayout_3->addWidget(le_nhod);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(dialogupravit);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(dialogupravit);
        QObject::connect(buttonBox, SIGNAL(accepted()), dialogupravit, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dialogupravit, SLOT(reject()));

        QMetaObject::connectSlotsByName(dialogupravit);
    } // setupUi

    void retranslateUi(QDialog *dialogupravit)
    {
        dialogupravit->setWindowTitle(QCoreApplication::translate("dialogupravit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dialogupravit", "Parkovac\303\255 m\303\255sto s \304\215\303\255slem:", nullptr));
        label_3->setText(QCoreApplication::translate("dialogupravit", "Nov\303\241 SPZ:", nullptr));
        label_2->setText(QCoreApplication::translate("dialogupravit", "Nov\303\251 hodiny:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialogupravit: public Ui_dialogupravit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUPRAVIT_H
