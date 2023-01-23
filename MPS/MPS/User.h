#pragma once
#include <QQueue>
class User
{
public:
    User();
    QString name, ID, username, password;
    bool found = false;
    QQueue<QString>favourites;
    //void save(QString x);
    void setName(QString name);
    void setUserName(QString username);
    void setID(QString ID);
    void setPass(QString pass);
    float pos;
    User(QString name, QString username, QString ID, QString password);
    ~User();
};

