#ifndef MY_DETAILS_H
#define MY_DETAILS_H

#include <QDialog>

namespace Ui {
class my_details;
}

class my_details : public QDialog
{
    Q_OBJECT

public:
    explicit my_details(QWidget *parent = nullptr);
    ~my_details();

private:
    Ui::my_details *ui;
};

#endif // MY_DETAILS_H
