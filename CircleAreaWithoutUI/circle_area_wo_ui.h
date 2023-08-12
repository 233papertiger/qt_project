#ifndef CIRCLE_AREA_WO_UI_H
#define CIRCLE_AREA_WO_UI_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class circle_area_wo_ui : public QDialog
{
    Q_OBJECT

public:
    circle_area_wo_ui(QWidget *parent = nullptr);
    ~circle_area_wo_ui();

private:
    QLabel *label1, *label2;
    QLineEdit *lineEdit;
    QPushButton *button;

private slots:
    void showArea();
};
#endif // CIRCLE_AREA_WO_UI_H
