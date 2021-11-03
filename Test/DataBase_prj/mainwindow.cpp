#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dataMapper = new QDataWidgetMapper;
    //   tableView显示属性设置
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setAlternatingRowColors(true);
    on_actionActOpenDB_triggered();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    //更新actPost和actCancel 的状态
    Q_UNUSED(current);
    Q_UNUSED(previous);
    //ui->actSubmit->setEnabled(tabModel->isDirty()); //有未保存修改时可用
    //ui->actRevert->setEnabled(tabModel->isDirty());
    return;
}

void MainWindow::on_currentRowChanged(const QModelIndex &current, const QModelIndex &previous)
{
    if(!current.isValid()){
        ui->photo->clear();
        return;
    }
    dataMapper->setCurrentIndex(current.row()); //update数据映射的行号
    int curRecNo = current.row();
    QSqlRecord curRec = tabModel->record(curRecNo);
    if(curRec.isNull("Photo"))
        ui->photo->clear();
    else{
        QByteArray data = curRec.value("Photo").toByteArray();
        QPixmap pic;
        pic.loadFromData(data);
        ui->photo->setPixmap(pic.scaledToWidth(ui->photo->size().width()));
    }
    return;
}

void MainWindow::on_actionActOpenDB_triggered()
{
//打开数据表
    QString aFile=QFileDialog::getOpenFileName(this,"选择数据库文件","../",
                             "SQL Lite数据库(*.db *.db3)");
    if (aFile.isEmpty())  //选择SQL Lite数据库文件
       return;

//打开数据库
    DB=QSqlDatabase::addDatabase("QSQLITE"); //添加 SQL LITE数据库驱动
    DB.setDatabaseName(aFile); //设置数据库名称
//    DB.setHostName();
//    DB.setUserName();
//    DB.setPassword();
    if (!DB.open())   //打开数据库
    {
        QMessageBox::warning(this, "错误", "打开数据库失败",
                                 QMessageBox::Ok,QMessageBox::NoButton);
        return;
    }

//打开数据表
    openTable();
}


void MainWindow::openTable()
{//打开数据表
    tabModel=new QSqlTableModel(this,DB);//数据表
    tabModel->setTable("garage"); //指定数据表
    tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);//数据保存方式，OnManualSubmit , OnRowChange
    tabModel->setSort(tabModel->fieldIndex("Name"),Qt::AscendingOrder); //排序

    if (!(tabModel->select()))//查询数据
    {
       QMessageBox::critical(this, "错误信息",
              "打开数据表错误,错误信息\n"+tabModel->lastError().text(),
                 QMessageBox::Ok,QMessageBox::NoButton);
       return;
    }

//字段显示名
    tabModel->setHeaderData(tabModel->fieldIndex("Name"),Qt::Horizontal,"username");
    tabModel->setHeaderData(tabModel->fieldIndex("Pwd"),Qt::Horizontal,"password");
    tabModel->setHeaderData(tabModel->fieldIndex("CardID"),Qt::Horizontal,"CarId");

    tabModel->setHeaderData(tabModel->fieldIndex("Photo"),Qt::Horizontal,"照片");    //这个字段不再tableView中显示

    theSelection=new QItemSelectionModel(tabModel);//关联选择模型

//theSelection当前项变化时触发currentChanged信号
    connect(theSelection,SIGNAL(currentChanged(QModelIndex,QModelIndex)),
            this,SLOT(on_currentChanged(QModelIndex,QModelIndex)));

//选择行变化时
    connect(theSelection,SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),
            this,SLOT(on_currentRowChanged(QModelIndex,QModelIndex)));

    ui->tableView->setModel(tabModel);//设置数据模型
    ui->tableView->setSelectionModel(theSelection); //设置选择模型
    ui->tableView->setColumnHidden(tabModel->fieldIndex("Memo"),true);//隐藏列
    ui->tableView->setColumnHidden(tabModel->fieldIndex("Photo"),true);//隐藏列

    QStringList strList;
    strList.clear();
    strList<<"SUV"<<"UFO"<<"PKQ";
    bool isEditable=true;
    Brand.setItems(strList,isEditable);
    ui->tableView->setItemDelegateForColumn(tabModel->fieldIndex("Brand"),&Brand); //Combbox选择型
    //ui->tableView->setItemDelegateForColumn(tabModel->fieldIndex("Brand"),Brand);

//创建界面组件与数据模型的字段之间的数据映射
    dataMapper= new QDataWidgetMapper();
    dataMapper->setModel(tabModel);//设置数据模型
    dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);//

//    dataMapper->setItemDelegate(new QSqlRelationalDelegate(this)); //含有外键的
//界面组件与tabModel的具体字段之间的联系
    dataMapper->addMapping(ui->comboBox,tabModel->fieldIndex("Brand"));

//    dataMapper->addMapping(ui->dbPhoto,tabModel->fieldIndex("Photo")); //图片无法直接映射

    dataMapper->toFirst();//移动到首记录

    getFiledNames();    //获取字段名称列表，填充ui->groupBoxSort组件

}

void MainWindow::getFiledNames()
{
    //获取所有字段名称
    QSqlRecord  emptyRec=tabModel->record();//获取空记录，只有字段名
    for (int i=0;i<emptyRec.count();i++)
        ui->comboBox_2->addItem(emptyRec.fieldName(i));
}


void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    //选择字段进行排序
    tabModel->setSort(index,Qt::AscendingOrder);

    tabModel->select();
}
