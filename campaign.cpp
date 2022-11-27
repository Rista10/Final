#include "campaign.h"
#include "ui_campaign.h"
#include <user_details.h>
#include <donor_request.h>
#include <patient_requests.h>
#include <mainwindow.h>
#include <about.h>
#include <why_become_donor.h>
#include <userdashboard.h>

campaign::campaign(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::campaign)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
}

campaign::~campaign()
{
    delete ui;
}

void campaign::on_my_details_clicked()
{
    user_details u1;
    u1.setModal(true);
    hide();
    u1.exec();
}


void campaign::on_my_details_2_clicked()
{
    donor_request d1;
    d1.setModal(true);
    hide();
    d1.exec();
}


void campaign::on_my_details_3_clicked()
{
    patient_requests r1;
    r1.setModal(true);
    hide();
    r1.exec();
}


void campaign::on_home_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void campaign::on_about_2_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void campaign::on_why_2_clicked()
{

    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void campaign::on_login_2_clicked()
{
    userDashboard ud;
    ud.setModal(true);
    hide();
    ud.exec();
}

