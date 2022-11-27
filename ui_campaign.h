/********************************************************************************
** Form generated from reading UI file 'campaign.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMPAIGN_H
#define UI_CAMPAIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_campaign
{
public:
    QLabel *label_7;
    QLabel *label_31;
    QLabel *label_52;
    QLabel *label_25;
    QLabel *label_15;
    QLabel *label_32;
    QLabel *label_26;
    QLabel *label_23;
    QLabel *label_53;
    QLabel *label_51;
    QLabel *label_24;
    QLabel *label_30;
    QPushButton *why;
    QLabel *label_17;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_50;
    QLabel *label_22;
    QPushButton *home;
    QLabel *label_20;
    QLabel *label_3;
    QLabel *label_18;
    QPushButton *about;
    QPushButton *login;
    QLabel *label;
    QLabel *label_4;
    QFrame *line_5;
    QCalendarWidget *calendarWidget;
    QLabel *label_16;
    QLabel *label_21;
    QLabel *label_36;
    QLabel *label_11;
    QPushButton *why_2;
    QPushButton *home_2;
    QPushButton *about_2;
    QPushButton *login_2;
    QLabel *label_58;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_6;
    QLabel *label_8;
    QFrame *line_3;
    QPushButton *my_details_4;
    QPushButton *my_details_2;
    QFrame *line_4;
    QPushButton *my_details_3;
    QLabel *label_5;
    QFrame *line;
    QLabel *label_2;
    QFrame *line_2;

    void setupUi(QDialog *campaign)
    {
        if (campaign->objectName().isEmpty())
            campaign->setObjectName("campaign");
        campaign->resize(1270, 700);
        campaign->setStyleSheet(QString::fromUtf8("background-color:#EFE6E7;"));
        label_7 = new QLabel(campaign);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        label_31 = new QLabel(campaign);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(1105, 280, 131, 41));
        label_31->setCursor(QCursor(Qt::PointingHandCursor));
        label_31->setStyleSheet(QString::fromUtf8("\n"
"#label_31::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        label_52 = new QLabel(campaign);
        label_52->setObjectName("label_52");
        label_52->setGeometry(QRect(280, 500, 111, 51));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_52->setFont(font);
        label_25 = new QLabel(campaign);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(1030, 350, 212, 66));
        label_25->setCursor(QCursor(Qt::PointingHandCursor));
        label_25->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_15 = new QLabel(campaign);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(170, 460, 253, 175));
        label_15->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_32 = new QLabel(campaign);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(1105, 360, 131, 41));
        label_32->setCursor(QCursor(Qt::PointingHandCursor));
        label_32->setStyleSheet(QString::fromUtf8("\n"
"#label_32::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        label_26 = new QLabel(campaign);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(1030, 270, 212, 66));
        label_26->setCursor(QCursor(Qt::PointingHandCursor));
        label_26->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_23 = new QLabel(campaign);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(1070, 140, 141, 31));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_53 = new QLabel(campaign);
        label_53->setObjectName("label_53");
        label_53->setGeometry(QRect(560, 500, 111, 51));
        label_53->setFont(font);
        label_51 = new QLabel(campaign);
        label_51->setObjectName("label_51");
        label_51->setGeometry(QRect(740, 500, 51, 51));
        label_51->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/announcement.png);"));
        label_24 = new QLabel(campaign);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(1030, 190, 212, 66));
        label_24->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_30 = new QLabel(campaign);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(1105, 200, 131, 41));
        label_30->setCursor(QCursor(Qt::PointingHandCursor));
        label_30->setStyleSheet(QString::fromUtf8("\n"
"#label_30::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        why = new QPushButton(campaign);
        why->setObjectName("why");
        why->setGeometry(QRect(580, 30, 231, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
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
        label_17 = new QLabel(campaign);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(710, 460, 253, 175));
        label_17->setCursor(QCursor(Qt::ArrowCursor));
        label_17->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_27 = new QLabel(campaign);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(1040, 200, 51, 41));
        label_27->setCursor(QCursor(Qt::PointingHandCursor));
        label_27->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/Donor.png);"));
        label_28 = new QLabel(campaign);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(1040, 280, 51, 41));
        label_28->setCursor(QCursor(Qt::PointingHandCursor));
        label_28->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/hospital.png);"));
        label_50 = new QLabel(campaign);
        label_50->setObjectName("label_50");
        label_50->setGeometry(QRect(480, 500, 51, 51));
        label_50->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/camp.png);"));
        label_22 = new QLabel(campaign);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(710, 580, 253, 58));
        label_22->setFont(font);
        label_22->setCursor(QCursor(Qt::PointingHandCursor));
        label_22->setStyleSheet(QString::fromUtf8("*{border-radius:5px;\n"
"background-color: #E6E6E6;}\n"
"\n"
"#label_22::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        home = new QPushButton(campaign);
        home->setObjectName("home");
        home->setGeometry(QRect(310, 30, 111, 41));
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
        label_20 = new QLabel(campaign);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(170, 580, 253, 58));
        label_20->setFont(font);
        label_20->setCursor(QCursor(Qt::PointingHandCursor));
        label_20->setStyleSheet(QString::fromUtf8("*{border-radius:5px;\n"
"background-color: #E6E6E6;}\n"
"\n"
"\n"
"#label_20::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        label_3 = new QLabel(campaign);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 130, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_18 = new QLabel(campaign);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(170, 138, 211, 20));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        about = new QPushButton(campaign);
        about->setObjectName("about");
        about->setGeometry(QRect(440, 30, 111, 41));
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
        login = new QPushButton(campaign);
        login->setObjectName("login");
        login->setGeometry(QRect(1080, 30, 151, 41));
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
        label = new QLabel(campaign);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(campaign);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(1007, 127, 237, 306));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        line_5 = new QFrame(campaign);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(140, 160, 845, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        calendarWidget = new QCalendarWidget(campaign);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1007, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_16 = new QLabel(campaign);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(440, 460, 253, 175));
        label_16->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_21 = new QLabel(campaign);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(170, 460, 253, 175));
        label_21->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_36 = new QLabel(campaign);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(710, 460, 253, 175));
        label_36->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_11 = new QLabel(campaign);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(30, 0, 81, 91));
        label_11->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        why_2 = new QPushButton(campaign);
        why_2->setObjectName("why_2");
        why_2->setGeometry(QRect(560, 30, 231, 41));
        why_2->setFont(font1);
        why_2->setCursor(QCursor(Qt::PointingHandCursor));
        why_2->setStyleSheet(QString::fromUtf8("#why_2\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#why_2::hover\n"
"{\n"
"border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        home_2 = new QPushButton(campaign);
        home_2->setObjectName("home_2");
        home_2->setGeometry(QRect(300, 30, 121, 41));
        home_2->setFont(font1);
        home_2->setCursor(QCursor(Qt::PointingHandCursor));
        home_2->setStyleSheet(QString::fromUtf8("#home_2\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"#home_2:hover\n"
"{\n"
"border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        about_2 = new QPushButton(campaign);
        about_2->setObjectName("about_2");
        about_2->setGeometry(QRect(430, 30, 141, 41));
        about_2->setFont(font1);
        about_2->setCursor(QCursor(Qt::PointingHandCursor));
        about_2->setStyleSheet(QString::fromUtf8("#about_2\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#about_2::hover\n"
"{\n"
"border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        login_2 = new QPushButton(campaign);
        login_2->setObjectName("login_2");
        login_2->setGeometry(QRect(1080, 30, 151, 41));
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
        label_58 = new QLabel(campaign);
        label_58->setObjectName("label_58");
        label_58->setGeometry(QRect(1030, 140, 201, 31));
        label_58->setFont(font);
        label_58->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_33 = new QLabel(campaign);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(1020, 270, 211, 66));
        label_33->setCursor(QCursor(Qt::PointingHandCursor));
        label_33->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_34 = new QLabel(campaign);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(1020, 190, 211, 66));
        label_34->setCursor(QCursor(Qt::PointingHandCursor));
        label_34->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_37 = new QLabel(campaign);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(1020, 350, 211, 66));
        label_37->setCursor(QCursor(Qt::PointingHandCursor));
        label_37->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_38 = new QLabel(campaign);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(1040, 360, 51, 41));
        label_38->setCursor(QCursor(Qt::PointingHandCursor));
        label_38->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/announcement.png);"));
        label_39 = new QLabel(campaign);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(1110, 280, 121, 41));
        label_39->setCursor(QCursor(Qt::PointingHandCursor));
        label_39->setStyleSheet(QString::fromUtf8("\n"
"#label_39::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_40 = new QLabel(campaign);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(1030, 200, 51, 41));
        label_40->setCursor(QCursor(Qt::PointingHandCursor));
        label_40->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/Donor.png);"));
        label_41 = new QLabel(campaign);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(1100, 200, 121, 41));
        label_41->setCursor(QCursor(Qt::PointingHandCursor));
        label_41->setStyleSheet(QString::fromUtf8("\n"
"#label_41::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_42 = new QLabel(campaign);
        label_42->setObjectName("label_42");
        label_42->setGeometry(QRect(1040, 280, 51, 41));
        label_42->setCursor(QCursor(Qt::PointingHandCursor));
        label_42->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/hospital.png);"));
        label_43 = new QLabel(campaign);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(1110, 360, 121, 41));
        label_43->setCursor(QCursor(Qt::PointingHandCursor));
        label_43->setStyleSheet(QString::fromUtf8("\n"
"#label_43::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_6 = new QLabel(campaign);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(170, 180, 281, 71));
        QFont font2;
        font2.setPointSize(32);
        font2.setBold(true);
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(campaign);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(170, 260, 501, 181));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        line_3 = new QFrame(campaign);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(25, 370, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        my_details_4 = new QPushButton(campaign);
        my_details_4->setObjectName("my_details_4");
        my_details_4->setGeometry(QRect(30, 300, 81, 61));
        my_details_4->setFont(font);
        my_details_4->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_4->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"\n"
"\n"
"#my_details_4::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}\n"
""));
        my_details_2 = new QPushButton(campaign);
        my_details_2->setObjectName("my_details_2");
        my_details_2->setGeometry(QRect(30, 220, 81, 61));
        my_details_2->setFont(font);
        my_details_2->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_2->setStyleSheet(QString::fromUtf8("#my_details_2\n"
"\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"#my_details_2::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        line_4 = new QFrame(campaign);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(25, 445, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        my_details_3 = new QPushButton(campaign);
        my_details_3->setObjectName("my_details_3");
        my_details_3->setGeometry(QRect(30, 380, 81, 61));
        my_details_3->setFont(font);
        my_details_3->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_3->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"\n"
"#my_details_3::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}\n"
""));
        label_5 = new QLabel(campaign);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 140, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        line = new QFrame(campaign);
        line->setObjectName("line");
        line->setGeometry(QRect(25, 210, 89, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(campaign);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(25, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        line_2 = new QFrame(campaign);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(25, 290, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2->raise();
        label_7->raise();
        label_31->raise();
        label_52->raise();
        label_25->raise();
        label_15->raise();
        label_32->raise();
        label_26->raise();
        label_23->raise();
        label_53->raise();
        label_51->raise();
        label_24->raise();
        label_30->raise();
        why->raise();
        label_17->raise();
        label_27->raise();
        label_28->raise();
        label_50->raise();
        label_22->raise();
        home->raise();
        label_20->raise();
        label_3->raise();
        label_18->raise();
        about->raise();
        login->raise();
        label->raise();
        label_4->raise();
        line_5->raise();
        calendarWidget->raise();
        label_16->raise();
        label_21->raise();
        label_36->raise();
        label_11->raise();
        why_2->raise();
        home_2->raise();
        about_2->raise();
        login_2->raise();
        label_58->raise();
        label_33->raise();
        label_34->raise();
        label_37->raise();
        label_38->raise();
        label_39->raise();
        label_40->raise();
        label_41->raise();
        label_42->raise();
        label_43->raise();
        label_6->raise();
        label_8->raise();
        line_3->raise();
        my_details_4->raise();
        my_details_2->raise();
        line_4->raise();
        my_details_3->raise();
        label_5->raise();
        line->raise();
        line_2->raise();

        retranslateUi(campaign);

        QMetaObject::connectSlotsByName(campaign);
    } // setupUi

    void retranslateUi(QDialog *campaign)
    {
        campaign->setWindowTitle(QCoreApplication::translate("campaign", "Dialog", nullptr));
        label_7->setText(QString());
        label_31->setText(QCoreApplication::translate("campaign", "Donation time:\n"
"9 December,2022", nullptr));
        label_52->setText(QCoreApplication::translate("campaign", "Donation\n"
"History", nullptr));
        label_25->setText(QString());
        label_15->setText(QString());
        label_32->setText(QCoreApplication::translate("campaign", "Announcements", nullptr));
        label_26->setText(QString());
        label_23->setText(QCoreApplication::translate("campaign", "Blood Donation ", nullptr));
        label_53->setText(QCoreApplication::translate("campaign", "Campaign\n"
"Available", nullptr));
        label_51->setText(QString());
        label_24->setText(QString());
        label_30->setText(QCoreApplication::translate("campaign", "Last donated:\n"
"9 September,2022", nullptr));
        why->setText(QCoreApplication::translate("campaign", "Why become donor", nullptr));
        label_17->setText(QString());
        label_27->setText(QString());
        label_28->setText(QString());
        label_50->setText(QString());
        label_22->setText(QCoreApplication::translate("campaign", "      View Details", nullptr));
        home->setText(QCoreApplication::translate("campaign", "Home", nullptr));
        label_20->setText(QCoreApplication::translate("campaign", "      View Details", nullptr));
        label_3->setText(QString());
        label_18->setText(QCoreApplication::translate("campaign", "Welcome back!!", nullptr));
        about->setText(QCoreApplication::translate("campaign", "About us", nullptr));
        login->setText(QCoreApplication::translate("campaign", "Profile", nullptr));
        label->setText(QString());
        label_4->setText(QString());
        label_16->setText(QString());
        label_21->setText(QString());
        label_36->setText(QString());
        label_11->setText(QString());
        why_2->setText(QCoreApplication::translate("campaign", "Why become donor", nullptr));
        home_2->setText(QCoreApplication::translate("campaign", "Home", nullptr));
        about_2->setText(QCoreApplication::translate("campaign", "About us", nullptr));
        login_2->setText(QCoreApplication::translate("campaign", "Profile", nullptr));
        label_58->setText(QCoreApplication::translate("campaign", "Blood Donation Camps", nullptr));
        label_33->setText(QString());
        label_34->setText(QString());
        label_37->setText(QString());
        label_38->setText(QString());
        label_39->setText(QCoreApplication::translate("campaign", "Donation time:\n"
"9 December,2022", nullptr));
        label_40->setText(QString());
        label_41->setText(QCoreApplication::translate("campaign", "Last donated:\n"
"9 September,2022", nullptr));
        label_42->setText(QString());
        label_43->setText(QCoreApplication::translate("campaign", "Accounment ", nullptr));
        label_6->setText(QCoreApplication::translate("campaign", "Campaign", nullptr));
        label_8->setText(QCoreApplication::translate("campaign", "\342\200\234ReLiv\342\200\235 aims to computerize the bloodstock management\n"
"and donor data management to provide blood immediately\n"
"to the patient without any delay.In addition, it keeps the\n"
"records of all the donors,recipients,blood donation programs \n"
"and so on. ", nullptr));
        my_details_4->setText(QCoreApplication::translate("campaign", "Donate\n"
"Blood", nullptr));
        my_details_2->setText(QCoreApplication::translate("campaign", "My\n"
"Details", nullptr));
        my_details_3->setText(QCoreApplication::translate("campaign", "Request\n"
"Blood", nullptr));
        label_5->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class campaign: public Ui_campaign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMPAIGN_H
