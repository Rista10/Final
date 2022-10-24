#include "about.h"
#include "ui_about.h"
#include "mainwindow.h"
#include "why_become_donor.h"

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
}

about::~about()
{
    delete ui;
}

void about::on_home_clicked()
{

}


void about::on_about_2_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}

