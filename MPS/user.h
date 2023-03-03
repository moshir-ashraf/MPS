#ifndef USER_H
#define USER_H

#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>
#include <QVector>
#include "graph.h"

class User
{
public:
    User();
    QString name;
    QFile *file = new QFile("USERS.txt");
    QTextStream *stream = new QTextStream(file);
    QVector<Graph::NodePointer> favourites;
    void save(Graph::NodePointer x);
    float pos;
    User(QString name);
    ~User();
    void setName(QString x);

};

#endif // USER_H
