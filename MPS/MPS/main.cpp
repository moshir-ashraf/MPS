#include "Login.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login start;
    start.show();
    return a.exec();
}
