#include "dialogpocet.h"
#include "ui_dialogpocet.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

dialogpocet::dialogpocet(QSqlDatabase *db,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogpocet),
    my_db(db)
{
    ui->setupUi(this);
}

dialogpocet::~dialogpocet()
{
    delete ui;
}

void dialogpocet::on_buttonBox_accepted()
{
    int pocet = ui->le_pocet->text().toInt();
    QString spz_uninit = "Neobsazene misto";
    QString hodiny = "Zadne";
    for(int i = 0; i < pocet; i++)
    {
        QSqlQuery query(*my_db);
        query.prepare("INSERT INTO parkovani (id, SPZ, hodiny)"
                      "VALUES (:id, :spz, :hodiny)");
        query.bindValue(":id", i+1);
        query.bindValue(":spz", spz_uninit.append(QString(i)));
        query.bindValue(":hodiny",hodiny);
        if(query.exec()){
              qDebug() << "Vše ok";
        }else{
              qDebug() << "Chyba :" << query.lastError().text();
        }
        if(i==pocet-1) qDebug() << "Doběhl jsem";
    }

}
