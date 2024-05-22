#include "clinputinfo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    clInputInfo w;
    w.show();

    return a.exec();
}
