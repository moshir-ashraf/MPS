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
  if(file->open(QIODevice::ReadWrite|QIODevice::Text|QIODevice::Append))
  {
      if(ui->FN->text().isEmpty()|| ui->LN->text().isEmpty()|| ui->EM->text().isEmpty()|| ui->IDT->text().isEmpty() || ui->PW->text().isEmpty() || ui->RPW->text().isEmpty()||ui->UN->text().isEmpty())
      {
          ui->ErrorMs->setAlignment(Qt::AlignCenter);
          ui->ErrorMs->setText("Check your input!");
      } else
      {
          if(ui->PW->text() != ui->RPW->text())
          {
              ui->Password->setStyleSheet("color: rgb(237, 51, 59);");
          } else
          {
                  stream = new QTextStream(file);
                  stream->operator<<(ui->UN->text()+ "  " + ui->PW->text() + "  " + ui->FN->text()+ "  " + ui->LN->text() + "  " + ui->IDT->text() +"\n");
                  this->hide();
                  m->display(ui->FN->text()+ " " + ui->LN->text(),ui->IDT->text(),false);
                  m->setUser(*new User(ui->FN->text() + " " + ui->LN->text(),ui->UN->text(),ui->IDT->text(),ui->PW->text()));
                  m->setAttribute(Qt::WA_DeleteOnClose);
                  m->show();
          }
      }
      file->close();
  }
}
void SignInForm::on_RPW_editingFinished()
{
    ui->Register->show();
}
