#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sms.h"
#include <QTimer>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _pSms = new Sms();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMetaObject::invokeMethod(_pSms, "singleMessage", Q_ARG(QString, ui->lineEdit->text()), Q_ARG(QString, ui->lineEdit_2->text()));
}
