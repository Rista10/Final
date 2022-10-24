#include "patient_requests.h"
#include "ui_patient_requests.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"

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
