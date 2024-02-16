#include "widget.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QFontDialog>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);

    QVBoxLayout *vbox = new QVBoxLayout(this);

    textEdit = new QTextEdit();
    QPushButton *btn = new QPushButton();
    btn->setText("Open Font");
    connect(btn,SIGNAL(clicked(bool)),this,SLOT(changeFont()));

    vbox->addWidget(textEdit);
    vbox->addWidget(btn);

}

Widget::~Widget() {}

void Widget::changeFont()
{
    bool ok;

    QFont font = QFontDialog::getFont(&ok,QFont("Helvetical[cronyx]",12),this);

    if(ok)
    {
        textEdit->setFont(font);
    }

}
