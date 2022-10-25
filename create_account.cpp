#include "create_account.h"
#include "ui_create_account.h"

create_account::create_account(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::create_account)
{
    ui->setupUi(this);
}

create_account::~create_account()
{
    delete ui;
}
