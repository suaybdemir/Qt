#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QRadioButton>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void ChangeRad();

public:
    QLabel *label;
    QRadioButton *rad1;
    QRadioButton *rad2;
    QRadioButton *rad3;
private:
    Ui::Widget *ui;
};

inline void Widget::ChangeRad()
{
    if(rad1->isChecked())
    {
        label->setText("Python");
    }
    else if(rad2->isChecked())
    {
        label->setText("C++");
    }
    else
    {
        label->setText("Java");
    }
}
#endif // WIDGET_H
