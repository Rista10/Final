#ifndef EMERGENCYREQUEST_PATIENT_H
#define EMERGENCYREQUEST_PATIENT_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>


namespace Ui {
class emergencyRequest_patient;
}

class emergencyRequest_patient : public QDialog
{
    Q_OBJECT

public:
    explicit emergencyRequest_patient(QWidget *parent = nullptr);
    ~emergencyRequest_patient();

private slots:
    void on_search_textChanged(const QString &arg1);

private:
    Ui::emergencyRequest_patient *ui;
};

#endif // EMERGENCYREQUEST_PATIENT_H
