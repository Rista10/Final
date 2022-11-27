#include "camaign_admin.h"
#include "ui_camaign_admin.h"

camaign_admin::camaign_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::camaign_admin)
{
    ui->setupUi(this);
}

camaign_admin::~camaign_admin()
{
    delete ui;
}
