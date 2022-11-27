#ifndef EMERGENCYREQUEST_ADMIN_H
#define EMERGENCYREQUEST_ADMIN_H

#include <QDialog>

namespace Ui {
class emergencyRequest_admin;
}

class emergencyRequest_admin : public QDialog
{
    Q_OBJECT

public:
    explicit emergencyRequest_admin(QWidget *parent = nullptr);
    ~emergencyRequest_admin();

private:
    Ui::emergencyRequest_admin *ui;
};

#endif // EMERGENCYREQUEST_ADMIN_H
