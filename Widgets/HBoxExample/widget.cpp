#include "widget.h"
#include <QBoxLayout>
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QHBoxLayout");
    resize(500,400);

    QPushButton *btn1 = new QPushButton(this);
    btn1->setText("Click One");

    QPushButton *btn2 = new QPushButton(this);
    btn2->setText("Click Two");;

    QPushButton *btn3 = new QPushButton(this);
    btn3->setText("Click Three");

    QPushButton *btn4 = new QPushButton(this);
    btn4->setText("Click Four");

    QHBoxLayout *hbox = new QHBoxLayout(this);

    hbox->addWidget(btn1);
    hbox->addWidget(btn2);
    hbox->addWidget(btn3);
    hbox->addWidget(btn4);


}

Widget::~Widget() {}
