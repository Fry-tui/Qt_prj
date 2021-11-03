#include "first_page.h"
#include "login_register.h"
#include "middle_page.h"
#include "order.h"
#include "pay_check.h"
#include "pay.h"
#include "check.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    first_page w;



    w.setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    w.show();


    return a.exec();
}
