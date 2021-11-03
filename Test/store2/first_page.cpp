#include "first_page.h"
#include "ui_first_page.h"
#include "login_register.h"
first_page::first_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::first_page)
{
    ui->setupUi(this);
}

first_page::~first_page()
{
    delete ui;
}

void first_page::on_pushButton_login_clicked(bool checked)
{

    this->hide();

    lr.setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    lr.show();

}
