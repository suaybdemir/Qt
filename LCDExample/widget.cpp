#include "widget.h"
#include "ui_widget.h"
#include <QHBoxLayout>
#include<QTime>
#include<QTimer>

Widget::Widget(QWidget *parent)
    : QWidget(parent)

{
    setWindowTitle("LCD Example");
    resize(1024,300);
    QHBoxLayout *hbox = new QHBoxLayout(this);

    lcd = new QLCDNumber(this);
    lcd->setFont(QFont("Sanserif",10));
    lcd->setStyleSheet("background-color:#0094F3");

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start(1000);

    showTime();
    hbox->addWidget(lcd);
}

Widget::~Widget()
{

}

void Widget::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if((time.second()%2)==0)
    {
        text[2]=' ';
    }


    lcd->display(text);

}
