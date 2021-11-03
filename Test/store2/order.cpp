#include "order.h"
#include "ui_order.h"
#include "samp.h"
#include <QVBoxLayout>
#include <QScrollArea>
#include <QDebug>
order::order(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::order)
{
    ui->setupUi(this);
    QScrollArea *scroll = new QScrollArea();
    QWidget *wgt = new QWidget();
    QVBoxLayout *layout = new QVBoxLayout();

    //添加菜单！
    samp *s1 = new samp(this,":/icon/cake.png","白桃茉莉","12.7");
    s1->setMinimumSize(400,100);
    layout->addWidget(s1);


    for(int i=0;i<5;i++){
        samp *s = new samp(this,":/icon/tea.jpg","红桃茉莉","13.7");
        s->setMinimumSize(600,100);
        layout->addWidget(s);
    }

    samp *s2 = new samp(this,":/icon/cake.png","吴洁铃","￥165");
    s2->setMinimumSize(400,100);
    layout->addWidget(s2);


    wgt->setLayout(layout);
    scroll->setWidget(wgt);


    ui->verMenu->addWidget(scroll);
    //ui->verMenu->setSizeConstraint(QLayout::SetFixedSize);

    //ui->scrollMenu->addScrollBarWidget(s1,Qt::AlignHCenter);
    //ui->scrollMenu->setLayout(v1);
}

order::~order()
{
    delete ui;
}

void order::recvTest(QString str)
{
    qDebug()<<"recvTest:"<<str;
}
