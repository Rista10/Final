#include "log_in.h"
#include "ui_log_in.h"
#include "about_us.h"
#include "userdashboard.h"

log_in::log_in(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::log_in)
{
    ui->setupUi(this);
}

log_in::~log_in()
{
    delete ui;
}

void log_in::on_pushButton_clicked()
{
    userDashboard h1;
    h1.setModal(true);
    hide();
    h1.exec();
}

