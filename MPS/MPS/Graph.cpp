#include "Graph.h"
Graph::Node::Node() {
    Parent = NULL;
    congestion();
    global = local = 9999999;
    name = NULL;
    button = NULL;
}
Graph::Floor::Floor(QString floor) {
    QStringList room = floor.split("  ");
    for (int i = 0; i < room.size(); i++) rooms.push_back(room[i]);
    building = NULL;
}
void Graph::Floor::setnode(NodePointer r) {
    building = r;
    name = r->name;
}
Graph::Graph(int z)
{
    start = end = NULL;
    NodePointer *n = new NodePointer[z];
    for (int i = 0; i < z; i++) {
        n[i] = new Node();
        nodes.push_back(n[i]);
    }
}
Graph::Node::Node(int x, int y) {
    this->x = x;
    this->y = y;
    global = local = 9999999;
    button = NULL;
}
Graph::Graph(int f, int t)
{
    start = end = NULL;
    for (int i = 0; i < f * t; i++) {
        NodePointer n = new Node(f * i, t * i);
        QString s; s = "hi";
        n->name = "Node " + QString::number(i);
        nodes.push_back(n);
    }
}
void Graph::insert(int x, int y) {

    nodes.push_back(new Node(x, y));
}
void Graph::erase(int x, int y) {
    NodePointer del = getNode(x, y);
    for (QVector<NodePointer>::iterator it = nodes.begin(); it != nodes.end(); it++) {
        *it = *(it + 1);
    }
    nodes.pop_back();
    delete(del);
}

Graph::~Graph()
{
    nodes.clear();
    path.clear();
    start = end = NULL;
}
bool Graph::Node::congestion() {
    int x = rand() % 20;
    return(x >= 15);
}
void Graph::Node::setcoordinates(int x, int y) {
    this->x = x; this->y = y;
}
void Graph::Node::setname(QString name) {
    this->name = name;
}
bool Graph::Node::update(Node* target, float destoend) {
    if ((local + shortestsl(target)) < target->local)
    {
        target->local = local + shortestsl(target);
        target->Parent = this;
        target->global = shortestsl(target) + destoend;
        return true;
    }
    return false;
}

float Graph::Node::shortestsl(Node* destination) {
    return ((float)sqrt(pow(x - destination->x, 2) + pow(y - destination->y, 2)));
}

void Graph::addneighbor(QVector<NodePointer> x, NodePointer y) {
    for (int i = 0; i < x.size(); i++)
    {
        y->adjnode.push_back(x[i]);
        x[i]->adjnode.push_back(y);
    }
}
void Graph::addneighbor(NodePointer x, NodePointer y) {

    y->adjnode.push_back(x);
    x->adjnode.push_back(y);
}
Graph::NodePointer Graph::getNode(int x, int y) {
    for (int i = 0; i < nodes.size(); i++) {
        if (nodes.at(i)->x == x && nodes.at(i)->y == y)
            return nodes.at(i);
    }    return NULL;
}
Graph::NodePointer Graph::getNode(QString n) {
    for (int i = 0; i < nodes.size(); i++) {
        if (nodes.at(i)->name == n)
            return nodes.at(i);
        if (n == ("Co-ordinates (" + QString::number(nodes[i]->x) + "," + QString::number(nodes[i]->y) + ")"))
            return nodes[i];
    }
    for (int i = 0; i < floors.size(); i++) {
        if (floors[i]->rooms.contains(n))
            return floors.at(i)->building;
    }
    return NULL;
}
void Graph::setstart(NodePointer myn) {
    start = myn; start->Parent = NULL;
    start->local = 0;
}
void Graph::setend(NodePointer myn) {
    end = myn;
}
void Graph::getpath() {
    path.clear();
    path.push_back(end);
    NodePointer ptr = end->Parent;
    while (ptr) {
        path.push_back(ptr);
        ptr = ptr->Parent;
    }
}
QString Graph::Node::outnode() {
    return (name = " coordinates = (" + QString::number(x) + " ," + QString::number(y) + ")");
}

void Graph::AStarAlgorithm() {
    start->global = start->shortestsl(end);
    QQueue<NodePointer>discovered;
    for (int i = 0; i < start->adjnode.size(); i++) {
        if (start->update(start->adjnode[i], start->adjnode[i]->shortestsl(end))) discovered.enqueue(start->adjnode[i]);
    }
    while (!discovered.empty()) {
        for (int i = 0; i < discovered.front()->adjnode.size(); i++) {
            if (discovered.front()->update(discovered.front()->adjnode[i], discovered.front()->adjnode[i]->shortestsl(end))) {
                discovered.enqueue(discovered.front()->adjnode[i]);
            }
        }
        discovered.dequeue();
    }
    getpath();
}
void Graph::Node::buttons(QPushButton* x) {
    button = x;
}
