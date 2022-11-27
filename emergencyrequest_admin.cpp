#include "emergencyrequest_admin.h"
#include "ui_emergencyrequest_admin.h"

emergencyRequest_admin::emergencyRequest_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::emergencyRequest_admin)
{
    ui->setupUi(this);
}

emergencyRequest_admin::~emergencyRequest_admin()
{
    delete ui;
}
