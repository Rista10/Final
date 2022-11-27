#include "emergencyrequest_patient.h"
#include "ui_emergencyrequest_patient.h"

emergencyRequest_patient::emergencyRequest_patient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::emergencyRequest_patient)
{
    ui->setupUi(this);
}

emergencyRequest_patient::~emergencyRequest_patient()
{
    delete ui;
}
