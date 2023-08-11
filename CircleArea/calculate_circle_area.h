#ifndef CALCULATE_CIRCLE_AREA_H
#define CALCULATE_CIRCLE_AREA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class calculate_circle_area; }
QT_END_NAMESPACE

class calculate_circle_area : public QMainWindow
{
    Q_OBJECT

public:
    calculate_circle_area(QWidget *parent = nullptr);
    ~calculate_circle_area();

private slots:
    void on_countBtn_clicked();

private:
    Ui::calculate_circle_area *ui;
};
#endif // CALCULATE_CIRCLE_AREA_H
