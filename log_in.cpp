#include "log_in.h"
#include "ui_log_in.h"
#include "mainwindow.h"
#include "userdashboard.h"
#include "admin_dashboard.h"


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


void log_in::on_signin_clicked()
{
    QString email = ui->email->text();
    QString password = ui->password->text();

        if(email ==  "admin" && password == "admin")
        {
            admin_dashboard ad;
            ad.setModal(true);
            ad.exec();

        }
        else
        {
            QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");

            if(db.open())
            {
                QSqlQuery qry;
                int count=0;
                if(qry.exec("select * from user_details where email='"+email+"' and password='"+password+"'"))
                {

                    while(qry.next())
                    {
                        count++;
                    }
                }
                if(count==1)
                {
                    userDashboard h1;
                    h1.setModal(true);
                    hide();
                    h1.exec();
                }
                else
                {
                     QMessageBox::information(this,"Information","Wrong email and password");
                }

            }
            else
                QMessageBox::information(this,"Connection","Database not connected");
            }

}



void log_in::on_home_2_clicked()
{

}

