#include "why_become_donor.h"
#include "ui_why_become_donor.h"

why_become_donor::why_become_donor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::why_become_donor)
{
    ui->setupUi(this);
}

why_become_donor::~why_become_donor()
{
    delete ui;
}
