#ifndef LOGIN_REGISTER_H
#define LOGIN_REGISTER_H

#include <QWidget>
#include "middle_page.h"
namespace Ui {
class login_register;
}

class login_register : public QWidget
{
    Q_OBJECT

public:
    explicit login_register(QWidget *parent = 0);
    ~login_register();

private slots:
    void on_pushButton_next_clicked();

private:
    Ui::login_register *ui;
    middle_page *mp;
};

#endif // LOGIN_REGISTER_H
