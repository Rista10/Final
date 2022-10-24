#include "my_details.h"
#include "ui_my_details.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "donate_blood.h"
#include "request_blood.h"
#include "userdashboard.h"

my_details::my_details(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::my_details)
{
    ui->setupUi(this);
}

my_details::~my_details()
{
    delete ui;
}

void my_details::on_my_details_4_clicked()
{
    donate_blood di;
    di.setModal(true);
    hide();
    di.exec();
}


void my_details::on_my_details_3_clicked()
{
    request_blood rq;
    rq.setModal(true);
    hide();
    rq.exec();
}


void my_details::on_my_details_2_clicked()
{
    my_details m1;
    m1.setModal(true);
    hide();
    m1.exec();
}


void my_details::on_login_clicked()
{
    userDashboard ud;
    ud.setModal(true);
    hide();
    ud.exec();
}

