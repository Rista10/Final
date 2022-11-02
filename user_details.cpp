#include "user_details.h"
#include "ui_user_details.h"
#include "about.h"
#include "why_become_donor.h"
#include "mainwindow.h"
#include "admin_dashboard.h"
#include "donor_request.h"

user_details::user_details(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user_details)
{
    ui->setupUi(this);
}

user_details::~user_details()
{
    delete ui;
}

void user_details::on_pushButton_clicked()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");
    if(db.open())
    {
        QSqlQueryModel *modal =new QSqlQueryModel();

        QSqlQuery * qry=new QSqlQuery();
        qry->prepare("select * from user_details");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }
}


void user_details::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void user_details::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void user_details::on_login_clicked()
{
    admin_dashboard ad;
    ad.setModal(true);
    hide();
    ad.exec();
}


void user_details::on_my_details_2_clicked()
{
    donor_request dr;
    dr.setModal(true);
    hide();
    dr.exec();

}


void user_details::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

