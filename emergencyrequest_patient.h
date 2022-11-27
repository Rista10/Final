#ifndef EMERGENCYREQUEST_PATIENT_H
#define EMERGENCYREQUEST_PATIENT_H

#include <QDialog>

namespace Ui {
class emergencyRequest_patient;
}

class emergencyRequest_patient : public QDialog
{
    Q_OBJECT

public:
    explicit emergencyRequest_patient(QWidget *parent = nullptr);
    ~emergencyRequest_patient();

private:
    Ui::emergencyRequest_patient *ui;
};

#endif // EMERGENCYREQUEST_PATIENT_H
