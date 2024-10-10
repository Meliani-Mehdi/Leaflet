#include "leaflet.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Leaflet w;
    w.show();
    return a.exec();
}
