/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actNovy;
    QAction *actOtev;
    QAction *actExit;
    QAction *actMista;
    QAction *actZaznam;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuSoubor;
    QMenu *menuDatab_ze;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actNovy = new QAction(MainWindow);
        actNovy->setObjectName(QString::fromUtf8("actNovy"));
        actOtev = new QAction(MainWindow);
        actOtev->setObjectName(QString::fromUtf8("actOtev"));
        actExit = new QAction(MainWindow);
        actExit->setObjectName(QString::fromUtf8("actExit"));
        actMista = new QAction(MainWindow);
        actMista->setObjectName(QString::fromUtf8("actMista"));
        actZaznam = new QAction(MainWindow);
        actZaznam->setObjectName(QString::fromUtf8("actZaznam"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_2->addWidget(tableView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuSoubor = new QMenu(menubar);
        menuSoubor->setObjectName(QString::fromUtf8("menuSoubor"));
        menuDatab_ze = new QMenu(menubar);
        menuDatab_ze->setObjectName(QString::fromUtf8("menuDatab_ze"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuSoubor->menuAction());
        menubar->addAction(menuDatab_ze->menuAction());
        menuSoubor->addAction(actNovy);
        menuSoubor->addAction(actOtev);
        menuSoubor->addSeparator();
        menuSoubor->addAction(actExit);
        menuDatab_ze->addAction(actMista);
        menuDatab_ze->addAction(actZaznam);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actNovy->setText(QCoreApplication::translate("MainWindow", "Nov\303\275", nullptr));
        actOtev->setText(QCoreApplication::translate("MainWindow", "Otev\305\231\303\255t", nullptr));
        actExit->setText(QCoreApplication::translate("MainWindow", "Ukon\304\215it", nullptr));
        actMista->setText(QCoreApplication::translate("MainWindow", "Vybrat po\304\215et m\303\255st", nullptr));
        actZaznam->setText(QCoreApplication::translate("MainWindow", "Upravit z\303\241znam", nullptr));
        menuSoubor->setTitle(QCoreApplication::translate("MainWindow", "Soubor", nullptr));
        menuDatab_ze->setTitle(QCoreApplication::translate("MainWindow", "Datab\303\241ze", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
