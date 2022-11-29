/********************************************************************************
** Form generated from reading UI file 'request_blood.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUEST_BLOOD_H
#define UI_REQUEST_BLOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_request_blood
{
public:
    QLabel *label_7;
    QPushButton *home;
    QPushButton *about;
    QPushButton *why;
    QPushButton *login;
    QFrame *line;
    QLabel *label;
    QFrame *line_4;
    QLabel *label_2;
    QLabel *label_5;
    QFrame *line_3;
    QPushButton *my_details_3;
    QPushButton *my_details;
    QFrame *line_2;
    QFrame *line_5;
    QPushButton *my_details_2;
    QFrame *line_6;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *age;
    QLineEdit *phone_number;
    QLineEdit *contact_person;
    QLineEdit *blood_group;
    QLineEdit *gender;
    QLabel *label_15;
    QPushButton *register_2;
    QLineEdit *patient_name;
    QLineEdit *detail;
    QLabel *label_32;
    QLabel *label_6;
    QLabel *label_26;
    QLabel *label_29;
    QCalendarWidget *calendarWidget;
    QLabel *label_31;
    QLabel *label_24;
    QLabel *label_23;
    QLabel *label_30;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_25;
    QLabel *label_33;
    QLabel *label_34;
    QLineEdit *required_unit;
    QPushButton *register_3;
    QPushButton *login_2;

    void setupUi(QDialog *request_blood)
    {
        if (request_blood->objectName().isEmpty())
            request_blood->setObjectName("request_blood");
        request_blood->resize(1270, 700);
        request_blood->setStyleSheet(QString::fromUtf8("background-color: #EFE6E7;"));
        label_7 = new QLabel(request_blood);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        home = new QPushButton(request_blood);
        home->setObjectName("home");
        home->setGeometry(QRect(290, 30, 111, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        home->setFont(font);
        home->setCursor(QCursor(Qt::PointingHandCursor));
        home->setStyleSheet(QString::fromUtf8("#home\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#home::hover{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        about = new QPushButton(request_blood);
        about->setObjectName("about");
        about->setGeometry(QRect(420, 30, 151, 41));
        about->setFont(font);
        about->setCursor(QCursor(Qt::PointingHandCursor));
        about->setStyleSheet(QString::fromUtf8("#about\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#about::hover{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        why = new QPushButton(request_blood);
        why->setObjectName("why");
        why->setGeometry(QRect(600, 30, 221, 41));
        why->setFont(font);
        why->setCursor(QCursor(Qt::PointingHandCursor));
        why->setStyleSheet(QString::fromUtf8("#why\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#why::hover\n"
"{\n"
"border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        login = new QPushButton(request_blood);
        login->setObjectName("login");
        login->setGeometry(QRect(930, 30, 151, 41));
        login->setFont(font);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setStyleSheet(QString::fromUtf8("#login\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"#login::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        line = new QFrame(request_blood);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 99, 1280, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(request_blood);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        line_4 = new QFrame(request_blood);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(25, 435, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(request_blood);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(25, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_5 = new QLabel(request_blood);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 130, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        line_3 = new QFrame(request_blood);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(25, 360, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        my_details_3 = new QPushButton(request_blood);
        my_details_3->setObjectName("my_details_3");
        my_details_3->setGeometry(QRect(30, 370, 81, 61));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        my_details_3->setFont(font1);
        my_details_3->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_3->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"\n"
"#my_details_3::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}\n"
""));
        my_details = new QPushButton(request_blood);
        my_details->setObjectName("my_details");
        my_details->setGeometry(QRect(30, 210, 81, 61));
        my_details->setFont(font1);
        my_details->setCursor(QCursor(Qt::PointingHandCursor));
        my_details->setStyleSheet(QString::fromUtf8("#my_details\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"\n"
"#my_details::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        line_2 = new QFrame(request_blood);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(25, 280, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(request_blood);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(25, 200, 89, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        my_details_2 = new QPushButton(request_blood);
        my_details_2->setObjectName("my_details_2");
        my_details_2->setGeometry(QRect(30, 290, 81, 61));
        my_details_2->setFont(font1);
        my_details_2->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_2->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"\n"
"#my_details_2::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}\n"
""));
        line_6 = new QFrame(request_blood);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(20, 440, 89, 3));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(request_blood);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(138, 125, 845, 542));
        QFont font2;
        font2.setPointSize(8);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_4 = new QLabel(request_blood);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 140, 403, 502));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/Images/request_blood.jpg);\n"
""));
        age = new QLineEdit(request_blood);
        age->setObjectName("age");
        age->setGeometry(QRect(570, 330, 91, 50));
        age->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        phone_number = new QLineEdit(request_blood);
        phone_number->setObjectName("phone_number");
        phone_number->setGeometry(QRect(570, 390, 201, 50));
        phone_number->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        contact_person = new QLineEdit(request_blood);
        contact_person->setObjectName("contact_person");
        contact_person->setGeometry(QRect(570, 210, 376, 50));
        contact_person->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        blood_group = new QLineEdit(request_blood);
        blood_group->setObjectName("blood_group");
        blood_group->setGeometry(QRect(680, 330, 121, 50));
        blood_group->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"\n"
"}"));
        gender = new QLineEdit(request_blood);
        gender->setObjectName("gender");
        gender->setGeometry(QRect(820, 330, 121, 50));
        gender->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        label_15 = new QLabel(request_blood);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(570, 150, 231, 41));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        label_15->setFont(font3);
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        register_2 = new QPushButton(request_blood);
        register_2->setObjectName("register_2");
        register_2->setGeometry(QRect(570, 560, 181, 61));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        register_2->setFont(font4);
        register_2->setCursor(QCursor(Qt::PointingHandCursor));
        register_2->setStyleSheet(QString::fromUtf8("#register_2\n"
"{\n"
"background-color:rgb(144, 10, 18);\n"
"border-radius:8px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#register_2::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        patient_name = new QLineEdit(request_blood);
        patient_name->setObjectName("patient_name");
        patient_name->setGeometry(QRect(570, 270, 376, 50));
        patient_name->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        detail = new QLineEdit(request_blood);
        detail->setObjectName("detail");
        detail->setGeometry(QRect(570, 450, 371, 101));
        detail->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        label_32 = new QLabel(request_blood);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(1095, 360, 131, 41));
        label_6 = new QLabel(request_blood);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1007, 127, 237, 306));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_26 = new QLabel(request_blood);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(1020, 270, 212, 66));
        label_26->setCursor(QCursor(Qt::PointingHandCursor));
        label_26->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_29 = new QLabel(request_blood);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(1030, 360, 51, 41));
        label_29->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/announcement.png);"));
        calendarWidget = new QCalendarWidget(request_blood);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1010, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 9pt \"Segoe UI\";\n"
"border-radius:5px;"));
        label_31 = new QLabel(request_blood);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(1095, 280, 131, 41));
        label_31->setCursor(QCursor(Qt::PointingHandCursor));
        label_31->setStyleSheet(QString::fromUtf8("\n"
"#label_31::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_24 = new QLabel(request_blood);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(1020, 190, 212, 66));
        label_24->setCursor(QCursor(Qt::PointingHandCursor));
        label_24->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_23 = new QLabel(request_blood);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(1060, 140, 141, 31));
        label_23->setFont(font1);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_30 = new QLabel(request_blood);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(1095, 200, 131, 41));
        label_30->setCursor(QCursor(Qt::PointingHandCursor));
        label_30->setStyleSheet(QString::fromUtf8("\n"
"#label_30::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_27 = new QLabel(request_blood);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(1030, 200, 51, 41));
        label_27->setCursor(QCursor(Qt::PointingHandCursor));
        label_27->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/Donor.png);"));
        label_28 = new QLabel(request_blood);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(1030, 280, 51, 41));
        label_28->setCursor(QCursor(Qt::PointingHandCursor));
        label_28->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/hospital.png);"));
        label_25 = new QLabel(request_blood);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(1020, 350, 212, 66));
        label_25->setCursor(QCursor(Qt::PointingHandCursor));
        label_25->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_33 = new QLabel(request_blood);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(1085, 360, 131, 41));
        label_33->setCursor(QCursor(Qt::PointingHandCursor));
        label_33->setStyleSheet(QString::fromUtf8("\n"
"#label_33::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_34 = new QLabel(request_blood);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(1030, 360, 51, 41));
        label_34->setCursor(QCursor(Qt::PointingHandCursor));
        label_34->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/announcement.png);"));
        required_unit = new QLineEdit(request_blood);
        required_unit->setObjectName("required_unit");
        required_unit->setGeometry(QRect(780, 390, 161, 50));
        required_unit->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        register_3 = new QPushButton(request_blood);
        register_3->setObjectName("register_3");
        register_3->setGeometry(QRect(760, 560, 181, 61));
        register_3->setFont(font4);
        register_3->setCursor(QCursor(Qt::PointingHandCursor));
        register_3->setStyleSheet(QString::fromUtf8("#register_3\n"
"{\n"
"background-color:rgb(144, 10, 18);\n"
"border-radius:8px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#register_3::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        login_2 = new QPushButton(request_blood);
        login_2->setObjectName("login_2");
        login_2->setGeometry(QRect(1100, 30, 151, 41));
        login_2->setFont(font);
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
        label->raise();
        label_7->raise();
        home->raise();
        about->raise();
        why->raise();
        login->raise();
        line->raise();
        line_4->raise();
        label_2->raise();
        label_5->raise();
        line_3->raise();
        my_details_3->raise();
        my_details->raise();
        line_2->raise();
        line_5->raise();
        my_details_2->raise();
        line_6->raise();
        label_3->raise();
        label_4->raise();
        age->raise();
        phone_number->raise();
        contact_person->raise();
        blood_group->raise();
        gender->raise();
        label_15->raise();
        register_2->raise();
        patient_name->raise();
        detail->raise();
        label_32->raise();
        label_6->raise();
        label_26->raise();
        label_29->raise();
        calendarWidget->raise();
        label_31->raise();
        label_24->raise();
        label_23->raise();
        label_30->raise();
        label_27->raise();
        label_28->raise();
        label_25->raise();
        label_33->raise();
        label_34->raise();
        required_unit->raise();
        register_3->raise();
        login_2->raise();

        retranslateUi(request_blood);

        QMetaObject::connectSlotsByName(request_blood);
    } // setupUi

    void retranslateUi(QDialog *request_blood)
    {
        request_blood->setWindowTitle(QCoreApplication::translate("request_blood", "Dialog", nullptr));
        label_7->setText(QString());
        home->setText(QCoreApplication::translate("request_blood", "Home", nullptr));
        about->setText(QCoreApplication::translate("request_blood", "About us", nullptr));
        why->setText(QCoreApplication::translate("request_blood", "Why become donor", nullptr));
        login->setText(QCoreApplication::translate("request_blood", "Dashboard", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_5->setText(QString());
        my_details_3->setText(QCoreApplication::translate("request_blood", "Request\n"
"Blood", nullptr));
        my_details->setText(QCoreApplication::translate("request_blood", "My\n"
"Details", nullptr));
        my_details_2->setText(QCoreApplication::translate("request_blood", "Donate\n"
"Blood", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        age->setText(QString());
        age->setPlaceholderText(QCoreApplication::translate("request_blood", "     Age  ", nullptr));
        phone_number->setText(QString());
        phone_number->setPlaceholderText(QCoreApplication::translate("request_blood", "   Phone Number", nullptr));
        contact_person->setText(QString());
        contact_person->setPlaceholderText(QCoreApplication::translate("request_blood", "    Contact Person Name", nullptr));
        blood_group->setText(QString());
        blood_group->setPlaceholderText(QCoreApplication::translate("request_blood", "   Blood Group", nullptr));
        gender->setText(QString());
        gender->setPlaceholderText(QCoreApplication::translate("request_blood", "  Gender", nullptr));
        label_15->setText(QCoreApplication::translate("request_blood", "Request blood", nullptr));
        register_2->setText(QCoreApplication::translate("request_blood", "Request Blood", nullptr));
        patient_name->setText(QString());
        patient_name->setPlaceholderText(QCoreApplication::translate("request_blood", "     Patient Name", nullptr));
        detail->setText(QString());
        detail->setPlaceholderText(QCoreApplication::translate("request_blood", "   More detail about case", nullptr));
        label_32->setText(QCoreApplication::translate("request_blood", "Announcements", nullptr));
        label_6->setText(QString());
        label_26->setText(QString());
        label_29->setText(QString());
        label_31->setText(QCoreApplication::translate("request_blood", "Donation time:\n"
"9 December,2022", nullptr));
        label_24->setText(QString());
        label_23->setText(QCoreApplication::translate("request_blood", "Blood Donation ", nullptr));
        label_30->setText(QCoreApplication::translate("request_blood", "Last donated:\n"
"9 September,2022", nullptr));
        label_27->setText(QString());
        label_28->setText(QString());
        label_25->setText(QString());
        label_33->setText(QCoreApplication::translate("request_blood", "Announcements", nullptr));
        label_34->setText(QString());
        required_unit->setText(QString());
        required_unit->setPlaceholderText(QCoreApplication::translate("request_blood", "  Required unit", nullptr));
        register_3->setText(QCoreApplication::translate("request_blood", "Emergency request", nullptr));
        login_2->setText(QCoreApplication::translate("request_blood", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class request_blood: public Ui_request_blood {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUEST_BLOOD_H
