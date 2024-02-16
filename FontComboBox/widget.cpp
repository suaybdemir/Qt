#include "widget.h"
#include <QVBoxLayout>



Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);

    QVBoxLayout *vbox = new QVBoxLayout(this);

    fontCombo = new QFontComboBox();
    connect(fontCombo,SIGNAL(currentFontChanged(QFont)),this,SLOT(changeFont()));

    edit = new QTextEdit();

    vbox->addWidget(fontCombo);
    vbox->addWidget(edit);

}

Widget::~Widget() {}

void Widget::changeFont()
{
    QFont myFont = QFont(fontCombo->itemText(fontCombo->currentIndex()));
    edit->setFont(myFont);
}
