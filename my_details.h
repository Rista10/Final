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

private slots:
    void on_my_details_4_clicked();

    void on_my_details_3_clicked();

    void on_my_details_2_clicked();

    void on_login_clicked();

private:
    Ui::my_details *ui;
};

#endif // MY_DETAILS_H