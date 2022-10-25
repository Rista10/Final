#ifndef ADMIN_DASHBOARD_H
#define ADMIN_DASHBOARD_H

#include <QDialog>

namespace Ui {
class admin_dashboard;
}

class admin_dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit admin_dashboard(QWidget *parent = nullptr);
    ~admin_dashboard();

private slots:
    void on_my_details_clicked();

    void on_my_details_2_clicked();

    void on_my_details_3_clicked();

private:
    Ui::admin_dashboard *ui;
};

#endif // ADMIN_DASHBOARD_H
