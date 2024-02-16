#include "widget.h"
#include <QPushButton>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);

    QHBoxLayout *hbox = new QHBoxLayout(this);

    QPushButton *btn1 = new QPushButton();
    btn1->setText("Warning");
    hbox->addWidget(btn1);
    connect(btn1,SIGNAL(clicked(bool)),this,SLOT(warnMsg()));

    QPushButton *btn2 = new QPushButton();
    btn2->setText("Information");
    hbox->addWidget(btn2);
    connect(btn2,SIGNAL(clicked(bool)),this,SLOT(setInfo()));

    QPushButton *btn3 = new QPushButton();
    btn3->setText("About");
    hbox->addWidget(btn3);
    connect(btn3,SIGNAL(clicked(bool)),this,SLOT(setAbout()));



}

Widget::~Widget() {}

void Widget::warnMsg()
{
    QMessageBox::warning(this,"Warning","This is warning");
}

void Widget::setInfo()
{
    QMessageBox::information(this,"Information","This is information");
}

void Widget::setAbout()
{
    QMessageBox::about(this,"About","This is about");
}
