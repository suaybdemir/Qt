#include "widget.h"
#include "ui_widget.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QRandomGenerator>

Widget::Widget(QWidget *parent)
    : QWidget(parent)

{
    resize(1024,300);
    QVBoxLayout *vbox = new QVBoxLayout(this);

    lcd = new QLCDNumber(this);
    lcd->setStyleSheet("background-color:red");
    lcd->setFont(QFont("Times",14));

    QPushButton *btn = new QPushButton(this);
    btn->setFont(QFont("Times",14));
    btn->setText("Random Generator");
    connect(btn,SIGNAL(clicked(bool)),this,SLOT(randGenerator()));

    vbox->addWidget(lcd);
    vbox->addWidget(btn);
}

Widget::~Widget()
{

}

void Widget::randGenerator()
{
    int randomNumber = QRandomGenerator::global()->bounded(1000);
    lcd->display(randomNumber);
}

