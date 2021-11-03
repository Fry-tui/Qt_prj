#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QIcon>
#include <QDebug>
#include <QAction>
#include <QStringList>
#include <QMovie>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //this->showMaximized();        // 以最大化方式显示窗口，这是一个槽
    //this->showFullScreen();        // 以全屏方式显示窗口，这是一个槽
    this->setEnabled(true);

    ui->BackPic->setScaledContents(true);

    //QMovie *iconShow = new QMovie(":car_3d");
    QMovie *iconShow = new QMovie("://car.gif");
    ui->BackPic->resize(this->size());
    ui->BackPic->setMovie(iconShow);
    iconShow->start();
    ui->BackPic->lower();
    this->setWindowFlags(Qt::FramelessWindowHint);
    //ui->portrait->raise();
    //ui->stackedWidget->raise();

    //this->setWindowState(Qt::WindowNoState);
    //this->setStyleSheet("QWidget{background:#ff9933;}QWidget:hover{background:#ff3366;}");
    //ui->Login_User_box->setEchoMode(QLineEdit::Password);
    //ui->Login_User_box->setInputMethodHints(Qt::ImhHiddenText| Qt::ImhNoPredictiveText|Qt::ImhNoAutoUppercase);
    //ui->Login_Pwd_box->setEchoMode(QLineEdit::Password);
    //ui->Login_User_box->setMaxLength(6);
    ui->Login_Pwd_box->setMaxLength(6);
    //ui->Login_User_box->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    //ui->Login_User_box->setInputMask( "0000-00-00" );
    //ui->Login_User_box->setText( "00000000" );
    //ui->Login_User_box->setCursorPosition(0);
    //ui->Login_User_box->setAlignment(Qt::AlignCenter);

    //connect(ui->Login_Pwd_box,SIGNAL(editingFinished()),this,SLOT(close()));

    ui->Login_User_box->setPlaceholderText("name");
    ui->Login_Pwd_box->setPlaceholderText("pwd");

    ui->Login_User_box->setClearButtonEnabled(true);

    m_model = new QStandardItemModel(0, 1, this);
    m_completer = new QCompleter(m_model, this);
    ui->Login_User_box->setCompleter(m_completer);
    //将信号activated()连接到槽onEmailChoosed()。当用户用鼠标选择了某一项之后就把选中的项更新到文本框中，补全完成。
    connect(ui->Login_User_box, SIGNAL(activated(const QString&)), this, SLOT(onEmailChoosed(const QString&)));

    //信号textChanged()连接到onTextChanged()用于更新Model中的数据。
    connect(ui->Login_User_box, SIGNAL(textChanged(const QString&)), this, SLOT(onTextChanged(const QString&)));

    //自动联想
    QStringList list;
    list << "Hi" << "Hello" << "Hey";

    QCompleter *completer = new QCompleter(list);

    ui->Login_Pwd_box->setCompleter(completer);

    //ui->Login_Pwd_box->setContentsMargins(80,20,20,20);

//    QAction action = QAction(le);
//    action.setIcon(QIcon('://visual.png'));
//    ui->Login_Pwd_box->addAction(action,QLineEdit.LeadingPosition);
//    QLineEdit.TrailingPosition;     //在文本框后端显示图标
//    //QLineEdit.LeadingPosition      //在文本框前端显示图标
//    def change_action():pass;
//    action.triggered.connect(change_action);   //行为触发程序
    QAction * action = new QAction(ui->Login_Pwd_box);
    action->setIcon(QIcon("://visual.png"));
    //QIcon *icon = new QIcon();
    //icon->addFile('://visual.png',);
    //action->setIcon(icon);
    ui->Login_Pwd_box->addAction(action,QLineEdit::TrailingPosition);
    //action->triggered();

    QFile qss("://login.qss");

    if( qss.open(QFile::ReadOnly)){
        qDebug("open success");
        QString style = QLatin1String(qss.readAll());
        //a.setStyleSheet(style);
        this->setStyleSheet(style);
        qss.close();
    }else{
        qDebug("Open failed");
    }
    QImage image(":u");
    QPixmap px = QPixmap::fromImage(image);
    //图片缩放：w, h为宽高
    px = px.scaled(150, 150, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    //ui->portrait->setPixmap(px);
    //ui->portrait->setText("<img src=\"file:////mnt/hgfs/share/Qt_prj/Test/Login_prj/unvisual.png\" alt=\"Image read error!\" height=\"128\" width=\"128\" />");
    ui->stackedWidget->setCurrentIndex(1);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onEmailChoosed(const QString& email)
{
    ui->Login_User_box->clear();    // 清除已存在的文本更新内容
    ui->Login_User_box->setText(email);
}

void Widget::onTextChanged(const QString& str)
{
    if (str.contains("@"))   // 如果已经输入了@符号，我们就停止补全了。因为到了这一步，我们再补全意义也不大了。
    {
        return;
    }
    QStringList strlist;
    strlist << "@163.com" << "@qq.com" << "@gmail.com" << "@hotmail.com" << "@126.com";

    m_model->removeRows(0, m_model->rowCount());   // 先清楚已经存在的数据，不然的话每次文本变更都会插入数据，最后出现重复数据
    for (int i = 0; i < strlist.size(); ++i)
    {
        m_model->insertRow(0);
        m_model->setData(m_model->index(0, 0), str + strlist.at(i));
    }
}

void Widget::on_btn_register_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Widget::on_btn_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_btn_upload_clicked()
{
    QString picName = QFileDialog::getOpenFileName(this, tr("Open Image"), ".", tr("Image Files (*.png *.jpg *.bmp *.gif)"));
    //qDebug()<<picName<<endl;
    if(picName==NULL){
        return;
    }
    ui->portait_register->clear();
    ui->portait_register->setText("<img src=\"file:///"+picName+"\" alt=\"Image read error!\" height=\"128\" width=\"128\" />");
}

void Widget::on_btn_exit_clicked()
{
    this->close();
}

void Widget::on_btn_complete_clicked()
{
    if(ui->box_reg_name->text()==""||ui->box_reg_pwd->text()==""||ui->box_reg_email->text()==""){
        QMessageBox::warning(this,"error","Input Empty!");
    }


}

void Widget::on_box_reg_email_textChanged(const QString &arg1)
{
    if (arg1.contains("@"))   // 如果已经输入了@符号，我们就停止补全了。因为到了这一步，我们再补全意义也不大了。
    {
        return;
    }
    QStringList strlist;
    strlist << "@163.com" << "@qq.com" << "@gmail.com" << "@hotmail.com" << "@126.com";

    m_model->removeRows(0, m_model->rowCount());   // 先清楚已经存在的数据，不然的话每次文本变更都会插入数据，最后出现重复数据
    for (int i = 0; i < strlist.size(); ++i)
    {
        m_model->insertRow(0);
        m_model->setData(m_model->index(0, 0), arg1 + strlist.at(i));
    }
}
