#include "pay_check.h"
#include "ui_pay_check.h"

pay_check::pay_check(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pay_check)
{
    ui->setupUi(this);
}

pay_check::~pay_check()
{
    delete ui;
}
