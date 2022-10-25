#include "user_details.h"
#include "ui_user_details.h"

user_details::user_details(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user_details)
{
    ui->setupUi(this);
}

user_details::~user_details()
{
    delete ui;
}
