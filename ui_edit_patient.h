/********************************************************************************
** Form generated from reading UI file 'edit_patient.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_PATIENT_H
#define UI_EDIT_PATIENT_H

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

class Ui_edit_patient
{
public:
    QLabel *label_25;
    QLabel *label_32;
    QLabel *label_29;
    QLabel *label_26;
    QLabel *label;
    QPushButton *my_details_2;
    QPushButton *login;
    QLabel *label_2;
    QLabel *label_24;
    QLabel *label_27;
    QLabel *label_30;
    QPushButton *my_details_3;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_23;
    QFrame *line_2;
    QTableView *tableView;
    QFrame *line_3;
    QCalendarWidget *calendarWidget;
    QLabel *label_7;
    QLabel *label_4;
    QPushButton *home;
    QFrame *line;
    QPushButton *about;
    QPushButton *my_details;
    QPushButton *why;
    QLabel *label_28;
    QLabel *label_31;
    QFrame *line_4;
    QPushButton *pushButton;
    QLineEdit *userid;

    void setupUi(QDialog *edit_patient)
    {
        if (edit_patient->objectName().isEmpty())
            edit_patient->setObjectName("edit_patient");
        edit_patient->resize(1270, 700);
        edit_patient->setStyleSheet(QString::fromUtf8("background-color:#EFE6E7;\n"
""));
        label_25 = new QLabel(edit_patient);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(1020, 350, 212, 66));
        label_25->setCursor(QCursor(Qt::PointingHandCursor));
        label_25->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_32 = new QLabel(edit_patient);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(1095, 360, 131, 41));
        label_32->setCursor(QCursor(Qt::PointingHandCursor));
        label_32->setStyleSheet(QString::fromUtf8("\n"
"#label_32::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_29 = new QLabel(edit_patient);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(1030, 360, 51, 41));
        label_29->setCursor(QCursor(Qt::PointingHandCursor));
        label_29->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/announcement.png);"));
        label_26 = new QLabel(edit_patient);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(1020, 270, 212, 66));
        label_26->setCursor(QCursor(Qt::PointingHandCursor));
        label_26->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label = new QLabel(edit_patient);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        my_details_2 = new QPushButton(edit_patient);
        my_details_2->setObjectName("my_details_2");
        my_details_2->setGeometry(QRect(25, 300, 81, 61));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
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
"}"));
        login = new QPushButton(edit_patient);
        login->setObjectName("login");
        login->setGeometry(QRect(1070, 30, 151, 41));
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
        label_2 = new QLabel(edit_patient);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_24 = new QLabel(edit_patient);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(1020, 190, 212, 66));
        label_24->setCursor(QCursor(Qt::PointingHandCursor));
        label_24->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_27 = new QLabel(edit_patient);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(1030, 200, 52, 52));
        label_27->setCursor(QCursor(Qt::PointingHandCursor));
        label_27->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood.png);"));
        label_30 = new QLabel(edit_patient);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(1095, 200, 131, 41));
        label_30->setCursor(QCursor(Qt::PointingHandCursor));
        label_30->setStyleSheet(QString::fromUtf8("\n"
"#label_30::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        my_details_3 = new QPushButton(edit_patient);
        my_details_3->setObjectName("my_details_3");
        my_details_3->setGeometry(QRect(25, 380, 81, 61));
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
        label_3 = new QLabel(edit_patient);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(138, 125, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_5 = new QLabel(edit_patient);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(35, 140, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        label_23 = new QLabel(edit_patient);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(1030, 140, 201, 31));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        line_2 = new QFrame(edit_patient);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(20, 290, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        tableView = new QTableView(edit_patient);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(170, 160, 777, 471));
        tableView->setStyleSheet(QString::fromUtf8("border-color: rgb(31, 31, 31);\n"
"background-color: rgb(255, 255, 255);\n"
"border-width : 1.2px;\n"
"border-style:inset;\n"
""));
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        line_3 = new QFrame(edit_patient);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(20, 370, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        calendarWidget = new QCalendarWidget(edit_patient);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1010, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_7 = new QLabel(edit_patient);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        label_4 = new QLabel(edit_patient);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(1007, 127, 237, 306));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        home = new QPushButton(edit_patient);
        home->setObjectName("home");
        home->setGeometry(QRect(290, 30, 111, 41));
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
        line = new QFrame(edit_patient);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 210, 89, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        about = new QPushButton(edit_patient);
        about->setObjectName("about");
        about->setGeometry(QRect(420, 30, 151, 41));
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
        my_details = new QPushButton(edit_patient);
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
"\n"
"#my_details::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        why = new QPushButton(edit_patient);
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
"\n"
"\n"
"#why::hover{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        label_28 = new QLabel(edit_patient);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(1030, 280, 52, 52));
        label_28->setCursor(QCursor(Qt::PointingHandCursor));
        label_28->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood.png);"));
        label_31 = new QLabel(edit_patient);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(1095, 280, 131, 41));
        label_31->setCursor(QCursor(Qt::PointingHandCursor));
        label_31->setStyleSheet(QString::fromUtf8("\n"
"#label_31::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        line_4 = new QFrame(edit_patient);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(20, 445, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(edit_patient);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 580, 151, 29));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 10, 18);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        userid = new QLineEdit(edit_patient);
        userid->setObjectName("userid");
        userid->setGeometry(QRect(200, 540, 161, 31));
        userid->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color:black;\n"
""));
        label_2->raise();
        label_4->raise();
        label_25->raise();
        label_32->raise();
        label_29->raise();
        label_26->raise();
        label->raise();
        my_details_2->raise();
        login->raise();
        label_24->raise();
        label_27->raise();
        label_30->raise();
        my_details_3->raise();
        label_3->raise();
        label_5->raise();
        label_23->raise();
        line_2->raise();
        tableView->raise();
        line_3->raise();
        calendarWidget->raise();
        label_7->raise();
        home->raise();
        line->raise();
        about->raise();
        my_details->raise();
        why->raise();
        label_28->raise();
        label_31->raise();
        line_4->raise();
        pushButton->raise();
        userid->raise();

        retranslateUi(edit_patient);

        QMetaObject::connectSlotsByName(edit_patient);
    } // setupUi

    void retranslateUi(QDialog *edit_patient)
    {
        edit_patient->setWindowTitle(QCoreApplication::translate("edit_patient", "Dialog", nullptr));
        label_25->setText(QString());
        label_32->setText(QCoreApplication::translate("edit_patient", "Announcements", nullptr));
        label_29->setText(QString());
        label_26->setText(QString());
        label->setText(QString());
        my_details_2->setText(QCoreApplication::translate("edit_patient", "Donor\n"
"Requests", nullptr));
        login->setText(QCoreApplication::translate("edit_patient", "Profile", nullptr));
        label_2->setText(QString());
        label_24->setText(QString());
        label_27->setText(QString());
        label_30->setText(QCoreApplication::translate("edit_patient", "9 September,2022", nullptr));
        my_details_3->setText(QCoreApplication::translate("edit_patient", "Blood\n"
"Requests", nullptr));
        label_3->setText(QString());
        label_5->setText(QString());
        label_23->setText(QCoreApplication::translate("edit_patient", "Blood Donation Camps", nullptr));
        label_7->setText(QString());
        label_4->setText(QString());
        home->setText(QCoreApplication::translate("edit_patient", "Home", nullptr));
        about->setText(QCoreApplication::translate("edit_patient", "About us", nullptr));
        my_details->setText(QCoreApplication::translate("edit_patient", "User\n"
"Details", nullptr));
        why->setText(QCoreApplication::translate("edit_patient", "Why become donor", nullptr));
        label_28->setText(QString());
        label_31->setText(QCoreApplication::translate("edit_patient", "12 December,2022", nullptr));
        pushButton->setText(QCoreApplication::translate("edit_patient", "Delete", nullptr));
        userid->setPlaceholderText(QCoreApplication::translate("edit_patient", "  Enter Patient ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_patient: public Ui_edit_patient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_PATIENT_H
