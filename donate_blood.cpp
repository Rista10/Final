#include "donate_blood.h"
#include "ui_donate_blood.h"
#include "request_blood.h"
#include "my_details.h"

donate_blood::donate_blood(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::donate_blood)
{
    ui->setupUi(this);
}

donate_blood::~donate_blood()
{
    delete ui;
}

void donate_blood::on_my_details_3_clicked()
{
    request_blood rq;
    rq.setModal(true);
    rq.exec();

}


void donate_blood::on_my_details_2_clicked()
{
    donate_blood dq;
    dq.setModal(true);
    hide();
    dq.exec();
}


void donate_blood::on_my_details_clicked()
{

    my_details m1;
    m1.setModal(true);
    hide();
    m1.exec();
}

