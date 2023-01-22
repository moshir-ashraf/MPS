#ifndef LOGINFORM_H
#define LOGINFORM_H
#include <QDialog>
#include <QFile>
#include <QTextStream>
#include "signinform.h"
using namespace std;
namespace Ui {
class LogInForm;
}

class LogInForm : public QDialog
{
    Q_OBJECT

public:
    explicit LogInForm(QWidget *parent = nullptr);
    QFile *file = new QFile("USERS.txt");
    QFile *ffile;
    QTextStream *stream;
    bool found = false;
    MainMap *m = new MainMap;
    SignInForm *s = new SignInForm;
    ~LogInForm();

private slots:
    void on_LOGIN_clicked();
    void on_SIGNUP_clicked();

private:
    Ui::LogInForm *ui;
};

#endif // LOGINFORM_H
