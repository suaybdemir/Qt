#include "widget.h"
#include <QVBoxLayout>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);

    QVBoxLayout *vbox = new QVBoxLayout(this);

    edit = new QTextEdit();
    QPushButton *btn = new QPushButton();
    connect(btn,SIGNAL(clicked(bool)),this,SLOT(changeColor()));

    btn->setText("Change Color");

    vbox->addWidget(edit);
    vbox->addWidget(btn);
}

Widget::~Widget() {}

void Widget::changeColor()
{
    colorDialog = new QColorDialog();
    QColor color = colorDialog->getColor(Qt::yellow);
    edit->setTextColor(color);
}
