#include "my_details.h"
#include "ui_my_details.h"

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
