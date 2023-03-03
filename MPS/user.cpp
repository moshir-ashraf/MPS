#include "user.h"
User::User()
{

}
User::~User()
{

}
User::User(QString name)
{
    if (file->open(QIODevice::ReadWrite|QIODevice::Append))
        stream->operator<<(name + "\n");
    file->close();
}
void User::save(Graph::NodePointer x)
{
    favourites.push_back(x);
}
void User::setName(QString name)
{
  this->name = name;
}
