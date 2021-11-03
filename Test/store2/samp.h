#ifndef SAMP_H
#define SAMP_H

#include <QWidget>

namespace Ui {
class samp;
}

class samp : public QWidget
{
    Q_OBJECT

public:
    explicit samp(QWidget *parent = 0,QString str_pic="null",QString name="null",QString money="null");
    ~samp();

private slots:
    void on_pushButton_clicked();
    //void

private:
    Ui::samp *ui;

signals:
    void testSignal(QString str);
};

#endif // SAMP_H
