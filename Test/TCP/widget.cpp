#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>
#include <QScrollArea>
#include <QLayout>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    tcpServer=new QTcpServer(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btn_act_clicked()
{
    if(ui->le_port->text()==""){
        QMessageBox::critical(NULL, "Error", "input empty", QMessageBox::Close, QMessageBox::Close);
        return;
    }

    quint16 port=ui->le_port->text().toInt();

    //listen
    qDebug()<<"listen"<<endl;
    tcpServer->listen(QHostAddress::AnyIPv4,port);

    //accept
    qDebug()<<"accept"<<endl;
    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(onNewConnection()));

    ui->btn_act->setEnabled(false);
    ui->btn_stop->setEnabled(true);
}

void Widget::on_btn_stop_clicked()
{
    if(tcpServer->isListening()){
        tcpServer->close();
        ui->btn_act->setEnabled(true);
        ui->btn_stop->setEnabled(false);
    }
}

void Widget::onNewConnection()
{
    QTcpSocket *tcpSocket = new QTcpSocket;
    tcpSocket = tcpServer->nextPendingConnection();
    map.insert(tcpSocket->peerAddress().toString(),tcpSocket);
    //connect(tcpSocket, SIGNAL(connected()),this, SLOT(onClientConnected()));
    connect(map.find(tcpSocket->peerAddress().toString()).value(),SIGNAL(connected()),this, SLOT(onClientConnected()));
    onClientConnected();

    connect(map.find(tcpSocket->peerAddress().toString()).value(),SIGNAL(connected()),this, SLOT(onClientDisconnected()));

    free(tcpSocket);
}

void Widget::onClientConnected()
{
    //客户端接入时
    QMessageBox::information(NULL, "Tips", "connected", QMessageBox::Yes, QMessageBox::Yes);
}

void Widget::onClientDisconnected()
{
    QMessageBox::information(NULL, "Tips", "connected stop", QMessageBox::Yes, QMessageBox::Yes);

    //map.find( ->deleteLater();
}
