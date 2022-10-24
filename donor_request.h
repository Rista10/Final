#ifndef DONOR_REQUEST_H
#define DONOR_REQUEST_H

#include <QDialog>

namespace Ui {
class donor_request;
}

class donor_request : public QDialog
{
    Q_OBJECT

public:
    explicit donor_request(QWidget *parent = nullptr);
    ~donor_request();

private:
    Ui::donor_request *ui;
};

#endif // DONOR_REQUEST_H
