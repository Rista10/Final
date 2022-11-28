#include "emergencyrequest_admin.h"
#include "ui_emergencyrequest_admin.h"

emergencyRequest_admin::emergencyRequest_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::emergencyRequest_admin)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");
    if(db.open())
    {
        QSqlQueryModel *modal =new QSqlQueryModel();

        QSqlQuery * qry=new QSqlQuery();
        qry->prepare("select * from patient_details where status='emergency'");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }

    QIcon search (":/Images/search.jpg");

    ui->search->addAction(search,QLineEdit::LeadingPosition);
}

emergencyRequest_admin::~emergencyRequest_admin()
{
    delete ui;
}

void emergencyRequest_admin::on_search_textChanged(const QString &arg1)
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");
    if(db.open())
    {
        QString search=ui->search->text();
        QSqlQueryModel *modal =new QSqlQueryModel();

        QSqlQuery * qry=new QSqlQuery();
        qry->prepare("select * from patient_details where status='emergency' and contact_person_name like '"+search+"%"+"'");
        qry->bindValue(":search", search);
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }
}

