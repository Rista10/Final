/********************************************************************************
** Form generated from reading UI file 'emergencyrequest_patient.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMERGENCYREQUEST_PATIENT_H
#define UI_EMERGENCYREQUEST_PATIENT_H

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

class Ui_emergencyRequest_patient
{
public:
    QLineEdit *age;
    QLineEdit *lineEdit_5;
    QLabel *label_3;
    QPushButton *about;
    QLabel *label_5;
    QPushButton *my_details_2;
    QLabel *label_26;
    QLabel *label_7;
    QLabel *label_25;
    QLabel *label_34;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_27;
    QPushButton *home;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_38;
    QPushButton *why;
    QPushButton *my_details;
    QLabel *label_28;
    QPushButton *login;
    QLabel *label_6;
    QLabel *label_33;
    QLabel *label_37;
    QLabel *label_36;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_30;
    QLabel *label;
    QLabel *label_35;
    QLabel *label_29;
    QFrame *line_5;
    QFrame *line_4;
    QFrame *line_3;
    QFrame *line_2;
    QCalendarWidget *calendarWidget;
    QPushButton *my_details_3;
    QTableView *tableView;
    QLineEdit *search;
    QLabel *label_19;
    QPushButton *pushButton;
    QLabel *label_4;

    void setupUi(QDialog *emergencyRequest_patient)
    {
        if (emergencyRequest_patient->objectName().isEmpty())
            emergencyRequest_patient->setObjectName("emergencyRequest_patient");
        emergencyRequest_patient->resize(1270, 700);
        emergencyRequest_patient->setStyleSheet(QString::fromUtf8("background-color:#EFE6E7;"));
        age = new QLineEdit(emergencyRequest_patient);
        age->setObjectName("age");
        age->setGeometry(QRect(575, 330, 91, 50));
        age->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        lineEdit_5 = new QLineEdit(emergencyRequest_patient);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(685, 330, 121, 50));
        lineEdit_5->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"\n"
"}"));
        label_3 = new QLabel(emergencyRequest_patient);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(143, 125, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        about = new QPushButton(emergencyRequest_patient);
        about->setObjectName("about");
        about->setGeometry(QRect(430, 30, 151, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
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
        label_5 = new QLabel(emergencyRequest_patient);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 130, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        my_details_2 = new QPushButton(emergencyRequest_patient);
        my_details_2->setObjectName("my_details_2");
        my_details_2->setGeometry(QRect(30, 290, 81, 61));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
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
        label_26 = new QLabel(emergencyRequest_patient);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(1025, 270, 212, 66));
        label_26->setCursor(QCursor(Qt::PointingHandCursor));
        label_26->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_7 = new QLabel(emergencyRequest_patient);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        label_25 = new QLabel(emergencyRequest_patient);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(1025, 350, 212, 66));
        label_25->setCursor(QCursor(Qt::PointingHandCursor));
        label_25->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_34 = new QLabel(emergencyRequest_patient);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(1035, 360, 51, 41));
        label_34->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/announcement.png);"));
        label_31 = new QLabel(emergencyRequest_patient);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(1100, 280, 131, 41));
        label_31->setCursor(QCursor(Qt::PointingHandCursor));
        label_31->setStyleSheet(QString::fromUtf8("#label_31::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_32 = new QLabel(emergencyRequest_patient);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(1100, 360, 131, 41));
        label_27 = new QLabel(emergencyRequest_patient);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(1035, 200, 51, 41));
        label_27->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/Donor.png);"));
        home = new QPushButton(emergencyRequest_patient);
        home->setObjectName("home");
        home->setGeometry(QRect(300, 30, 141, 41));
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
        label_23 = new QLabel(emergencyRequest_patient);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(1065, 140, 141, 31));
        label_23->setFont(font1);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_24 = new QLabel(emergencyRequest_patient);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(1025, 190, 212, 66));
        label_24->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_38 = new QLabel(emergencyRequest_patient);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(1060, 140, 141, 31));
        label_38->setFont(font1);
        label_38->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        why = new QPushButton(emergencyRequest_patient);
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
        my_details = new QPushButton(emergencyRequest_patient);
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
        label_28 = new QLabel(emergencyRequest_patient);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(1035, 280, 51, 41));
        label_28->setCursor(QCursor(Qt::PointingHandCursor));
        label_28->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/hospital.png);"));
        login = new QPushButton(emergencyRequest_patient);
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
        label_6 = new QLabel(emergencyRequest_patient);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1012, 127, 237, 306));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_33 = new QLabel(emergencyRequest_patient);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(1090, 360, 131, 41));
        label_33->setCursor(QCursor(Qt::PointingHandCursor));
        label_33->setStyleSheet(QString::fromUtf8("#label_33::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_37 = new QLabel(emergencyRequest_patient);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(1025, 190, 212, 66));
        label_37->setCursor(QCursor(Qt::PointingHandCursor));
        label_37->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_36 = new QLabel(emergencyRequest_patient);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(1030, 200, 51, 41));
        label_36->setCursor(QCursor(Qt::PointingHandCursor));
        label_36->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/Donor.png);"));
        line = new QFrame(emergencyRequest_patient);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 99, 1280, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(emergencyRequest_patient);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(25, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_30 = new QLabel(emergencyRequest_patient);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(1100, 200, 131, 41));
        label_30->setCursor(QCursor(Qt::PointingHandCursor));
        label_30->setStyleSheet(QString::fromUtf8("#label_30::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label = new QLabel(emergencyRequest_patient);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_35 = new QLabel(emergencyRequest_patient);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(1030, 360, 51, 41));
        label_35->setCursor(QCursor(Qt::PointingHandCursor));
        label_35->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/announcement.png);"));
        label_29 = new QLabel(emergencyRequest_patient);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(1035, 360, 51, 41));
        label_29->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/announcement.png);"));
        line_5 = new QFrame(emergencyRequest_patient);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(25, 200, 89, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(emergencyRequest_patient);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(25, 435, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(emergencyRequest_patient);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(25, 360, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(emergencyRequest_patient);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(25, 280, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        calendarWidget = new QCalendarWidget(emergencyRequest_patient);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1015, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 9pt \"Segoe UI\";\n"
"border-radius:5px;"));
        my_details_3 = new QPushButton(emergencyRequest_patient);
        my_details_3->setObjectName("my_details_3");
        my_details_3->setGeometry(QRect(30, 370, 81, 61));
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
        tableView = new QTableView(emergencyRequest_patient);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(180, 211, 411, 311));
        tableView->setStyleSheet(QString::fromUtf8("border-color: rgb(31, 31, 31);\n"
"background-color: rgb(255, 255, 255);\n"
"border-width : 1.2px;\n"
"border-style:inset;\n"
""));
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        search = new QLineEdit(emergencyRequest_patient);
        search->setObjectName("search");
        search->setGeometry(QRect(180, 150, 411, 38));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Andale Mono")});
        font2.setPointSize(11);
        search->setFont(font2);
        search->setCursor(QCursor(Qt::IBeamCursor));
        search->setStyleSheet(QString::fromUtf8("background-color: #F1EEEE;;\n"
"color:grey;\n"
"border-radius:15px;\n"
"font-family:Andale Mono;"));
        label_19 = new QLabel(emergencyRequest_patient);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(190, 560, 301, 31));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        label_19->setFont(font3);
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(144, 10, 18);"));
        pushButton = new QPushButton(emergencyRequest_patient);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(500, 560, 91, 31));
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("*{background-color: rgb(144, 10, 18);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"\n"
"#pushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_4 = new QLabel(emergencyRequest_patient);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(640, 150, 321, 481));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/emergency.png);"));
        label_6->raise();
        label_2->raise();
        label->raise();
        age->raise();
        lineEdit_5->raise();
        label_3->raise();
        about->raise();
        label_5->raise();
        my_details_2->raise();
        label_26->raise();
        label_7->raise();
        label_25->raise();
        label_34->raise();
        label_31->raise();
        label_32->raise();
        label_27->raise();
        home->raise();
        label_23->raise();
        label_24->raise();
        label_38->raise();
        why->raise();
        my_details->raise();
        label_28->raise();
        login->raise();
        label_33->raise();
        label_37->raise();
        label_36->raise();
        line->raise();
        label_30->raise();
        label_35->raise();
        label_29->raise();
        line_5->raise();
        line_4->raise();
        line_3->raise();
        line_2->raise();
        calendarWidget->raise();
        my_details_3->raise();
        tableView->raise();
        search->raise();
        label_19->raise();
        pushButton->raise();
        label_4->raise();

        retranslateUi(emergencyRequest_patient);

        QMetaObject::connectSlotsByName(emergencyRequest_patient);
    } // setupUi

    void retranslateUi(QDialog *emergencyRequest_patient)
    {
        emergencyRequest_patient->setWindowTitle(QCoreApplication::translate("emergencyRequest_patient", "Dialog", nullptr));
        age->setText(QString());
        age->setPlaceholderText(QCoreApplication::translate("emergencyRequest_patient", "     Age  ", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("emergencyRequest_patient", "   Blood Group", nullptr));
        label_3->setText(QString());
        about->setText(QCoreApplication::translate("emergencyRequest_patient", "About us", nullptr));
        label_5->setText(QString());
        my_details_2->setText(QCoreApplication::translate("emergencyRequest_patient", "Donate\n"
"Blood", nullptr));
        label_26->setText(QString());
        label_7->setText(QString());
        label_25->setText(QString());
        label_34->setText(QString());
        label_31->setText(QCoreApplication::translate("emergencyRequest_patient", "Donation time:\n"
"9 December,2022", nullptr));
        label_32->setText(QCoreApplication::translate("emergencyRequest_patient", "Announcements", nullptr));
        label_27->setText(QString());
        home->setText(QCoreApplication::translate("emergencyRequest_patient", "Home", nullptr));
        label_23->setText(QCoreApplication::translate("emergencyRequest_patient", "Blood Donation ", nullptr));
        label_24->setText(QString());
        label_38->setText(QCoreApplication::translate("emergencyRequest_patient", "Blood Donation ", nullptr));
        why->setText(QCoreApplication::translate("emergencyRequest_patient", "Why become donor", nullptr));
        my_details->setText(QCoreApplication::translate("emergencyRequest_patient", "My\n"
"Details", nullptr));
        label_28->setText(QString());
        login->setText(QCoreApplication::translate("emergencyRequest_patient", "Profile", nullptr));
        label_6->setText(QString());
        label_33->setText(QCoreApplication::translate("emergencyRequest_patient", "Announcements", nullptr));
        label_37->setText(QString());
        label_36->setText(QString());
        label_2->setText(QString());
        label_30->setText(QCoreApplication::translate("emergencyRequest_patient", "Last donated:\n"
"9 September,2022", nullptr));
        label->setText(QString());
        label_35->setText(QString());
        label_29->setText(QString());
        my_details_3->setText(QCoreApplication::translate("emergencyRequest_patient", "Request\n"
"Blood", nullptr));
        search->setText(QString());
        search->setPlaceholderText(QCoreApplication::translate("emergencyRequest_patient", "   Search", nullptr));
        label_19->setText(QCoreApplication::translate("emergencyRequest_patient", "Ready to Donate ?", nullptr));
        pushButton->setText(QCoreApplication::translate("emergencyRequest_patient", "Yes", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class emergencyRequest_patient: public Ui_emergencyRequest_patient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMERGENCYREQUEST_PATIENT_H
