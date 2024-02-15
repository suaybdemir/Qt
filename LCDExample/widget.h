#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QLCDNumber>

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

public slots:
    void showTime();

private:
    QLCDNumber *lcd;
};
#endif // WIDGET_H
