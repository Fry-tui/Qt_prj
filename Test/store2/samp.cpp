#include "samp.h"
#include "ui_samp.h"
#include "order.h"
#include <QPixmap>
#include <QDebug>
samp::samp(QWidget *parent,QString str_pic,QString name,QString money) :
    QWidget(parent),
    ui(new Ui::samp)
{
    ui->setupUi(this);
    QPixmap pixmap(str_pic);
    pixmap=pixmap.scaled(80,80,Qt::IgnoreAspectRatio);
    ui->pic->setPixmap(pixmap);

    //ui->pic->setPixmap(pixmap);

    ui->cakename->setText(name);

    ui->money->setText(money);
    this->setWindowFlags(Qt::FramelessWindowHint);

    connect(this,SIGNAL(testSignal(QString)),parent,SLOT(recvTest(QString)));

}

samp::~samp()
{
    delete ui;
}

void samp::on_pushButton_clicked()
{
    qDebug()<<"button on";
    //发送信号
    emit testSignal(ui->cakename->text());
}

