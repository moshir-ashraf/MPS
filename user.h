#ifndef USER_H
#define USER_H
#include <QMainWindow>
#include <QObject>
#include <QtQuick/QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>
#include <QVector>
#include <QQueue>
class User
{
public:
    User();
    QString name,ID,username,password;
    bool found = false;
    QQueue<QString>favourites;
    //void save(QString x);
    void setName(QString name);
    void setUserName(QString username);
    void setID(QString ID);
    void setPass(QString pass);
    float pos;
    User(QString name,QString username,QString ID,QString password);
    ~User();
};
#endif // USER_H
