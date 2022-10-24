#ifndef PATIENT_REQUESTS_H
#define PATIENT_REQUESTS_H

#include <QDialog>

namespace Ui {
class patient_requests;
}

class patient_requests : public QDialog
{
    Q_OBJECT

public:
    explicit patient_requests(QWidget *parent = nullptr);
    ~patient_requests();

private:
    Ui::patient_requests *ui;
};

#endif // PATIENT_REQUESTS_H
