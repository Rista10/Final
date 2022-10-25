#include "log_in.h"
#include "ui_log_in.h"
#include "mainwindow.h"
#include "userdashboard.h"
#include "admin_dashboard.h"


log_in::log_in(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::log_in)
{
    ui->setupUi(this);
}

log_in::~log_in()
{
    delete ui;
}


void log_in::on_signin_clicked()
{
    QString email = ui->email->text();
    QString password = ui->password->text();

        if(email ==  "admin" && password == "admin") {
            admin_dashboard ad;
            ad.setModal(true);
            ad.exec();

        }
        else
        {
            userDashboard h1;
            h1.setModal(true);
            hide();
            h1.exec();
        }
}


void log_in::on_home_2_clicked()
{

}

