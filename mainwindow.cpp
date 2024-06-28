#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRelationalDelegate>
#include <QtSql/QSqlQuery>
#include <QMessageBox>
#include "dialogpocet.h"
#include "dialogupravit.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    model = new QSqlRelationalTableModel(this,db);
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actNovy_triggered()
{
    db.setDatabaseName("databaze.sql");
    QSqlQuery query;
    query.exec("DROP TABLE parkovani");
    query.exec("CREATE TABLE parkovani ("
               "id INTEGER PRIMARY KEY,"
               "SPZ TEXT UNIQUE,"
               "hodiny INTEGER)");
    model->setTable("parkovani");
    model->select();
}

void MainWindow::on_actExit_triggered()
{

}

void MainWindow::on_actOtev_triggered()
{
    db.setDatabaseName("databaze.sql");
    if(!db.open()){
        qDebug() << "Chyba při otevírání databáze: " << db.lastError().text();
        return;
    }
    ui->statusbar->showMessage("Databáze úspěšně načtena.",5000);
    model->setTable("parkovani");
    model->select();
    ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));
    ui->tableView->setModel(model);
}

void MainWindow::on_actMista_triggered()
{
    dialogpocet dp(&db);
    dp.exec();
}

void MainWindow::on_actZaznam_triggered()
{
    dialogupravit du(&db);
    du.exec();
}
