#include "request_blood.h"
#include "ui_request_blood.h"
#include "donate_blood.h"
#include "my_details.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "userdashboard.h"

request_blood::request_blood(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::request_blood)
{
    ui->setupUi(this);
}

request_blood::~request_blood()
{
    delete ui;
}

void request_blood::on_my_details_2_clicked()
{
    donate_blood dq;
    dq.setModal(true);
    hide();
    dq.exec();
}


void request_blood::on_my_details_3_clicked()
{
    request_blood rq;
    rq.setModal(true);
    hide();
    rq.exec();
}


void request_blood::on_my_details_clicked()
{

    my_details m1;
    m1.setModal(true);
    hide();
    m1.exec();
}


void request_blood::on_login_clicked()
{
    userDashboard ud;
    ud.setModal(true);
    hide();
    ud.exec();
}


void request_blood::on_register_2_clicked()
{

}

