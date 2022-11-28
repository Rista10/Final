#ifndef EMERGENCYREQUEST_ADMIN_H
#define EMERGENCYREQUEST_ADMIN_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>


namespace Ui {
class emergencyRequest_admin;
}

class emergencyRequest_admin : public QDialog
{
    Q_OBJECT

public:
    explicit emergencyRequest_admin(QWidget *parent = nullptr);
    ~emergencyRequest_admin();

private slots:
    void on_search_textChanged(const QString &arg1);

private:
    Ui::emergencyRequest_admin *ui;
};

#endif // EMERGENCYREQUEST_ADMIN_H
