#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    QTcpSocket  *tcpClient;  //socket
    QString getLocalIP();    //获取本机IP地址

private slots:
//自定义槽函数

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
