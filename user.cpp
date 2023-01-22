#include "user.h"
User::User()
{

}
User::~User()
{

}
User::User(QString name,QString username,QString ID,QString password)
{
    this->name = name;
    this->username = username;
    this->ID = ID;
    this->password = password;
}
void User::setID(QString ID)
{
    this->ID = ID;
}
void User::setName(QString name)
{
    this->name = name;
}
void User::setPass(QString pass)
{
    this->password = pass;
}
void User::setUserName(QString username)
{
    this->username = username;
}

