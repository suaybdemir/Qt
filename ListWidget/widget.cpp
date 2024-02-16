#include "widget.h"
#include <QVBoxLayout>
#include<QListWidget>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);

    QVBoxLayout *vbox = new QVBoxLayout(this);

    QListWidget *listWidget = new QListWidget();
    listWidget->setFont(QFont("TImes",14));
    listWidget->setStyleSheet("background-color:yellow");

    listWidget->insertItem(0,"C++");
    listWidget->insertItem(1,"Python");
    listWidget->insertItem(2,"Java");
    listWidget->insertItem(3,"C#");

    vbox->addWidget(listWidget);

}

Widget::~Widget() {}
