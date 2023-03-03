#ifndef GRAPH_H
#define GRAPH_H
#include <QtQml>
#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>
#include <QVector>
#include <QQueue>
#include <ctime>
#include<iostream>
#include <QPushButton>
using namespace std;

class Graph
{

public:
    Graph(int z);
    Graph(int f, int t);
    ~Graph();
    class Node {
    public:
        int x, y;
        float global, local;
        QString name;
        QVector<Node*>adjnode;
        QPushButton* button;
        void buttons(QPushButton* x);
        Node* Parent=NULL;
        bool congestion();
        Node();
        Node(int x, int y);
        void setcoordinates(int x, int y);
        void setname(QString name);
        bool update(Node* target, float destoend);
        float shortestsl(Node* destination);
        QString outnode();
        int type = 0;
        void adj_dis(Node* end);

    };
    typedef Node* NodePointer;
    class Floor{
    public:
        Floor();
        QString name;
        Floor(QString floor);
        QVector<QString> rooms;
        NodePointer building;
        void setnode(NodePointer r);
    };
    QVector<Floor*> floors;
    NodePointer start=NULL, end=NULL;
    void setstart(NodePointer myn);
    void setend(NodePointer myn);
    QVector<NodePointer> nodes, path;
    void addneighbor(QVector<NodePointer> x, NodePointer y);
    NodePointer getNode(int x, int y);
    NodePointer getNode(QString n);
    void getpath();
    void AStarAlgorithm();
    void set();
    void insert(int x, int y);
    void erase(int x, int y);
    void addneighbor(NodePointer x, NodePointer y);
    void disp_path();
private:
};
#endif
