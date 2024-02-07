#include "widget.h"
#include <QHBoxLayout>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("SignalsSlots");
    resize(500,400);

    QPushButton *btn1 = new QPushButton(this);
    btn1->setText("Change Text");
    connect(btn1,SIGNAL(clicked()),this,SLOT(ChangeText()));

    label = new QLabel(this);
    label->setText("Hello");

    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->addWidget(btn1);
    hbox->addWidget(label);



}

Widget::~Widget() {}

void Widget::ChangeText()
{
    label->setText("This is changed");
    label->setFont(QFont("Times",15));
    label->setStyleSheet("color:red");
}
