#ifndef FIRST_PAGE_H
#define FIRST_PAGE_H

#include <QWidget>
#include "login_register.h" //子窗口文件

namespace Ui {
class first_page;
}

class first_page : public QWidget
{
    Q_OBJECT

public:
    explicit first_page(QWidget *parent = 0);
    ~first_page();

private slots:
    void on_pushButton_login_clicked(bool checked);

private:
    Ui::first_page *ui;
    login_register lr;
};

#endif // FIRST_PAGE_H
