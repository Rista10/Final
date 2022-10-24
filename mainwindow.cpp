#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "log_in.h"
#include "about.h"
#include "why_become_donor.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    log_in l1;
    l1.setModal(true);
    hide();
    l1.exec();

}


void MainWindow::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void MainWindow::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}

