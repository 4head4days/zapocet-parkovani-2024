#ifndef DIALOGPOCET_H
#define DIALOGPOCET_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class dialogpocet;
}

class dialogpocet : public QDialog
{
    Q_OBJECT

public:
    explicit dialogpocet(QSqlDatabase *db,QWidget *parent = nullptr);
    ~dialogpocet();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::dialogpocet *ui;
    QSqlDatabase *my_db;
};

#endif // DIALOGPOCET_H
