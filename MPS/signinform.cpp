#include "signinform.h"
#include "ui_signinform.h"

SignInForm::SignInForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignInForm)
{
    ui->setupUi(this);
    ui->Register->hide();
    ui->EM->setPlaceholderText("blablabla@gmail.com");
    ui->IDT->setPlaceholderText("Year/ID");
}

SignInForm::~SignInForm()
{
    delete ui;
}

void SignInForm::on_Register_clicked()
{
    if(file->open(QIODevice::ReadWrite|QIODevice::Text))
    {
        if(ui->FN->toPlainText().isEmpty()||ui->IDT->toPlainText().isEmpty()||ui->LN->toPlainText().isEmpty()||ui->PW->text().isEmpty()||ui->RPW->text().isEmpty()||ui->EM->toPlainText().isEmpty()||ui->UN->toPlainText().isEmpty())
        {
            ui->ErrorMs->setText("Check your input again!");
            ui->ErrorMs->setAlignment(Qt::AlignCenter);
        }
            else if(ui->PW->text() != ui->RPW->text())
                {
                    ui->Password->setStyleSheet("color: rgb(170, 0, 0);");
                    ui->ErrorMs->setText("Passwords do not match!");
                    ui->ErrorMs->setAlignment(Qt::AlignCenter);
                }
                else
                    {
                        while(!stream->atEnd())
                        if(stream->readLine() == ui->IDT->toPlainText())
                           userExists = true;
                        if(userExists)
                           {ui->ErrorMs->setText("User already Exists!"); ui->ErrorMs->setAlignment(Qt::AlignCenter);}
                        else
                            {
                                stream->operator<<(ui->UN->toPlainText() + "\n");
                                stream->operator<<(ui->PW->text() + "\n");
                                stream->operator<<(ui->FN->toPlainText() + " " + ui->LN->toPlainText() + "\n");
                                stream->operator<<(ui->IDT->toPlainText() + "\n");
                                this->hide();
                                if(ui->FN->toPlainText() == "Ashraf" || ui->FN->toPlainText() == "ashraf")
                                    m->display(" ya a7la dr fel donya ",ui->IDT->toPlainText(),false);
                                else
                                    m->display((ui->FN->toPlainText()+" "+ui->LN->toPlainText()),ui->IDT->toPlainText(),false);
                                m->setAttribute(Qt::WA_DeleteOnClose);
                                m->show();
                            }
                    }
        userExists = false;
        file->close();
         }
    else
    {
        ui->ErrorMs->setText("File could not be opened!");
    }
}
void SignInForm::on_RPW_editingFinished()
{
    ui->Register->show();
}
