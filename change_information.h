#ifndef CHANGE_INFORMATION_H
#define CHANGE_INFORMATION_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class change_information;
}

class change_information : public QDialog
{
    Q_OBJECT

public:
    explicit change_information(QWidget *parent = nullptr);
    ~change_information();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::change_information *ui;
};

#endif // CHANGE_INFORMATION_H
