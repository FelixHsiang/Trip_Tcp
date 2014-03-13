#include "qtripplanner.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTripPlanner w;
    w.show();

    return a.exec();
}
