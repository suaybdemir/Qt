#include "widget.h"
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Calendar");
    resize(500,100);
    QVBoxLayout *vbox = new QVBoxLayout(this);

    calendar = new QCalendarWidget();
    calendar->setGridVisible(false);
    calendar->setStyleSheet("background-color:green");
    connect(calendar,SIGNAL(selectionChanged()),this,SLOT(selectDate()));


    label = new QLabel("Hello");
    label->setFont(QFont("Times",14));
    label->setStyleSheet("color:red");


    vbox->addWidget(calendar);
}

Widget::~Widget() {}

void Widget::selectDate()
{
    QString dateSelected = calendar->selectedDate().toString();
    label->setText(dateSelected);
}
