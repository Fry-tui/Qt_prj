#ifndef WIDGET_H
#define WIDGET_H
//#include <QCamera>
#include <QWidget>
#include <QCompleter>
#include <QStandardItemModel>
#include <QFileDialog>
#include <QMessageBox>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    QStandardItemModel *m_model;
    QCompleter *m_completer;
    //QCamera *cam;

private slots:
    void onEmailChoosed(const QString&);
    void onTextChanged(const QString&);
    void on_btn_register_clicked();
    void on_btn_Back_clicked();
    void on_btn_upload_clicked();
    void on_btn_exit_clicked();
    void on_btn_complete_clicked();
    void on_box_reg_email_textChanged(const QString &arg1);
};

#endif // WIDGET_H
