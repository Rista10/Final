/********************************************************************************
** Form generated from reading UI file 'userdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDASHBOARD_H
#define UI_USERDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_userDashboard
{
public:
    QLabel *label_22;
    QLabel *label_41;
    QPushButton *about;
    QLabel *label_54;
    QLabel *label_37;
    QLabel *label_44;
    QFrame *line_5;
    QLabel *label_6;
    QPushButton *why;
    QPushButton *my_details;
    QLabel *label_52;
    QLabel *label_16;
    QLabel *label_11;
    QLabel *label_33;
    QLabel *label_31;
    QLabel *label_42;
    QPushButton *my_details_3;
    QLabel *label_46;
    QLabel *label_39;
    QLabel *label_47;
    QLabel *label_13;
    QLabel *label_5;
    QLabel *label_30;
    QLabel *label_7;
    QFrame *line_4;
    QLabel *label_53;
    QLabel *label;
    QLabel *label_51;
    QFrame *line_3;
    QLabel *label_21;
    QLabel *label_8;
    QLabel *label_43;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *label_24;
    QLabel *label_3;
    QLabel *label_14;
    QLabel *label_40;
    QLabel *label_20;
    QLabel *label_45;
    QLabel *label_18;
    QFrame *line_2;
    QFrame *line;
    QLabel *label_15;
    QLabel *label_32;
    QPushButton *login;
    QCalendarWidget *calendarWidget;
    QLabel *label_48;
    QLabel *label_17;
    QLabel *label_4;
    QLabel *label_36;
    QLabel *label_10;
    QLabel *label_34;
    QLabel *label_23;
    QLabel *label_29;
    QLabel *label_49;
    QLabel *label_27;
    QLabel *label_26;
    QPushButton *home;
    QLabel *label_38;
    QLabel *label_50;
    QLabel *label_2;
    QPushButton *my_details_2;
    QLabel *label_25;
    QLabel *label_19;
    QLabel *label_28;
    QLabel *label_35;

    void setupUi(QDialog *userDashboard)
    {
        if (userDashboard->objectName().isEmpty())
            userDashboard->setObjectName("userDashboard");
        userDashboard->resize(1270, 700);
        userDashboard->setStyleSheet(QString::fromUtf8("background-color: #EFE6E7"));
        label_22 = new QLabel(userDashboard);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(700, 580, 253, 58));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_22->setFont(font);
        label_22->setCursor(QCursor(Qt::PointingHandCursor));
        label_22->setStyleSheet(QString::fromUtf8("*{border-radius:5px;\n"
"background-color: #E6E6E6;}\n"
"\n"
"#label_22::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        label_41 = new QLabel(userDashboard);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(680, 230, 63, 61));
        label_41->setCursor(QCursor(Qt::PointingHandCursor));
        label_41->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        about = new QPushButton(userDashboard);
        about->setObjectName("about");
        about->setGeometry(QRect(430, 30, 111, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        about->setFont(font1);
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
        label_54 = new QLabel(userDashboard);
        label_54->setObjectName("label_54");
        label_54->setGeometry(QRect(790, 500, 141, 51));
        label_54->setFont(font);
        label_37 = new QLabel(userDashboard);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(480, 340, 63, 61));
        label_37->setCursor(QCursor(Qt::PointingHandCursor));
        label_37->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        label_44 = new QLabel(userDashboard);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(640, 340, 41, 51));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        label_44->setFont(font2);
        label_44->setCursor(QCursor(Qt::PointingHandCursor));
        line_5 = new QFrame(userDashboard);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(138, 160, 845, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(userDashboard);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(160, 220, 178, 80));
        label_6->setCursor(QCursor(Qt::PointingHandCursor));
        label_6->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        why = new QPushButton(userDashboard);
        why->setObjectName("why");
        why->setGeometry(QRect(570, 30, 231, 41));
        why->setFont(font1);
        why->setCursor(QCursor(Qt::PointingHandCursor));
        why->setStyleSheet(QString::fromUtf8("#why\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#why::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        my_details = new QPushButton(userDashboard);
        my_details->setObjectName("my_details");
        my_details->setGeometry(QRect(30, 220, 81, 61));
        my_details->setFont(font);
        my_details->setStyleSheet(QString::fromUtf8("#my_details\n"
"\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"#my_details::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        label_52 = new QLabel(userDashboard);
        label_52->setObjectName("label_52");
        label_52->setGeometry(QRect(270, 500, 111, 51));
        label_52->setFont(font);
        label_16 = new QLabel(userDashboard);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(430, 460, 253, 175));
        label_16->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_11 = new QLabel(userDashboard);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(365, 330, 178, 80));
        label_11->setCursor(QCursor(Qt::PointingHandCursor));
        label_11->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        label_33 = new QLabel(userDashboard);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(270, 230, 63, 61));
        label_33->setCursor(QCursor(Qt::PointingHandCursor));
        label_33->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        label_31 = new QLabel(userDashboard);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(1095, 280, 131, 41));
        label_31->setCursor(QCursor(Qt::PointingHandCursor));
        label_31->setStyleSheet(QString::fromUtf8("\n"
"#label_31::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        label_42 = new QLabel(userDashboard);
        label_42->setObjectName("label_42");
        label_42->setGeometry(QRect(640, 230, 41, 51));
        label_42->setFont(font2);
        label_42->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_3 = new QPushButton(userDashboard);
        my_details_3->setObjectName("my_details_3");
        my_details_3->setGeometry(QRect(30, 380, 81, 61));
        my_details_3->setFont(font);
        my_details_3->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"\n"
"#my_details_3::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}\n"
""));
        label_46 = new QLabel(userDashboard);
        label_46->setObjectName("label_46");
        label_46->setGeometry(QRect(830, 230, 66, 51));
        label_46->setFont(font2);
        label_46->setCursor(QCursor(Qt::PointingHandCursor));
        label_39 = new QLabel(userDashboard);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(480, 230, 63, 61));
        label_39->setCursor(QCursor(Qt::PointingHandCursor));
        label_39->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        label_47 = new QLabel(userDashboard);
        label_47->setObjectName("label_47");
        label_47->setGeometry(QRect(890, 340, 63, 61));
        label_47->setCursor(QCursor(Qt::PointingHandCursor));
        label_47->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        label_13 = new QLabel(userDashboard);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(775, 220, 178, 80));
        label_13->setCursor(QCursor(Qt::PointingHandCursor));
        label_13->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        label_5 = new QLabel(userDashboard);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 140, 63, 61));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        label_30 = new QLabel(userDashboard);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(1095, 200, 131, 41));
        label_30->setCursor(QCursor(Qt::PointingHandCursor));
        label_30->setStyleSheet(QString::fromUtf8("\n"
"#label_30::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        label_7 = new QLabel(userDashboard);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        line_4 = new QFrame(userDashboard);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(25, 445, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_53 = new QLabel(userDashboard);
        label_53->setObjectName("label_53");
        label_53->setGeometry(QRect(550, 500, 111, 51));
        label_53->setFont(font);
        label = new QLabel(userDashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_51 = new QLabel(userDashboard);
        label_51->setObjectName("label_51");
        label_51->setGeometry(QRect(730, 500, 51, 51));
        label_51->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/announcement.png);"));
        line_3 = new QFrame(userDashboard);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(25, 370, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_21 = new QLabel(userDashboard);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(430, 580, 253, 58));
        label_21->setFont(font);
        label_21->setCursor(QCursor(Qt::PointingHandCursor));
        label_21->setStyleSheet(QString::fromUtf8("*{border-radius:5px;\n"
"background-color: #E6E6E6;}\n"
"\n"
"#label_21::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        label_8 = new QLabel(userDashboard);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(365, 220, 178, 80));
        label_8->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        label_43 = new QLabel(userDashboard);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(680, 340, 63, 61));
        label_43->setCursor(QCursor(Qt::PointingHandCursor));
        label_43->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        label_12 = new QLabel(userDashboard);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(160, 330, 178, 80));
        label_12->setCursor(QCursor(Qt::PointingHandCursor));
        label_12->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        label_9 = new QLabel(userDashboard);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(775, 330, 178, 80));
        label_9->setCursor(QCursor(Qt::PointingHandCursor));
        label_9->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        label_24 = new QLabel(userDashboard);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(1020, 190, 212, 66));
        label_24->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_3 = new QLabel(userDashboard);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(138, 125, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_14 = new QLabel(userDashboard);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(570, 220, 178, 80));
        label_14->setCursor(QCursor(Qt::PointingHandCursor));
        label_14->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        label_40 = new QLabel(userDashboard);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(440, 230, 41, 51));
        label_40->setFont(font2);
        label_40->setCursor(QCursor(Qt::PointingHandCursor));
        label_20 = new QLabel(userDashboard);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(160, 580, 253, 58));
        label_20->setFont(font);
        label_20->setCursor(QCursor(Qt::PointingHandCursor));
        label_20->setStyleSheet(QString::fromUtf8("*{border-radius:5px;\n"
"background-color: #E6E6E6;}\n"
"\n"
"\n"
"#label_20::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        label_45 = new QLabel(userDashboard);
        label_45->setObjectName("label_45");
        label_45->setGeometry(QRect(890, 230, 63, 61));
        label_45->setCursor(QCursor(Qt::PointingHandCursor));
        label_45->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        label_18 = new QLabel(userDashboard);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(160, 131, 211, 20));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        line_2 = new QFrame(userDashboard);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(25, 290, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(userDashboard);
        line->setObjectName("line");
        line->setGeometry(QRect(25, 210, 89, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_15 = new QLabel(userDashboard);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(160, 460, 253, 175));
        label_15->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_32 = new QLabel(userDashboard);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(1095, 360, 131, 41));
        label_32->setCursor(QCursor(Qt::PointingHandCursor));
        label_32->setStyleSheet(QString::fromUtf8("\n"
"#label_32::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        login = new QPushButton(userDashboard);
        login->setObjectName("login");
        login->setGeometry(QRect(1070, 30, 151, 41));
        login->setFont(font1);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setStyleSheet(QString::fromUtf8("#login\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"	color: rgb(255, 255, 255);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"#login::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        calendarWidget = new QCalendarWidget(userDashboard);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1010, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_48 = new QLabel(userDashboard);
        label_48->setObjectName("label_48");
        label_48->setGeometry(QRect(830, 340, 61, 51));
        label_48->setFont(font2);
        label_48->setCursor(QCursor(Qt::PointingHandCursor));
        label_17 = new QLabel(userDashboard);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(700, 460, 253, 175));
        label_17->setCursor(QCursor(Qt::ArrowCursor));
        label_17->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_4 = new QLabel(userDashboard);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(1007, 127, 237, 306));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_36 = new QLabel(userDashboard);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(230, 340, 41, 51));
        label_36->setFont(font2);
        label_36->setCursor(QCursor(Qt::PointingHandCursor));
        label_10 = new QLabel(userDashboard);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(570, 330, 178, 80));
        label_10->setCursor(QCursor(Qt::PointingHandCursor));
        label_10->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        label_34 = new QLabel(userDashboard);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(230, 230, 41, 51));
        label_34->setFont(font2);
        label_34->setCursor(QCursor(Qt::PointingHandCursor));
        label_23 = new QLabel(userDashboard);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(1060, 140, 141, 31));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_29 = new QLabel(userDashboard);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(1030, 360, 51, 41));
        label_29->setCursor(QCursor(Qt::PointingHandCursor));
        label_29->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/announcement.png);"));
        label_49 = new QLabel(userDashboard);
        label_49->setObjectName("label_49");
        label_49->setGeometry(QRect(200, 500, 53, 52));
        label_49->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/Donor.png);"));
        label_27 = new QLabel(userDashboard);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(1030, 200, 51, 41));
        label_27->setCursor(QCursor(Qt::PointingHandCursor));
        label_27->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/Donor.png);"));
        label_26 = new QLabel(userDashboard);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(1020, 270, 212, 66));
        label_26->setCursor(QCursor(Qt::PointingHandCursor));
        label_26->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        home = new QPushButton(userDashboard);
        home->setObjectName("home");
        home->setGeometry(QRect(300, 30, 111, 41));
        home->setFont(font1);
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
        label_38 = new QLabel(userDashboard);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(440, 340, 41, 51));
        label_38->setFont(font2);
        label_38->setCursor(QCursor(Qt::PointingHandCursor));
        label_50 = new QLabel(userDashboard);
        label_50->setObjectName("label_50");
        label_50->setGeometry(QRect(470, 500, 51, 51));
        label_50->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/camp.png);"));
        label_2 = new QLabel(userDashboard);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(25, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        my_details_2 = new QPushButton(userDashboard);
        my_details_2->setObjectName("my_details_2");
        my_details_2->setGeometry(QRect(30, 300, 81, 61));
        my_details_2->setFont(font);
        my_details_2->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"\n"
"#my_details_2::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}\n"
""));
        label_25 = new QLabel(userDashboard);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(1020, 350, 212, 66));
        label_25->setCursor(QCursor(Qt::PointingHandCursor));
        label_25->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_19 = new QLabel(userDashboard);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(160, 170, 351, 31));
        label_19->setFont(font);
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_28 = new QLabel(userDashboard);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(1030, 280, 51, 41));
        label_28->setCursor(QCursor(Qt::PointingHandCursor));
        label_28->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/hospital.png);"));
        label_35 = new QLabel(userDashboard);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(270, 340, 63, 61));
        label_35->setCursor(QCursor(Qt::PointingHandCursor));
        label_35->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        label->raise();
        label_3->raise();
        label_17->raise();
        label_15->raise();
        label_13->raise();
        label_10->raise();
        label_9->raise();
        label_8->raise();
        label_11->raise();
        label_14->raise();
        label_4->raise();
        label_26->raise();
        label_24->raise();
        label_25->raise();
        label_2->raise();
        label_22->raise();
        label_41->raise();
        about->raise();
        label_54->raise();
        label_37->raise();
        label_44->raise();
        line_5->raise();
        label_6->raise();
        why->raise();
        my_details->raise();
        label_52->raise();
        label_16->raise();
        label_33->raise();
        label_31->raise();
        label_42->raise();
        my_details_3->raise();
        label_46->raise();
        label_39->raise();
        label_47->raise();
        label_5->raise();
        label_30->raise();
        label_7->raise();
        line_4->raise();
        label_53->raise();
        label_51->raise();
        line_3->raise();
        label_21->raise();
        label_43->raise();
        label_12->raise();
        label_40->raise();
        label_20->raise();
        label_45->raise();
        label_18->raise();
        line_2->raise();
        line->raise();
        label_32->raise();
        login->raise();
        calendarWidget->raise();
        label_48->raise();
        label_36->raise();
        label_34->raise();
        label_23->raise();
        label_29->raise();
        label_49->raise();
        label_27->raise();
        home->raise();
        label_38->raise();
        label_50->raise();
        my_details_2->raise();
        label_19->raise();
        label_28->raise();
        label_35->raise();

        retranslateUi(userDashboard);

        QMetaObject::connectSlotsByName(userDashboard);
    } // setupUi

    void retranslateUi(QDialog *userDashboard)
    {
        userDashboard->setWindowTitle(QCoreApplication::translate("userDashboard", "Dialog", nullptr));
        label_22->setText(QCoreApplication::translate("userDashboard", "      View Details", nullptr));
        label_41->setText(QString());
        about->setText(QCoreApplication::translate("userDashboard", "About us", nullptr));
        label_54->setText(QCoreApplication::translate("userDashboard", "Emergency\n"
"Announcements", nullptr));
        label_37->setText(QString());
        label_44->setText(QCoreApplication::translate("userDashboard", "O-", nullptr));
        label_6->setText(QString());
        why->setText(QCoreApplication::translate("userDashboard", "Why become donor", nullptr));
        my_details->setText(QCoreApplication::translate("userDashboard", "My\n"
"Details", nullptr));
        label_52->setText(QCoreApplication::translate("userDashboard", "Donation\n"
"History", nullptr));
        label_16->setText(QString());
        label_11->setText(QString());
        label_33->setText(QString());
        label_31->setText(QCoreApplication::translate("userDashboard", "Donation time:\n"
"9 December,2022", nullptr));
        label_42->setText(QCoreApplication::translate("userDashboard", "O+", nullptr));
        my_details_3->setText(QCoreApplication::translate("userDashboard", "Request\n"
"Blood", nullptr));
        label_46->setText(QCoreApplication::translate("userDashboard", "AB+", nullptr));
        label_39->setText(QString());
        label_47->setText(QString());
        label_13->setText(QString());
        label_5->setText(QString());
        label_30->setText(QCoreApplication::translate("userDashboard", "Last donated:\n"
"9 September,2022", nullptr));
        label_7->setText(QString());
        label_53->setText(QCoreApplication::translate("userDashboard", "Campaign\n"
"Available", nullptr));
        label->setText(QString());
        label_51->setText(QString());
        label_21->setText(QCoreApplication::translate("userDashboard", "      View Details", nullptr));
        label_8->setText(QString());
        label_43->setText(QString());
        label_12->setText(QString());
        label_9->setText(QString());
        label_24->setText(QString());
        label_3->setText(QString());
        label_14->setText(QString());
        label_40->setText(QCoreApplication::translate("userDashboard", "B+", nullptr));
        label_20->setText(QCoreApplication::translate("userDashboard", "      View Details", nullptr));
        label_45->setText(QString());
        label_18->setText(QCoreApplication::translate("userDashboard", "Welcome back!!", nullptr));
        label_15->setText(QString());
        label_32->setText(QCoreApplication::translate("userDashboard", "Announcements", nullptr));
        login->setText(QCoreApplication::translate("userDashboard", "Profile", nullptr));
        label_48->setText(QCoreApplication::translate("userDashboard", "AB-", nullptr));
        label_17->setText(QString());
        label_4->setText(QString());
        label_36->setText(QCoreApplication::translate("userDashboard", "A-", nullptr));
        label_10->setText(QString());
        label_34->setText(QCoreApplication::translate("userDashboard", "A+", nullptr));
        label_23->setText(QCoreApplication::translate("userDashboard", "Blood Donation ", nullptr));
        label_29->setText(QString());
        label_49->setText(QString());
        label_27->setText(QString());
        label_26->setText(QString());
        home->setText(QCoreApplication::translate("userDashboard", "Home", nullptr));
        label_38->setText(QCoreApplication::translate("userDashboard", "B-", nullptr));
        label_50->setText(QString());
        label_2->setText(QString());
        my_details_2->setText(QCoreApplication::translate("userDashboard", "Donate\n"
"Blood", nullptr));
        label_25->setText(QString());
        label_19->setText(QCoreApplication::translate("userDashboard", "Available blood groups in litre", nullptr));
        label_28->setText(QString());
        label_35->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class userDashboard: public Ui_userDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDASHBOARD_H
