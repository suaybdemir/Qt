#include "widget.h"
#include "ui_widget.h"
#include<QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)

{
    QHBoxLayout *hbox = new QHBoxLayout(this);

    check1 = new QCheckBox();
    check1->setText("Python");
    check1->setFont(QFont("Times",14));
    check1->setIcon(QIcon(":/images/py.png"));
    check1->setIconSize(QSize(40,40));

    check2 = new QCheckBox();
    check2->setText("C++");
    check2->setFont(QFont("Times",14));
    check2->setIcon(QIcon(":/images/cpp.png"));
    check2->setIconSize(QSize(40,40));

    check3 = new QCheckBox();
    check3->setText("Java");
    check3->setFont(QFont("Times",14));
    check3->setIcon(QIcon(":/images/java.png"));
    check3->setIconSize(QSize(40,40));

    hbox->addWidget(check1);
    hbox->addWidget(check2);
    hbox->addWidget(check3);

}

Widget::~Widget()
{

}
