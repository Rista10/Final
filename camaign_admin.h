#ifndef CAMAIGN_ADMIN_H
#define CAMAIGN_ADMIN_H

#include <QDialog>

namespace Ui {
class camaign_admin;
}

class camaign_admin : public QDialog
{
    Q_OBJECT

public:
    explicit camaign_admin(QWidget *parent = nullptr);
    ~camaign_admin();

private:
    Ui::camaign_admin *ui;
};

#endif // CAMAIGN_ADMIN_H
