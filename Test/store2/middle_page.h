#ifndef MIDDLE_PAGE_H
#define MIDDLE_PAGE_H

#include <QWidget>
#include "order.h"
namespace Ui {
class middle_page;
}

class middle_page : public QWidget
{
    Q_OBJECT

public:
    explicit middle_page(QWidget *parent = 0);
    ~middle_page();

private slots:
    void on_pushButton_order_clicked();

private:
    Ui::middle_page *ui;
    order *ord;

};

#endif // MIDDLE_PAGE_H
