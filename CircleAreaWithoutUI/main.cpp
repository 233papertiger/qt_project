#include "circle_area_wo_ui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    circle_area_wo_ui w;
    w.show();
    return a.exec();
}
