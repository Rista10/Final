/********************************************************************************
** Form generated from reading UI file 'donor_request.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONOR_REQUEST_H
#define UI_DONOR_REQUEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_donor_request
{
public:
    QLabel *label_28;
    QLabel *label_5;
    QLabel *label_31;
    QLabel *label_24;
    QLabel *label_29;
    QLabel *label_23;
    QFrame *line_3;
    QFrame *line;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_30;
    QPushButton *my_details_2;
    QPushButton *my_details_3;
    QPushButton *login;
    QFrame *line_4;
    QLabel *label_26;
    QLabel *label_7;
    QLabel *label_25;
    QCalendarWidget *calendarWidget;
    QLabel *label_32;
    QPushButton *why;
    QLabel *label_27;
    QPushButton *my_details;
    QPushButton *home;
    QPushButton *about;
    QLabel *label_2;
    QFrame *line_2;
    QLabel *label_4;
    QTableView *tableView;
    QLineEdit *search;
    QPushButton *pushButton;
    QPushButton *login_2;

    void setupUi(QDialog *donor_request)
    {
        if (donor_request->objectName().isEmpty())
            donor_request->setObjectName("donor_request");
        donor_request->resize(1270, 700);
        donor_request->setStyleSheet(QString::fromUtf8("background-color:#EFE6E7;"));
        label_28 = new QLabel(donor_request);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(1030, 280, 52, 52));
        label_28->setCursor(QCursor(Qt::PointingHandCursor));
        label_28->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood.png);"));
        label_5 = new QLabel(donor_request);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(35, 140, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        label_31 = new QLabel(donor_request);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(1095, 280, 131, 41));
        label_31->setCursor(QCursor(Qt::PointingHandCursor));
        label_31->setStyleSheet(QString::fromUtf8("#label_31::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_24 = new QLabel(donor_request);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(1020, 190, 212, 66));
        label_24->setCursor(QCursor(Qt::PointingHandCursor));
        label_24->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_29 = new QLabel(donor_request);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(1030, 360, 51, 41));
        label_29->setCursor(QCursor(Qt::PointingHandCursor));
        label_29->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/announcement.png);"));
        label_23 = new QLabel(donor_request);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(1030, 140, 201, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        line_3 = new QFrame(donor_request);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(20, 370, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line = new QFrame(donor_request);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 210, 89, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(donor_request);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(donor_request);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(138, 125, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_30 = new QLabel(donor_request);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(1095, 200, 131, 41));
        label_30->setCursor(QCursor(Qt::PointingHandCursor));
        label_30->setStyleSheet(QString::fromUtf8("#label_30::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        my_details_2 = new QPushButton(donor_request);
        my_details_2->setObjectName("my_details_2");
        my_details_2->setGeometry(QRect(25, 300, 81, 61));
        my_details_2->setFont(font);
        my_details_2->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_2->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"\n"
"#my_details_2::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}\n"
""));
        my_details_3 = new QPushButton(donor_request);
        my_details_3->setObjectName("my_details_3");
        my_details_3->setGeometry(QRect(25, 380, 81, 61));
        my_details_3->setFont(font);
        my_details_3->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_3->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"#my_details_3::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        login = new QPushButton(donor_request);
        login->setObjectName("login");
        login->setGeometry(QRect(930, 30, 151, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        login->setFont(font1);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setStyleSheet(QString::fromUtf8("#login\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#login::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        line_4 = new QFrame(donor_request);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(20, 445, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_26 = new QLabel(donor_request);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(1020, 270, 212, 66));
        label_26->setCursor(QCursor(Qt::PointingHandCursor));
        label_26->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_7 = new QLabel(donor_request);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        label_25 = new QLabel(donor_request);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(1020, 350, 212, 66));
        label_25->setCursor(QCursor(Qt::PointingHandCursor));
        label_25->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        calendarWidget = new QCalendarWidget(donor_request);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1010, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_32 = new QLabel(donor_request);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(1095, 360, 131, 41));
        label_32->setCursor(QCursor(Qt::PointingHandCursor));
        label_32->setStyleSheet(QString::fromUtf8("#label_32::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        why = new QPushButton(donor_request);
        why->setObjectName("why");
        why->setGeometry(QRect(550, 30, 231, 41));
        why->setFont(font1);
        why->setCursor(QCursor(Qt::PointingHandCursor));
        why->setStyleSheet(QString::fromUtf8("#why\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"#why::hover\n"
"{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        label_27 = new QLabel(donor_request);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(1030, 200, 52, 52));
        label_27->setCursor(QCursor(Qt::PointingHandCursor));
        label_27->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood.png);"));
        my_details = new QPushButton(donor_request);
        my_details->setObjectName("my_details");
        my_details->setGeometry(QRect(25, 220, 81, 61));
        my_details->setFont(font);
        my_details->setCursor(QCursor(Qt::PointingHandCursor));
        my_details->setStyleSheet(QString::fromUtf8("#my_details\n"
"\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"#my_details::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        home = new QPushButton(donor_request);
        home->setObjectName("home");
        home->setGeometry(QRect(270, 30, 111, 41));
        home->setFont(font1);
        home->setCursor(QCursor(Qt::PointingHandCursor));
        home->setStyleSheet(QString::fromUtf8("#home\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"#home::hover\n"
"{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        about = new QPushButton(donor_request);
        about->setObjectName("about");
        about->setGeometry(QRect(410, 30, 111, 41));
        about->setFont(font1);
        about->setCursor(QCursor(Qt::PointingHandCursor));
        about->setStyleSheet(QString::fromUtf8("#about\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"#about::hover\n"
"{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        label_2 = new QLabel(donor_request);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        line_2 = new QFrame(donor_request);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(20, 290, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(donor_request);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(1007, 127, 237, 306));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        tableView = new QTableView(donor_request);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(170, 209, 777, 431));
        tableView->setStyleSheet(QString::fromUtf8("border-color: rgb(31, 31, 31);\n"
"background-color: rgb(255, 255, 255);\n"
"border-width : 1.2px;\n"
"border-style:inset;\n"
""));
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);
        search = new QLineEdit(donor_request);
        search->setObjectName("search");
        search->setGeometry(QRect(170, 148, 461, 38));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Andale Mono")});
        font2.setPointSize(11);
        search->setFont(font2);
        search->setCursor(QCursor(Qt::IBeamCursor));
        search->setStyleSheet(QString::fromUtf8("background-color: #F1EEEE;;\n"
"color:grey;\n"
"border-radius:15px;\n"
"font-family:Andale Mono;"));
        pushButton = new QPushButton(donor_request);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(840, 148, 101, 38));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{background-color: rgb(144, 10, 18);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"}\n"
"\n"
"#pushButton::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        login_2 = new QPushButton(donor_request);
        login_2->setObjectName("login_2");
        login_2->setGeometry(QRect(1100, 30, 151, 41));
        login_2->setFont(font1);
        login_2->setCursor(QCursor(Qt::PointingHandCursor));
        login_2->setStyleSheet(QString::fromUtf8("#login_2\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#login_2::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_3->raise();
        label_4->raise();
        label_2->raise();
        label_5->raise();
        label_24->raise();
        label_23->raise();
        line_3->raise();
        line->raise();
        label->raise();
        label_30->raise();
        my_details_2->raise();
        my_details_3->raise();
        login->raise();
        line_4->raise();
        label_26->raise();
        label_7->raise();
        label_25->raise();
        calendarWidget->raise();
        label_32->raise();
        why->raise();
        label_27->raise();
        my_details->raise();
        home->raise();
        about->raise();
        line_2->raise();
        label_31->raise();
        label_28->raise();
        label_29->raise();
        tableView->raise();
        search->raise();
        pushButton->raise();
        login_2->raise();

        retranslateUi(donor_request);

        QMetaObject::connectSlotsByName(donor_request);
    } // setupUi

    void retranslateUi(QDialog *donor_request)
    {
        donor_request->setWindowTitle(QCoreApplication::translate("donor_request", "Dialog", nullptr));
        label_28->setText(QString());
        label_5->setText(QString());
        label_31->setText(QCoreApplication::translate("donor_request", "12 December,2022", nullptr));
        label_24->setText(QString());
        label_29->setText(QString());
        label_23->setText(QCoreApplication::translate("donor_request", "Blood Donation Camps", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        label_30->setText(QCoreApplication::translate("donor_request", "9 September,2022", nullptr));
        my_details_2->setText(QCoreApplication::translate("donor_request", "Donor\n"
"Requests", nullptr));
        my_details_3->setText(QCoreApplication::translate("donor_request", "Blood\n"
"Requests", nullptr));
        login->setText(QCoreApplication::translate("donor_request", "Dashboard", nullptr));
        label_26->setText(QString());
        label_7->setText(QString());
        label_25->setText(QString());
        label_32->setText(QCoreApplication::translate("donor_request", "Announcements", nullptr));
        why->setText(QCoreApplication::translate("donor_request", "Why become donor", nullptr));
        label_27->setText(QString());
        my_details->setText(QCoreApplication::translate("donor_request", "User\n"
"Details", nullptr));
        home->setText(QCoreApplication::translate("donor_request", "Home", nullptr));
        about->setText(QCoreApplication::translate("donor_request", "About us", nullptr));
        label_2->setText(QString());
        label_4->setText(QString());
        search->setText(QString());
        search->setPlaceholderText(QCoreApplication::translate("donor_request", "   Search", nullptr));
        pushButton->setText(QCoreApplication::translate("donor_request", "Edit", nullptr));
        login_2->setText(QCoreApplication::translate("donor_request", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class donor_request: public Ui_donor_request {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONOR_REQUEST_H
