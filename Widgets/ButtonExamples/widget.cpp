#include "widget.h"
#include <QPushButton>
#include <QMenu>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QPushButton");
    resize(500,400);


    QPushButton *button = new QPushButton(this);
    button->setText("Click Me");
    button->setGeometry(30,30,130,130);
    button->setFont(QFont("Times",15));
    button->setIcon(QIcon(":/image/qt.png"));
    button->setIconSize(QSize(36,36));

    //add popup menu
    QMenu *menu = new QMenu();
    menu->setFont(QFont("Sanserif",14));
    menu->setStyleSheet("background-color:yellow");
    menu->addAction("Copy");
    menu->addAction("Cut");
    menu->addAction("Paste");
    button->setMenu(menu);

}

Widget::~Widget() {


}
