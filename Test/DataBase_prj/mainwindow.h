#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtSql>
#include <QDataWidgetMapper>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include    "qwcomboboxdelegate.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QSqlDatabase DB;                    //database
    QSqlTableModel *tabModel;           //table
    QItemSelectionModel *theSelection;  //table changed
    QDataWidgetMapper *dataMapper;      //ui designed
    QWComboBoxDelegate Brand;

    void openTable();
    void getFiledNames();

private slots:
    void on_currentChanged(const QModelIndex &current, const QModelIndex &previous);
    void on_currentRowChanged(const QModelIndex &current, const QModelIndex &previous);

    void on_actionActOpenDB_triggered();

    void on_comboBox_2_currentIndexChanged(int index);
};

#endif // MAINWINDOW_H
