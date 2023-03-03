#ifndef LOGINFORM_H
#define LOGINFORM_H
#include <QDialog>
#include <QFile>
#include <QTextStream>
#include "mainmap.h"
#include "signinform.h"
namespace Ui {
class LogInForm;
}

class LogInForm : public QDialog
{
    Q_OBJECT

public:
    explicit LogInForm(QWidget *parent = nullptr);
    QFile *file = new QFile("UI.txt");
    QTextStream *stream = new QTextStream(file);
    bool found = false;
    MainMap *m = new MainMap;
    SignInForm *s = new SignInForm;
    int count;
    ~LogInForm();

private slots:
    void on_LOGIN_clicked();

    void on_SIGNUP_clicked();

private:
    Ui::LogInForm *ui;
};

#endif // LOGINFOR
