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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *le_port;
    QPushButton *btn_act;
    QPushButton *btn_stop;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        le_port = new QLineEdit(Widget);
        le_port->setObjectName(QStringLiteral("le_port"));
        le_port->setGeometry(QRect(30, 10, 113, 27));
        btn_act = new QPushButton(Widget);
        btn_act->setObjectName(QStringLiteral("btn_act"));
        btn_act->setGeometry(QRect(170, 10, 99, 27));
        btn_stop = new QPushButton(Widget);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));
        btn_stop->setEnabled(false);
        btn_stop->setGeometry(QRect(280, 10, 99, 27));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        le_port->setPlaceholderText(QApplication::translate("Widget", "port", 0));
        btn_act->setText(QApplication::translate("Widget", "act", 0));
        btn_stop->setText(QApplication::translate("Widget", "stop", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
