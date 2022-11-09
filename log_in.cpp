#include "log_in.h"
#include "ui_log_in.h"
#include "mainwindow.h"
#include "userdashboard.h"
#include "admin_dashboard.h"
int id;

log_in::log_in(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::log_in)
{
    ui->setupUi(this);
    QIcon email ("C:/Users/user/Downloads/profile.png");
    QIcon password ("C:/Users/user/Downloads/lockk.png");

    ui->email->addAction(email,QLineEdit::LeadingPosition);
    ui->password->addAction(password,QLineEdit::LeadingPosition);
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
            hide();
            ad.exec();

        }
        else
        {
            QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");

            if(db.open())
            {
                if(email!="" && password!=""){
                QSqlQuery qry;
                int count=0;
                if(qry.exec("select * from user_details where email='"+email+"' and password='"+password+"'"))
                {
                    while(qry.next())
                    {
//                        ui->user_id->
                         id=qry.value(0).toInt();
                        count++;
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

                }
                else
                {
                       QMessageBox::information(this, "Error", "Fill in all the input fields .");
                }



            }
            else
                QMessageBox::information(this,"Connection","Database not connected");
            }

}




void log_in::on_home_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

