#include "loginform.h"
#include "ui_loginform.h"

LogInForm::LogInForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogInForm)
{
    ui->setupUi(this);
}

LogInForm::~LogInForm()
{
    delete ui;
}

void LogInForm::on_LOGIN_clicked()
{
        count = 0;
        QString name;
        if(ui->UN->toPlainText().isEmpty()||ui->PW->text().isEmpty())
       {
           ui->ErrorMs->setText("Check your input!");
       }
      if (file->open(QIODevice::ReadOnly | QIODevice::Text)){
           while (!stream->atEnd()){
               QString line = stream->readLine();
               if(line == ui->UN->toPlainText())
               {
                   found = true;
               }
               else if(line == ui->PW->text() && found)
                  count++;
               else if(count == 1 && found)
               {
                   count++;
                   name = line;
               }
               else if(count == 2 && found)
               {
                   ui->ErrorMs->setText("Logged In Successfully");
                   ui->ErrorMs->setAlignment(Qt::AlignCenter);
                   this->hide();
                   if(name.contains("Ashraf") || name.contains("ashraf"))
                       m->display(" ya a7la dr fel donya ",line,true);
                   else
                       m->display(name,line,true);
                   m->setAttribute(Qt::WA_DeleteOnClose);
                   m->show();
                   break;
               }
               else
                   found = false;
         }
           if(!found)
           {
               ui->ErrorMs->setText("Seems like you're new, Go ahead and Register :>");
               ui->ErrorMs->setAlignment(Qt::AlignCenter);
           }
       }
      file->close();
   }

void LogInForm::on_SIGNUP_clicked()
{
    this->hide();
    s->setModal(true);
    s->show();
}

