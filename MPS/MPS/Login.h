#pragma once
#include <QFile>
#include <QTextStream>
#include <QMainWindow>
#include "ui_Login.h"
#include "Signup.h"

class Login : public QDialog
{
	Q_OBJECT

public:
    explicit Login(QWidget* parent = nullptr);
    QFile* file = new QFile("resources//USERS.txt");
    QFile* ffile;
    QTextStream* stream;
    bool found = false;
    MainMap* m = new MainMap;
    Signup* s = new Signup;
    ~Login();

private slots:
    void on_LOGIN_clicked();
    void on_SIGNUP_clicked();

private:
    Ui::Login* ui;
};