#include "userdashboard.h"
#include "ui_userdashboard.h"
#include "donate_blood.h"
#include "request_blood.h"
#include "my_details.h"

userDashboard::userDashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userDashboard)
{
    ui->setupUi(this);
}

userDashboard::~userDashboard()
{
    delete ui;
}

void userDashboard::on_my_details_2_clicked()
{
    donate_blood di;
    di.setModal(true);
    di.exec();
}


void userDashboard::on_my_details_3_clicked()
{
    request_blood rq;
    rq.setModal(true);
    hide();
    rq.exec();
}


void userDashboard::on_my_details_clicked()
{
    my_details m1;
    m1.setModal(true);
    m1.exec();
}

