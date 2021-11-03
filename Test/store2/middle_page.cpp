#include "middle_page.h"
#include "ui_middle_page.h"

middle_page::middle_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::middle_page)
{
    ui->setupUi(this);
}

middle_page::~middle_page()
{
    delete ui;
}

void middle_page::on_pushButton_order_clicked()
{
    this->hide();
    ord = new order();
    ord->show();
}
