#include "widget.h"
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);

    QHBoxLayout *hbox = new QHBoxLayout(this);

    QLabel *label = new QLabel();
    label->setText("ChooseLanguages : ");
    label->setFont(QFont("Times",14));

    lineedit = new QLineEdit();
    lineedit->setFont(QFont("Times",14));

    QPushButton *btn = new QPushButton();
    btn->setText("Choose Language");
    btn->setFont(QFont("Times",14));
    //connect(btn,SIGNAL(clicked(bool)),this,SLOT(getMyItem()));
    connect(btn,SIGNAL(clicked(bool)),this,SLOT(getMyItem()));

    hbox->addWidget(label);
    hbox->addWidget(lineedit);
    hbox->addWidget(btn);
}

Widget::~Widget() {}

void Widget::getMyItem()
{
    QList<QString> languages = {"C++","Python","Java","C#"};
    QString text = QInputDialog::getItem(this,"InputDialog","List of Languages",languages,1,false);

    if(!text.isEmpty())
    {
        lineedit->setText(text);
    }

}

void Widget::getMyText()
{
    QString text = QInputDialog::getText(this,"Get Username","Enter Your Name : ");
    if(!text.isEmpty()){
        lineedit->setText(text);
    }
}
