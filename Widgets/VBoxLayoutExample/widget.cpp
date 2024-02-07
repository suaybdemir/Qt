#include "widget.h"
#include <QVBoxLayout>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QVBoxLayout");
    resize(500,400);

    QPushButton *btn1 = new QPushButton(this);
    btn1->setText("Click One");

    QPushButton *btn2 = new QPushButton(this);
    btn2->setText("Click Two");

    QPushButton *btn3 = new QPushButton(this);
    btn3->setText("Click Three");

    QPushButton *btn4 = new QPushButton(this);
    btn4->setText("Click Four");

    QVBoxLayout *vbox = new QVBoxLayout(this);

    vbox->addWidget(btn1);
    vbox->addWidget(btn2);
    vbox->addWidget(btn3);
    vbox->addWidget(btn4);


}

Widget::~Widget() {}
