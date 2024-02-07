#include "widget.h"
#include <QLabel>
#include <QMovie>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QLabel");
    resize(500,400);

    /*
    QLabel *label = new QLabel("This is label",this);
    label->setText("This is the label ");
    label->move(100,100);
    label->setFont(QFont("Times",15));
    label->setStyleSheet("color:red");
    label->setGeometry(100,100,300,300);
    */

    //add image
    /*
    QLabel *label = new QLabel(this);
    label->setGeometry(20,20,400,400);
    label->setPixmap(QPixmap(":/images/qt.png"));
    */

    QLabel *label = new QLabel(this);
    label->setGeometry(20,20,400,400);
    QMovie *movie = new QMovie(":images/sky.gif");
    label->setMovie(movie);
    movie->start();


}


Widget::~Widget() {}
