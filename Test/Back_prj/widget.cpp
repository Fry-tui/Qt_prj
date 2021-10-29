#include "widget.h"
#include "ui_widget.h"
#include <QMovie>
#include <QPixmap>
#include <QPalette>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->resize(1020,640);
    ui->backLabel->setScaledContents(true);
    //QPalette palette;
    //QPixmap pixmap("/car_main.gif");
    //pixmap = pixmap.scaled(this->width(),this->height());
    //palette.setBrush(backgroundRole(),QBrush(pixmap));
    //this->setPalette(palette);  //图片尺寸要和widget等大小 如果图片尺寸小  就会重复排列

    //ui->gif->setScaledContents(true);
    QMovie *iconShow = new QMovie(":/back/car/car_1");

    //palette.setBrush(backgroundRole(),QBrush(iconShow));
    //ui->gif->setMovie(iconShow);
    //this->setPalette(palette);  //图片尺寸要和widget等大小 如果图片尺寸小  就会重复排列
    ui->backFrame->resize(this->size());
    ui->backLabel->resize(this->size());
    ui->backFrame->setStyleSheet( "background: rgb(0, 0, 0, 0)");

    ui->backLabel->setMovie(iconShow);
    iconShow->start();
}

Widget::~Widget()
{
    delete ui;
}
