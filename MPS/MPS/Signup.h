#pragma once
#include <QFile>
#include <QTextStream>
#include "MPS.h"
#include <QDialog>
#include "ui_Signup.h"
typedef MPS MainMap;
class Signup : public QDialog
{
	Q_OBJECT

public:
    explicit Signup(QWidget* parent = nullptr);
    QFile* file = new QFile("resources//USERS.txt");
    QTextStream* stream;
    MainMap* m = new MainMap;
    User* users;
    ~Signup();
private slots:
    void on_Register_clicked();
    void on_RPW_editingFinished();
private:
    Ui::Signup* ui;
};
