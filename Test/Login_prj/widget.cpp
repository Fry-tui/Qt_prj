#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->showMaximized();        // 以最大化方式显示窗口，这是一个槽
    //this->showFullScreen();        // 以全屏方式显示窗口，这是一个槽
    this->setEnabled(true);
    //this->setWindowState(Qt::WindowNoState);
}

Widget::~Widget()
{
    delete ui;
}
