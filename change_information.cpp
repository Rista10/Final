#include "change_information.h"
#include "ui_change_information.h"
extern int id;
#include "my_details.h"

change_information::change_information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_information)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");

    if(db.open())
    {

        QSqlQuery qry;

        qry.prepare("select * from user_details where user_id=:id");
        qry.bindValue(":id" ,id);

        if(qry.exec())
        {
            while(qry.next())
            {
                ui->name->setText(qry.value(1).toString());
                ui->age->setText(qry.value(2).toString());
                ui->blood_group->setText(qry.value(3).toString());
                ui->gender->setText(qry.value(4).toString());

            }
        }
    }
}



change_information::~change_information()
{
    delete ui;
}

void change_information::on_pushButton_2_clicked()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");

    QString location=ui->location->text();
    QString email=ui->email->text();
    QString phone_number=ui->phone_number->text();
    QString password=ui->password->text();



    if(db.open())
    {
        QSqlQuery qry1;
        qry1.prepare("UPDATE user_details SET location=  :location , email= :email ,phone_number= :phone_number, password= :password where user_id=:id");
                qry1.bindValue(":id" ,id);
                qry1.bindValue(":location", location);
                qry1.bindValue(":email", email);
                qry1.bindValue(":phone_number", phone_number);
                qry1.bindValue(":password", password);


                if(qry1.exec())
                {
                       QMessageBox::information(this,"Information","Your changes are saved");
                       my_details m1;
                       m1.setModal(true);
                       hide();
                       m1.exec();
                }
                else
                {
                      QMessageBox::information(this,"Information","Sorry");
                }
                }
            }


