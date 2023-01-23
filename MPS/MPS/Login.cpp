#include "Login.h"

Login::Login(QWidget *parent)
	: QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_LOGIN_clicked()
{
    if (ui->UN->text().isEmpty() || ui->PW->text().isEmpty())
    {
        ui->ErrorMs->setText("Check your input!");
    }
    else {
        if (file->open(QIODevice::ReadOnly | QIODevice::Text)) {
            stream = new QTextStream(file);
            QStringList user;
            while (!stream->atEnd())
            {
                QString line = stream->readLine();
                user = line.split("  ");
                if (user[0] == ui->UN->text() && user[1] == ui->PW->text())
                {
                    found = true;
                    this->hide();
                    m->setAttribute(Qt::WA_DeleteOnClose);
                    m->display(user[2] + " " + user[3], user[4], true);
                    m->setUser(*new User(user[2] + " " + user[3], user[0], user[4], user[1]));
                    m->show();
                }
            }
        }
    }
    if (!found) {
        ui->ErrorMs->setAlignment(Qt::AlignCenter);
        ui->ErrorMs->setText("User not found");
    }
    file->close();
}

void Login::on_SIGNUP_clicked()
{
    this->hide();
    s->setModal(true);
    s->show();
}


