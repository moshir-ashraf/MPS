#include <QApplication>
#include "loginform.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LogInForm ll;
    MainMap l;
    l.show();
    return a.exec();
}
