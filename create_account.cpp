#include "create_account.h"
#include "ui_create_account.h"

create_account::create_account(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::create_account)
{
    ui->setupUi(this);
}

create_account::~create_account()
{
    delete ui;
}

void create_account::on_register_2_clicked()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");

    if(db.open())
    {
        QString name=ui->name->text();
        QString age=ui->age->text();
        QString blood_group=ui->blood_group->text();
        QString gender=ui->gender->text();
        QString location=ui->location->text();
        QString email=ui->email->text();
        QString phone_number=ui->phone_number->text();
        QString password=ui->password->text();
        QString disease=ui->disease->text();

        QSqlQuery qry;
        qry.prepare("INSERT INTO user_details(name,age,blood_group,gender,location,email,phone_number,password,disease) "
                    "VALUES('"+name+"', '"+age+"', '"+blood_group+"', '"+gender+"', '"+location+"', '"+email+"', '"+phone_number+"', '"+password+"', '"+disease+"')");
        qry.bindValue(":name", name);
        qry.bindValue(":age", age);
        qry.bindValue(":blood_group", blood_group);
        qry.bindValue(":gender", gender);
        qry.bindValue(":location", location);
        qry.bindValue(":email", email);
        qry.bindValue(":phone_number", phone_number);
        qry.bindValue(":password", password);
        qry.bindValue(":disease", disease);

        if(qry.exec())
        {
               QMessageBox::information(this,"Information","Your account is created");
        }
        else
        {
              QMessageBox::information(this,"Error","Database not connected");
        }
    }
}

