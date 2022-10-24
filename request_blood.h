#ifndef REQUEST_BLOOD_H
#define REQUEST_BLOOD_H

#include <QDialog>

namespace Ui {
class request_blood;
}

class request_blood : public QDialog
{
    Q_OBJECT

public:
    explicit request_blood(QWidget *parent = nullptr);
    ~request_blood();

private slots:
    void on_my_details_2_clicked();

    void on_my_details_3_clicked();

    void on_my_details_clicked();

private:
    Ui::request_blood *ui;
};

#endif // REQUEST_BLOOD_H
