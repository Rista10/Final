#include "patient_requests.h"
#include "ui_patient_requests.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "admin_dashboard.h"
#include "donor_request.h"
#include "user_details.h"

patient_requests::patient_requests(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::patient_requests)
{
    ui->setupUi(this);
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");
    if(db.open())
    {
        QSqlQueryModel *modal =new QSqlQueryModel();

        QSqlQuery * qry=new QSqlQuery();
        qry->prepare("select * from patient_details");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }
}

patient_requests::~patient_requests()
{
    delete ui;
}



void patient_requests::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void patient_requests::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void patient_requests::on_login_clicked()
{
    admin_dashboard ad;
    ad.setModal(true);
    hide();
    ad.exec();
}


void patient_requests::on_my_details_2_clicked()
{
    donor_request dr;
    dr.setModal(true);
    hide();
    dr.exec();
}


void patient_requests::on_my_details_clicked()
{
    user_details ud;
    ud.setModal(true);
    hide();
    ud.exec();
}


void patient_requests::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

