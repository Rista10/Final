/********************************************************************************
** Form generated from reading UI file 'donate_blood.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONATE_BLOOD_H
#define UI_DONATE_BLOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_donate_blood
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
    QLabel *label_27;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_29;
    QPushButton *register_2;
    QLabel *label_24;
    QLabel *label_23;
    QLineEdit *lineEdit_5;
    QLabel *label_34;
    QLabel *label_6;
    QLabel *label_26;
    QLabel *label_28;
    QLabel *label_3;
    QLineEdit *gender;
    QLabel *label_25;
    QLabel *label_15;
    QCalendarWidget *calendarWidget;
    QLabel *label_32;
    QLineEdit *phone_number;
    QLineEdit *name;
    QLabel *label_30;
    QLabel *label_31;
    QLineEdit *age;
    QLineEdit *location;
    QLabel *label_33;
    QLabel *label_8;
    QLineEdit *disease;
    QLineEdit *blood_group;
    QPushButton *donate;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;

    void setupUi(QDialog *donate_blood)
    {
        if (donate_blood->objectName().isEmpty())
            donate_blood->setObjectName("donate_blood");
        donate_blood->resize(1270, 700);
        donate_blood->setStyleSheet(QString::fromUtf8("background-color: #EFE6E7"));
        label_7 = new QLabel(donate_blood);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        home = new QPushButton(donate_blood);
        home->setObjectName("home");
        home->setGeometry(QRect(300, 30, 141, 41));
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
"#home::hover\n"
"{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        about = new QPushButton(donate_blood);
        about->setObjectName("about");
        about->setGeometry(QRect(430, 30, 151, 41));
        about->setFont(font);
        about->setCursor(QCursor(Qt::PointingHandCursor));
        about->setStyleSheet(QString::fromUtf8("#about\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#about::hover\n"
"{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        why = new QPushButton(donate_blood);
        why->setObjectName("why");
        why->setGeometry(QRect(580, 30, 221, 41));
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
"{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        login = new QPushButton(donate_blood);
        login->setObjectName("login");
        login->setGeometry(QRect(1070, 30, 151, 41));
        login->setFont(font);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setStyleSheet(QString::fromUtf8("#login\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"border-radius:20px;\n"
"color:rgb(255, 255, 255)\n"
"}\n"
"\n"
"#login::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        line = new QFrame(donate_blood);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 99, 1280, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(donate_blood);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        line_4 = new QFrame(donate_blood);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(25, 435, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(donate_blood);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(25, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_5 = new QLabel(donate_blood);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 130, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        line_3 = new QFrame(donate_blood);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(25, 360, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        my_details_3 = new QPushButton(donate_blood);
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
"#my_details_3::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}\n"
""));
        my_details = new QPushButton(donate_blood);
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
"#my_details::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        line_2 = new QFrame(donate_blood);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(25, 280, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(donate_blood);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(25, 200, 89, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        my_details_2 = new QPushButton(donate_blood);
        my_details_2->setObjectName("my_details_2");
        my_details_2->setGeometry(QRect(30, 290, 81, 61));
        my_details_2->setFont(font1);
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
        line_6 = new QFrame(donate_blood);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(25, 440, 89, 3));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_27 = new QLabel(donate_blood);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(1035, 200, 51, 41));
        label_27->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/Donor.png);"));
        label_4 = new QLabel(donate_blood);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(165, 140, 403, 502));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/Images/request_blood.jpg);\n"
""));
        lineEdit_4 = new QLineEdit(donate_blood);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(575, 450, 371, 101));
        lineEdit_4->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        label_29 = new QLabel(donate_blood);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(1035, 360, 51, 41));
        label_29->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/announcement.png);"));
        register_2 = new QPushButton(donate_blood);
        register_2->setObjectName("register_2");
        register_2->setGeometry(QRect(575, 560, 371, 50));
        register_2->setFont(font);
        register_2->setStyleSheet(QString::fromUtf8("#register_2\n"
"{\n"
"background-color:#F25019;\n"
"border-radius:5px;\n"
"}"));
        label_24 = new QLabel(donate_blood);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(1025, 190, 212, 66));
        label_24->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_23 = new QLabel(donate_blood);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(1065, 140, 141, 31));
        label_23->setFont(font1);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_5 = new QLineEdit(donate_blood);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(685, 330, 121, 50));
        lineEdit_5->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"\n"
"}"));
        label_34 = new QLabel(donate_blood);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(1035, 360, 51, 41));
        label_34->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/announcement.png);"));
        label_6 = new QLabel(donate_blood);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1012, 127, 237, 306));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_26 = new QLabel(donate_blood);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(1025, 270, 212, 66));
        label_26->setCursor(QCursor(Qt::PointingHandCursor));
        label_26->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_28 = new QLabel(donate_blood);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(1035, 280, 51, 41));
        label_28->setCursor(QCursor(Qt::PointingHandCursor));
        label_28->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/hospital.png);"));
        label_3 = new QLabel(donate_blood);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(143, 125, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        gender = new QLineEdit(donate_blood);
        gender->setObjectName("gender");
        gender->setGeometry(QRect(825, 330, 121, 50));
        gender->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        label_25 = new QLabel(donate_blood);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(1025, 350, 212, 66));
        label_25->setCursor(QCursor(Qt::PointingHandCursor));
        label_25->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_15 = new QLabel(donate_blood);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(575, 150, 231, 41));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        calendarWidget = new QCalendarWidget(donate_blood);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1015, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 9pt \"Segoe UI\";\n"
"border-radius:5px;"));
        label_32 = new QLabel(donate_blood);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(1100, 360, 131, 41));
        phone_number = new QLineEdit(donate_blood);
        phone_number->setObjectName("phone_number");
        phone_number->setGeometry(QRect(575, 390, 371, 50));
        phone_number->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        name = new QLineEdit(donate_blood);
        name->setObjectName("name");
        name->setGeometry(QRect(575, 210, 376, 50));
        name->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        label_30 = new QLabel(donate_blood);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(1100, 200, 131, 41));
        label_30->setCursor(QCursor(Qt::PointingHandCursor));
        label_30->setStyleSheet(QString::fromUtf8("#label_30::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_31 = new QLabel(donate_blood);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(1100, 280, 131, 41));
        label_31->setCursor(QCursor(Qt::PointingHandCursor));
        label_31->setStyleSheet(QString::fromUtf8("#label_31::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        age = new QLineEdit(donate_blood);
        age->setObjectName("age");
        age->setGeometry(QRect(575, 330, 91, 50));
        age->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        location = new QLineEdit(donate_blood);
        location->setObjectName("location");
        location->setGeometry(QRect(575, 270, 376, 50));
        location->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        label_33 = new QLabel(donate_blood);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(1090, 360, 131, 41));
        label_33->setCursor(QCursor(Qt::PointingHandCursor));
        label_33->setStyleSheet(QString::fromUtf8("#label_33::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_8 = new QLabel(donate_blood);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(160, 140, 403, 502));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-image: url(:/Images/donate_blood.jpg);\n"
""));
        disease = new QLineEdit(donate_blood);
        disease->setObjectName("disease");
        disease->setGeometry(QRect(575, 455, 371, 101));
        disease->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        blood_group = new QLineEdit(donate_blood);
        blood_group->setObjectName("blood_group");
        blood_group->setGeometry(QRect(680, 330, 121, 50));
        blood_group->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"\n"
"}"));
        donate = new QPushButton(donate_blood);
        donate->setObjectName("donate");
        donate->setGeometry(QRect(575, 570, 371, 50));
        donate->setFont(font);
        donate->setCursor(QCursor(Qt::PointingHandCursor));
        donate->setStyleSheet(QString::fromUtf8("#donate\n"
"\n"
"{\n"
"background-color:rgb(144, 10, 18);\n"
"border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#donate::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_35 = new QLabel(donate_blood);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(1030, 360, 51, 41));
        label_35->setCursor(QCursor(Qt::PointingHandCursor));
        label_35->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/announcement.png);"));
        label_36 = new QLabel(donate_blood);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(1030, 200, 51, 41));
        label_36->setCursor(QCursor(Qt::PointingHandCursor));
        label_36->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/Donor.png);"));
        label_37 = new QLabel(donate_blood);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(1025, 190, 212, 66));
        label_37->setCursor(QCursor(Qt::PointingHandCursor));
        label_37->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_38 = new QLabel(donate_blood);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(1060, 140, 141, 31));
        label_38->setFont(font1);
        label_38->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
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
        label_27->raise();
        label_4->raise();
        lineEdit_4->raise();
        label_29->raise();
        register_2->raise();
        label_24->raise();
        label_23->raise();
        lineEdit_5->raise();
        label_34->raise();
        label_6->raise();
        label_26->raise();
        label_28->raise();
        label_3->raise();
        gender->raise();
        label_25->raise();
        label_15->raise();
        calendarWidget->raise();
        label_32->raise();
        phone_number->raise();
        name->raise();
        label_31->raise();
        age->raise();
        location->raise();
        label_33->raise();
        label_8->raise();
        disease->raise();
        blood_group->raise();
        donate->raise();
        label_35->raise();
        label_37->raise();
        label_30->raise();
        label_36->raise();
        label_38->raise();

        retranslateUi(donate_blood);

        QMetaObject::connectSlotsByName(donate_blood);
    } // setupUi

    void retranslateUi(QDialog *donate_blood)
    {
        donate_blood->setWindowTitle(QCoreApplication::translate("donate_blood", "Dialog", nullptr));
        label_7->setText(QString());
        home->setText(QCoreApplication::translate("donate_blood", "Home", nullptr));
        about->setText(QCoreApplication::translate("donate_blood", "About us", nullptr));
        why->setText(QCoreApplication::translate("donate_blood", "Why become donor", nullptr));
        login->setText(QCoreApplication::translate("donate_blood", "Profile", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_5->setText(QString());
        my_details_3->setText(QCoreApplication::translate("donate_blood", "Request\n"
"Blood", nullptr));
        my_details->setText(QCoreApplication::translate("donate_blood", "My\n"
"Details", nullptr));
        my_details_2->setText(QCoreApplication::translate("donate_blood", "Donate\n"
"Blood", nullptr));
        label_27->setText(QString());
        label_4->setText(QString());
        lineEdit_4->setText(QCoreApplication::translate("donate_blood", "   More detail about case", nullptr));
        label_29->setText(QString());
        register_2->setText(QCoreApplication::translate("donate_blood", "Request Blood", nullptr));
        label_24->setText(QString());
        label_23->setText(QCoreApplication::translate("donate_blood", "Blood Donation ", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("donate_blood", "   Blood Group", nullptr));
        label_34->setText(QString());
        label_6->setText(QString());
        label_26->setText(QString());
        label_28->setText(QString());
        label_3->setText(QString());
        gender->setText(QString());
        gender->setPlaceholderText(QCoreApplication::translate("donate_blood", "  Gender", nullptr));
        label_25->setText(QString());
        label_15->setText(QCoreApplication::translate("donate_blood", "Donate blood", nullptr));
        label_32->setText(QCoreApplication::translate("donate_blood", "Announcements", nullptr));
        phone_number->setText(QString());
        phone_number->setPlaceholderText(QCoreApplication::translate("donate_blood", "   Phone Number", nullptr));
        name->setText(QString());
        name->setPlaceholderText(QCoreApplication::translate("donate_blood", "    Donor Name", nullptr));
        label_30->setText(QCoreApplication::translate("donate_blood", "Last donated:\n"
"9 September,2022", nullptr));
        label_31->setText(QCoreApplication::translate("donate_blood", "Donation time:\n"
"9 December,2022", nullptr));
        age->setText(QString());
        age->setPlaceholderText(QCoreApplication::translate("donate_blood", "     Age  ", nullptr));
        location->setText(QString());
        location->setPlaceholderText(QCoreApplication::translate("donate_blood", "   Location", nullptr));
        label_33->setText(QCoreApplication::translate("donate_blood", "Announcements", nullptr));
        label_8->setText(QString());
        disease->setText(QString());
        disease->setPlaceholderText(QCoreApplication::translate("donate_blood", "   Specify disease(if any)", nullptr));
        blood_group->setText(QString());
        blood_group->setPlaceholderText(QCoreApplication::translate("donate_blood", "   Blood Group", nullptr));
        donate->setText(QCoreApplication::translate("donate_blood", "Donate Blood", nullptr));
        label_35->setText(QString());
        label_36->setText(QString());
        label_37->setText(QString());
        label_38->setText(QCoreApplication::translate("donate_blood", "Blood Donation ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class donate_blood: public Ui_donate_blood {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONATE_BLOOD_H
