#include "login_register.h"
#include "ui_login_register.h"

login_register::login_register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login_register)
{
    ui->setupUi(this);
}

login_register::~login_register()
{
    delete ui;
}

void login_register::on_pushButton_next_clicked()
{
    this->hide();
    mp = new middle_page();
    mp->show();
}
