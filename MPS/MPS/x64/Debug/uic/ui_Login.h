/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *LOGO;
    QLabel *UserName;
    QLabel *Password;
    QLineEdit *PW;
    QPushButton *LOGIN;
    QLabel *ErrorMs;
    QLabel *label_2;
    QLabel *label;
    QPushButton *SIGNUP;
    QLineEdit *UN;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(1177, 520);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Downloads/logo-miu.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        Login->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 246, 238);"));
        LOGO = new QLabel(Login);
        LOGO->setObjectName("LOGO");
        LOGO->setGeometry(QRect(520, 0, 641, 511));
        LOGO->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/logo-miu.png")));
        UserName = new QLabel(Login);
        UserName->setObjectName("UserName");
        UserName->setGeometry(QRect(100, 220, 71, 21));
        UserName->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));
        Password = new QLabel(Login);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(100, 280, 71, 21));
        Password->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));
        PW = new QLineEdit(Login);
        PW->setObjectName("PW");
        PW->setGeometry(QRect(190, 280, 101, 21));
        PW->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(252, 254, 255);"));
        PW->setEchoMode(QLineEdit::Password);
        LOGIN = new QPushButton(Login);
        LOGIN->setObjectName("LOGIN");
        LOGIN->setGeometry(QRect(180, 340, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        LOGIN->setFont(font);
        LOGIN->setStyleSheet(QString::fromUtf8("font: 18pt \"Agency FB\";\n"
"background-color: rgb(252, 254, 255);"));
        ErrorMs = new QLabel(Login);
        ErrorMs->setObjectName("ErrorMs");
        ErrorMs->setGeometry(QRect(90, 410, 371, 31));
        ErrorMs->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 109, 241, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setItalic(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("font: 24pt \"Agency FB\";"));
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 250, 131, 20));
        label->setFocusPolicy(Qt::NoFocus);
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));
        SIGNUP = new QPushButton(Login);
        SIGNUP->setObjectName("SIGNUP");
        SIGNUP->setGeometry(QRect(350, 280, 121, 41));
        SIGNUP->setFont(font);
        SIGNUP->setStyleSheet(QString::fromUtf8("font: 18pt \"Agency FB\";\n"
"background-color: rgb(252, 254, 255);"));
        UN = new QLineEdit(Login);
        UN->setObjectName("UN");
        UN->setGeometry(QRect(190, 220, 101, 26));
        UN->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(252, 254, 255);"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Log In Page", nullptr));
        LOGO->setText(QString());
        UserName->setText(QCoreApplication::translate("Login", "Username:", nullptr));
        Password->setText(QCoreApplication::translate("Login", "Password:", nullptr));
        LOGIN->setText(QCoreApplication::translate("Login", "LOG IN", nullptr));
        ErrorMs->setText(QString());
        label_2->setText(QCoreApplication::translate("Login", "Welcome to MPS", nullptr));
        label->setText(QCoreApplication::translate("Login", "Not a member?", nullptr));
        SIGNUP->setText(QCoreApplication::translate("Login", "SIGN UP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
