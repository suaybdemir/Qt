#include "widget.h"
#include <QLineEdit>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QLineEdit");
    resize(500,400);

    QLineEdit *lineEdit = new QLineEdit(this);
    lineEdit->setGeometry(20,20,250,250);
    lineEdit->setFont(QFont("Timees",14));
    //lineEdit->setEnabled(false);
    lineEdit->setEchoMode(QLineEdit::EchoMode::Password);
}

Widget::~Widget() {}
