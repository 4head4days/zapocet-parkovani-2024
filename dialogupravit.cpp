#include "dialogupravit.h"
#include "ui_dialogupravit.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

dialogupravit::dialogupravit(QSqlDatabase *db,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogupravit),
    my_db(db)
{
    ui->setupUi(this);
}

dialogupravit::~dialogupravit()
{
    delete ui;
}

void dialogupravit::on_buttonBox_accepted()
{
    QSqlQuery query(*my_db);
    int hid = ui->le_hid->text().toInt();
    QString nspz = ui->le_nspz->text();
    QString nhodiny = ui->le_nhod->text();
    query.prepare("UPDATE parkovani SET SPZ=:novaspz,hodiny=:novehodiny WHERE id=:hledaneid");
    query.bindValue(":hledaneid", hid);
    query.bindValue(":novehodiny", nhodiny);
    query.bindValue(":novaspz", nspz);
    if(query.exec()){
          qDebug() << "Vše ok";
    }else{
          qDebug() << "Chyba :" << query.lastError().text();
    }
}
