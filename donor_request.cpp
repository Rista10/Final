#include "donor_request.h"
#include "ui_donor_request.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "admin_dashboard.h"
#include "user_details.h"
#include "patient_requests.h"

donor_request::donor_request(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::donor_request)
{
    ui->setupUi(this);
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");
    if(db.open())
    {
        QSqlQueryModel *modal =new QSqlQueryModel();

        QSqlQuery * qry=new QSqlQuery();
        qry->prepare("select * from donor_details");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }
}

donor_request::~donor_request()
{
    delete ui;
}



void donor_request::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void donor_request::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void donor_request::on_login_clicked()
{
    admin_dashboard ad;
    ad.setModal(true);
    hide();
    ad.exec();
}


void donor_request::on_my_details_clicked()
{
    user_details ud;
    ud.setModal(true);
    hide();
    ud.exec();
}


void donor_request::on_my_details_3_clicked()
{
    patient_requests pr;
    pr.setModal(true);
    hide();
    pr.exec();
}


void donor_request::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

