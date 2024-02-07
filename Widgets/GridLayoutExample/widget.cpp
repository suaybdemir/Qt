#include "widget.h"
#include <QGridLayout>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("GridLayout");
    resize(400,400);

    QPushButton *btn1 = new QPushButton(this);
    btn1->setText("Click One");

    QPushButton *btn2 = new QPushButton(this);
    btn2->setText("Click Two");

    QPushButton *btn3 = new QPushButton(this);
    btn3->setText("Click Three");

    QPushButton *btn4 = new QPushButton(this);
    btn4->setText("Click Four");

    QGridLayout *grid = new QGridLayout(this);
    grid->addWidget(btn1,0,0);
    grid->addWidget(btn2,0,1);
    grid->addWidget(btn3,1,0);
    grid->addWidget(btn4,1,1);
}

Widget::~Widget() {}
