#include <QApplication>
#include "loginform.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LogInForm l;
    l.show();
    return a.exec();
}
