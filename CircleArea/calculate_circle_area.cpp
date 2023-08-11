#include "calculate_circle_area.h"
#include "./ui_calculate_circle_area.h"

const static double PI = 3.1416;

calculate_circle_area::calculate_circle_area(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculate_circle_area)
{
    ui->setupUi(this);
}

calculate_circle_area::~calculate_circle_area()
{
    delete ui;
}


void calculate_circle_area::on_countBtn_clicked()
{
    bool ok;
    QString tempStr;
    QString valueStr = ui->radiusLineEdit->text();

    int valueInt = valueStr.toInt(&ok);
    double area = valueInt * valueInt * PI;
    ui->areaLabel2->setText(tempStr.setNum(area));
}
