#ifndef WIDGET_H
#define WIDGET_H

#include <QHash>
#include <QWidget>
#include <QtNetwork>
#include <QTcpServer>
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
    Ui::Widget *ui;
    QTcpServer *tcpServer;
    //QTcpSocket *tcpSocket;  //TCP通讯的Socket
    QHash< QString , QTcpSocket *> map;

private slots:
//自定义槽函数
    void onNewConnection();//QTcpServer的newConnection()信号
    void onClientConnected(); //Client Socket connected
    void onClientDisconnected();
//UI生成的

    void on_btn_act_clicked();
    void on_btn_stop_clicked();
};

#endif // WIDGET_H
