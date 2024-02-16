#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void warnMsg()    ;
    void setInfo();
    void setAbout();

private:
    QMessageBox *messageBox;
};
#endif // WIDGET_H
