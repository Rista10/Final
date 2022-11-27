#ifndef CAMPAIGN_H
#define CAMPAIGN_H

#include <QDialog>

namespace Ui {
class campaign;
}

class campaign : public QDialog
{
    Q_OBJECT

public:
    explicit campaign(QWidget *parent = nullptr);
    ~campaign();

private slots:
    void on_my_details_clicked();

    void on_my_details_2_clicked();

    void on_my_details_3_clicked();

    void on_home_2_clicked();

    void on_about_2_clicked();

    void on_why_2_clicked();

    void on_login_2_clicked();

private:
    Ui::campaign *ui;
};

#endif // CAMPAIGN_H
