#ifndef USER_DETAILS_H
#define USER_DETAILS_H

#include <QDialog>

namespace Ui {
class user_details;
}

class user_details : public QDialog
{
    Q_OBJECT

public:
    explicit user_details(QWidget *parent = nullptr);
    ~user_details();

private:
    Ui::user_details *ui;
};

#endif // USER_DETAILS_H
