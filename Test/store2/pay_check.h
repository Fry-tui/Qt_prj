#ifndef PAY_CHECK_H
#define PAY_CHECK_H

#include <QWidget>

namespace Ui {
class pay_check;
}

class pay_check : public QWidget
{
    Q_OBJECT

public:
    explicit pay_check(QWidget *parent = 0);
    ~pay_check();

private:
    Ui::pay_check *ui;
};

#endif // PAY_CHECK_H
