#include "emergencyrequest_patient.h"
#include "ui_emergencyrequest_patient.h"

emergencyRequest_patient::emergencyRequest_patient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::emergencyRequest_patient)
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
        qry->prepare("select contact_person_name,phone_number , required_units,blood_group from patient_details where status='emergency'");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }

    QIcon search (":/Images/search.jpg");

    ui->search->addAction(search,QLineEdit::LeadingPosition);
}

emergencyRequest_patient::~emergencyRequest_patient()
{
    delete ui;
}

void emergencyRequest_patient::on_search_textChanged(const QString &arg1)
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");
    if(db.open())
    {
        QString search=ui->search->text();
        QSqlQueryModel *modal =new QSqlQueryModel();

        QSqlQuery * qry=new QSqlQuery();
        qry->prepare("select contact_person_name,phone_number , required_units,blood_group from patient_details where status='emergency' and  contact_person_name like '"+search+"%"+"'");
        qry->bindValue(":search", search);
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }
}

