#include "check.h"
#include "ui_check.h"

check::check(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::check)
{
    ui->setupUi(this);
}

check::~check()
{
    delete ui;
}
