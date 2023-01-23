/********************************************************************************
** Form generated from reading UI file 'Signup.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLabel *FirstName;
    QLabel *UserName;
    QLabel *Password;
    QLabel *RepPass;
    QLabel *LastName;
    QLabel *ID;
    QPushButton *Register;
    QLabel *ErrorMs;
    QLabel *Email;
    QLineEdit *PW;
    QLineEdit *RPW;
    QLabel *label_2;
    QLineEdit *FN;
    QLineEdit *IDT;
    QLineEdit *UN;
    QLineEdit *LN;
    QLineEdit *EM;
    QLabel *LOGO;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(1204, 633);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../../Downloads/logo-miu.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Signup->setWindowIcon(icon);
        Signup->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 246, 238);"));
        FirstName = new QLabel(Signup);
        FirstName->setObjectName("FirstName");
        FirstName->setGeometry(QRect(80, 210, 81, 21));
        FirstName->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));
        UserName = new QLabel(Signup);
        UserName->setObjectName("UserName");
        UserName->setGeometry(QRect(80, 270, 81, 21));
        UserName->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));
        Password = new QLabel(Signup);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(170, 320, 71, 21));
        Password->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));
        RepPass = new QLabel(Signup);
        RepPass->setObjectName("RepPass");
        RepPass->setGeometry(QRect(120, 360, 121, 21));
        RepPass->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));
        LastName = new QLabel(Signup);
        LastName->setObjectName("LastName");
        LastName->setGeometry(QRect(280, 210, 81, 21));
        LastName->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));
        ID = new QLabel(Signup);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(280, 270, 21, 21));
        ID->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));
        Register = new QPushButton(Signup);
        Register->setObjectName("Register");
        Register->setGeometry(QRect(240, 460, 121, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        Register->setFont(font);
        Register->setStyleSheet(QString::fromUtf8("font: 18pt \"Agency FB\";\n"
"background-color: rgb(252, 254, 255);"));
        ErrorMs = new QLabel(Signup);
        ErrorMs->setObjectName("ErrorMs");
        ErrorMs->setGeometry(QRect(60, 530, 391, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        ErrorMs->setFont(font1);
        ErrorMs->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));
        Email = new QLabel(Signup);
        Email->setObjectName("Email");
        Email->setGeometry(QRect(100, 400, 91, 21));
        Email->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));
        PW = new QLineEdit(Signup);
        PW->setObjectName("PW");
        PW->setGeometry(QRect(250, 320, 101, 21));
        PW->setStyleSheet(QString::fromUtf8("font: 18pt \"Agency FB\";\n"
"background-color: rgb(252, 254, 255);"));
        PW->setEchoMode(QLineEdit::Password);
        RPW = new QLineEdit(Signup);
        RPW->setObjectName("RPW");
        RPW->setGeometry(QRect(250, 360, 101, 21));
        RPW->setStyleSheet(QString::fromUtf8("font: 18pt \"Agency FB\";\n"
"background-color: rgb(252, 254, 255);"));
        RPW->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(Signup);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 99, 211, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Agency FB")});
        font2.setPointSize(24);
        font2.setBold(false);
        font2.setItalic(false);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("font: 24pt \"Agency FB\";"));
        FN = new QLineEdit(Signup);
        FN->setObjectName("FN");
        FN->setGeometry(QRect(170, 210, 101, 26));
        FN->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(252, 254, 255);"));
        IDT = new QLineEdit(Signup);
        IDT->setObjectName("IDT");
        IDT->setGeometry(QRect(320, 270, 101, 26));
        IDT->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(252, 254, 255);"));
        UN = new QLineEdit(Signup);
        UN->setObjectName("UN");
        UN->setGeometry(QRect(160, 270, 101, 26));
        UN->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(252, 254, 255);"));
        LN = new QLineEdit(Signup);
        LN->setObjectName("LN");
        LN->setGeometry(QRect(370, 210, 101, 26));
        LN->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(252, 254, 255);"));
        EM = new QLineEdit(Signup);
        EM->setObjectName("EM");
        EM->setGeometry(QRect(150, 400, 311, 26));
        EM->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(252, 254, 255);"));
        LOGO = new QLabel(Signup);
        LOGO->setObjectName("LOGO");
        LOGO->setGeometry(QRect(490, 10, 641, 511));
        LOGO->setPixmap(QPixmap(QString::fromUtf8("../../../../../../resources/logo.png")));

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Register Page", nullptr));
        FirstName->setText(QCoreApplication::translate("Signup", "First Name:", nullptr));
        UserName->setText(QCoreApplication::translate("Signup", "Username:", nullptr));
        Password->setText(QCoreApplication::translate("Signup", "Password:", nullptr));
        RepPass->setText(QCoreApplication::translate("Signup", "Repeat Password:", nullptr));
        LastName->setText(QCoreApplication::translate("Signup", "Last Name:", nullptr));
        ID->setText(QCoreApplication::translate("Signup", "ID:", nullptr));
        Register->setText(QCoreApplication::translate("Signup", "REGISTER", nullptr));
        ErrorMs->setText(QString());
        Email->setText(QCoreApplication::translate("Signup", "Email:", nullptr));
        label_2->setText(QCoreApplication::translate("Signup", "Welcome to MPS", nullptr));
        LOGO->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
