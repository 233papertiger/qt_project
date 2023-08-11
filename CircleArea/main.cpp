#include "calculate_circle_area.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    calculate_circle_area w;
    w.show();
    return a.exec();
}
