#ifndef DONATE_BLOOD_H
#define DONATE_BLOOD_H

#include <QDialog>

namespace Ui {
class donate_blood;
}

class donate_blood : public QDialog
{
    Q_OBJECT

public:
    explicit donate_blood(QWidget *parent = nullptr);
    ~donate_blood();

private slots:
    void on_my_details_3_clicked();

    void on_my_details_2_clicked();

    void on_my_details_clicked();

private:
    Ui::donate_blood *ui;
};

#endif // DONATE_BLOOD_H
