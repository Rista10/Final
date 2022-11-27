/********************************************************************************
** Form generated from reading UI file 'log_in.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_IN_H
#define UI_LOG_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_log_in
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *signin;
    QLineEdit *email;
    QLabel *password_2;
    QLabel *email_2;
    QLineEdit *password;
    QLabel *label_5;
    QPushButton *home_2;

    void setupUi(QDialog *log_in)
    {
        if (log_in->objectName().isEmpty())
            log_in->setObjectName("log_in");
        log_in->resize(1270, 700);
        log_in->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(log_in);
        label->setObjectName("label");
        label->setGeometry(QRect(1127, 828, 63, 20));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/login.png);"));
        label_2 = new QLabel(log_in);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(702, 33, 491, 601));
        label_2->setStyleSheet(QString::fromUtf8("border-radius:53px;\n"
"background-color:#F1EEEE;"));
        label_3 = new QLabel(log_in);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(900, 89, 81, 81));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/log_in.png);\n"
"background-color:#F1EEEE;"));
        label_4 = new QLabel(log_in);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(885, 170, 141, 81));
        QFont font;
        font.setPointSize(31);
        font.setBold(true);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-color:#F1EEEE;"));
        signin = new QPushButton(log_in);
        signin->setObjectName("signin");
        signin->setGeometry(QRect(748, 520, 400, 50));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        signin->setFont(font1);
        signin->setCursor(QCursor(Qt::PointingHandCursor));
        signin->setStyleSheet(QString::fromUtf8("#signin\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"#signin::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        email = new QLineEdit(log_in);
        email->setObjectName("email");
        email->setGeometry(QRect(748, 306, 400, 50));
        email->setStyleSheet(QString::fromUtf8("#email\n"
"{\n"
"border-radius:5px;\n"
"background-color:rgb(255, 255, 255)\n"
"}"));
        password_2 = new QLabel(log_in);
        password_2->setObjectName("password_2");
        password_2->setGeometry(QRect(747, 385, 71, 20));
        QFont font2;
        font2.setBold(true);
        password_2->setFont(font2);
        password_2->setStyleSheet(QString::fromUtf8("background-color:#F1EEEE;\n"
""));
        email_2 = new QLabel(log_in);
        email_2->setObjectName("email_2");
        email_2->setGeometry(QRect(747, 279, 63, 20));
        email_2->setFont(font2);
        email_2->setStyleSheet(QString::fromUtf8("background-color:#F1EEEE;"));
        password = new QLineEdit(log_in);
        password->setObjectName("password");
        password->setGeometry(QRect(748, 412, 400, 50));
        password->setStyleSheet(QString::fromUtf8("#password\n"
"{\n"
"border-radius:5px;\n"
"background-color:rgb(255, 255, 255)\n"
"}"));
        password->setEchoMode(QLineEdit::Password);
        label_5 = new QLabel(log_in);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(75, 60, 591, 601));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/login.jpg);"));
        home_2 = new QPushButton(log_in);
        home_2->setObjectName("home_2");
        home_2->setGeometry(QRect(40, 30, 60, 59));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        home_2->setFont(font3);
        home_2->setCursor(QCursor(Qt::PointingHandCursor));
        home_2->setStyleSheet(QString::fromUtf8("#home_2\n"
"\n"
"{\n"
"	border-color: rgb(0, 0, 0);\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    padding: 5px;\n"
"	border-image: url(:/Images/back_arrow.png);\n"
"}\n"
""));
        label_5->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        signin->raise();
        email->raise();
        password_2->raise();
        email_2->raise();
        password->raise();
        home_2->raise();

        retranslateUi(log_in);

        QMetaObject::connectSlotsByName(log_in);
    } // setupUi

    void retranslateUi(QDialog *log_in)
    {
        log_in->setWindowTitle(QCoreApplication::translate("log_in", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("log_in", "TextLabel", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("log_in", "Login", nullptr));
        signin->setText(QCoreApplication::translate("log_in", "Sign in", nullptr));
        password_2->setText(QCoreApplication::translate("log_in", "Password", nullptr));
        email_2->setText(QCoreApplication::translate("log_in", "Email", nullptr));
        label_5->setText(QString());
        home_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class log_in: public Ui_log_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_IN_H
