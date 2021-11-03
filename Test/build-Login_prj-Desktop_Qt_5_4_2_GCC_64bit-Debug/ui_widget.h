/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *frame;
    QStackedWidget *stackedWidget;
    QWidget *page_Login;
    QLineEdit *Login_User_box;
    QLineEdit *Login_Pwd_box;
    QLabel *portrait_login;
    QLabel *title_login;
    QPushButton *btn_login;
    QPushButton *btn_register;
    QLabel *BackPic;
    QPushButton *btn_exit;
    QWidget *pagr_Register;
    QLabel *title_register;
    QPushButton *btn_upload;
    QPushButton *btn_complete;
    QPushButton *btn_Back;
    QLabel *portait_register;
    QLineEdit *box_reg_name;
    QLineEdit *box_reg_pwd;
    QLineEdit *box_reg_email;
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QWidget *page;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1024, 580);
        Widget->setInputMethodHints(Qt::ImhNone);
        frame = new QFrame(Widget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1024, 580));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1024, 580));
        page_Login = new QWidget();
        page_Login->setObjectName(QStringLiteral("page_Login"));
        Login_User_box = new QLineEdit(page_Login);
        Login_User_box->setObjectName(QStringLiteral("Login_User_box"));
        Login_User_box->setGeometry(QRect(640, 290, 113, 27));
        Login_User_box->setStyleSheet(QStringLiteral("border-radius: 30px;"));
        Login_Pwd_box = new QLineEdit(page_Login);
        Login_Pwd_box->setObjectName(QStringLiteral("Login_Pwd_box"));
        Login_Pwd_box->setGeometry(QRect(640, 370, 113, 27));
        portrait_login = new QLabel(page_Login);
        portrait_login->setObjectName(QStringLiteral("portrait_login"));
        portrait_login->setGeometry(QRect(690, 110, 128, 131));
        portrait_login->setStyleSheet(QLatin1String("border-radius: 64px;\n"
"background-image: url(:u);\n"
""));
        portrait_login->setAlignment(Qt::AlignCenter);
        title_login = new QLabel(page_Login);
        title_login->setObjectName(QStringLiteral("title_login"));
        title_login->setGeometry(QRect(460, 30, 100, 80));
        QFont font;
        font.setPointSize(21);
        font.setBold(true);
        font.setWeight(75);
        title_login->setFont(font);
        title_login->setLayoutDirection(Qt::LeftToRight);
        title_login->setStyleSheet(QStringLiteral("color: rgb(54, 12, 149);"));
        title_login->setAlignment(Qt::AlignCenter);
        title_login->setWordWrap(false);
        btn_login = new QPushButton(page_Login);
        btn_login->setObjectName(QStringLiteral("btn_login"));
        btn_login->setGeometry(QRect(640, 470, 99, 27));
        btn_login->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        btn_register = new QPushButton(page_Login);
        btn_register->setObjectName(QStringLiteral("btn_register"));
        btn_register->setGeometry(QRect(760, 470, 99, 27));
        btn_register->setStyleSheet(QLatin1String("Padding: 1px;\n"
"background-color: rgb(255, 71, 71);\n"
"Border-radius: 5px;\n"
"Color: #fefefe;"));
        BackPic = new QLabel(page_Login);
        BackPic->setObjectName(QStringLiteral("BackPic"));
        BackPic->setGeometry(QRect(0, 0, 10, 10));
        btn_exit = new QPushButton(page_Login);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setGeometry(QRect(640, 520, 221, 41));
        btn_exit->setStyleSheet(QLatin1String("Padding: 1px;\n"
"color: rgb(255, 255, 255);\n"
"Border-radius: 15px;\n"
"background-color: rgb(107, 107, 107);"));
        stackedWidget->addWidget(page_Login);
        pagr_Register = new QWidget();
        pagr_Register->setObjectName(QStringLiteral("pagr_Register"));
        title_register = new QLabel(pagr_Register);
        title_register->setObjectName(QStringLiteral("title_register"));
        title_register->setGeometry(QRect(390, 30, 241, 91));
        title_register->setFont(font);
        title_register->setLayoutDirection(Qt::LeftToRight);
        title_register->setStyleSheet(QStringLiteral("color: rgb(54, 12, 149);"));
        title_register->setAlignment(Qt::AlignCenter);
        title_register->setWordWrap(false);
        btn_upload = new QPushButton(pagr_Register);
        btn_upload->setObjectName(QStringLiteral("btn_upload"));
        btn_upload->setGeometry(QRect(430, 340, 171, 21));
        btn_upload->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        btn_complete = new QPushButton(pagr_Register);
        btn_complete->setObjectName(QStringLiteral("btn_complete"));
        btn_complete->setGeometry(QRect(670, 470, 171, 21));
        btn_complete->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        btn_Back = new QPushButton(pagr_Register);
        btn_Back->setObjectName(QStringLiteral("btn_Back"));
        btn_Back->setGeometry(QRect(170, 470, 171, 21));
        btn_Back->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        portait_register = new QLabel(pagr_Register);
        portait_register->setObjectName(QStringLiteral("portait_register"));
        portait_register->setGeometry(QRect(450, 160, 128, 128));
        portait_register->setStyleSheet(QStringLiteral("color: #fefefe;"));
        box_reg_name = new QLineEdit(pagr_Register);
        box_reg_name->setObjectName(QStringLiteral("box_reg_name"));
        box_reg_name->setGeometry(QRect(130, 130, 201, 41));
        QPalette palette;
        QBrush brush(QColor(254, 254, 254, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(51, 51, 51, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        box_reg_name->setPalette(palette);
        QFont font1;
        font1.setKerning(true);
        box_reg_name->setFont(font1);
        box_reg_name->setLayoutDirection(Qt::LeftToRight);
        box_reg_name->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        box_reg_name->setFrame(false);
        box_reg_name->setCursorPosition(0);
        box_reg_pwd = new QLineEdit(pagr_Register);
        box_reg_pwd->setObjectName(QStringLiteral("box_reg_pwd"));
        box_reg_pwd->setGeometry(QRect(130, 230, 201, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        box_reg_pwd->setPalette(palette1);
        box_reg_pwd->setFont(font1);
        box_reg_pwd->setLayoutDirection(Qt::LeftToRight);
        box_reg_pwd->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        box_reg_pwd->setFrame(false);
        box_reg_pwd->setCursorPosition(0);
        box_reg_email = new QLineEdit(pagr_Register);
        box_reg_email->setObjectName(QStringLiteral("box_reg_email"));
        box_reg_email->setGeometry(QRect(130, 330, 201, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        box_reg_email->setPalette(palette2);
        box_reg_email->setFont(font1);
        box_reg_email->setLayoutDirection(Qt::LeftToRight);
        box_reg_email->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        box_reg_email->setFrame(false);
        box_reg_email->setCursorPosition(0);
        groupBox = new QGroupBox(pagr_Register);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(660, 140, 241, 261));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 30, 211, 201));
        stackedWidget->addWidget(pagr_Register);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        portrait_login->setText(QString());
        title_login->setText(QApplication::translate("Widget", "LOGIN", 0));
        btn_login->setText(QApplication::translate("Widget", "SIGN IN", 0));
        btn_register->setText(QApplication::translate("Widget", "SIGN UP", 0));
        BackPic->setText(QString());
        btn_exit->setText(QApplication::translate("Widget", "EXIT", 0));
        title_register->setText(QApplication::translate("Widget", "REGISTER", 0));
        btn_upload->setText(QApplication::translate("Widget", "UPLOAD PICTURE", 0));
        btn_complete->setText(QApplication::translate("Widget", "COMPLETE REGISTRATION", 0));
        btn_Back->setText(QApplication::translate("Widget", "BACK TO LOGIN PAGE", 0));
        portait_register->setText(QApplication::translate("Widget", "<html><head/><body><p><img src=\":/u\"/></p></body></html>", 0));
        box_reg_name->setText(QString());
        box_reg_name->setPlaceholderText(QApplication::translate("Widget", "Username", 0));
        box_reg_pwd->setText(QString());
        box_reg_pwd->setPlaceholderText(QApplication::translate("Widget", "Password", 0));
        box_reg_email->setText(QString());
        box_reg_email->setPlaceholderText(QApplication::translate("Widget", "Email", 0));
        groupBox->setTitle(QApplication::translate("Widget", "camera", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
