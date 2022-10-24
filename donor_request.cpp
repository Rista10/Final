#include "donor_request.h"
#include "ui_donor_request.h"

donor_request::donor_request(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::donor_request)
{
    ui->setupUi(this);
}

donor_request::~donor_request()
{
    delete ui;
}
