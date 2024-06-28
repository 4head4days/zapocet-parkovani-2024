#ifndef DIALOGUPRAVIT_H
#define DIALOGUPRAVIT_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class dialogupravit;
}

class dialogupravit : public QDialog
{
    Q_OBJECT

public:
    explicit dialogupravit(QSqlDatabase *db,QWidget *parent = nullptr);
    ~dialogupravit();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::dialogupravit *ui;
    QSqlDatabase *my_db;
};

#endif // DIALOGUPRAVIT_H
