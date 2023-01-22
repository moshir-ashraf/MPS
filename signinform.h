#ifndef SIGNINFORM_H
#define SIGNINFORM_H
#include <QFile>
#include <QDialog>
#include <QTextStream>
#include "mainmap.h"
#include <cstdlib>
namespace Ui {
class SignInForm;
}

class SignInForm : public QDialog
{
    Q_OBJECT

public:
    explicit SignInForm(QWidget *parent = nullptr);
    QFile *file = new QFile("USERS.txt");
    QTextStream *stream;
    MainMap *m = new MainMap;
    User *users;
    ~SignInForm();
private slots:
    void on_Register_clicked();

    void on_RPW_editingFinished();

private:
    Ui::SignInForm *ui;
};

#endif // SIGNINFORM_H
