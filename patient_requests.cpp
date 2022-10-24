#include "patient_requests.h"
#include "ui_patient_requests.h"

patient_requests::patient_requests(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::patient_requests)
{
    ui->setupUi(this);
}

patient_requests::~patient_requests()
{
    delete ui;
}
