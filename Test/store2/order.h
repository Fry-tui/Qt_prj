#ifndef ORDER_H
#define ORDER_H

#include <QWidget>
#include "samp.h"
namespace Ui {
class order;
}

class order : public QWidget
{
    Q_OBJECT

public:
    explicit order(QWidget *parent = 0);
    ~order();

private:
    Ui::order *ui;
public slots:
    void recvTest(QString str);

};

#endif // ORDER_H
