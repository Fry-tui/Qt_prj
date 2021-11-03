/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionActOpenDB;
    QAction *actionQuit;
    QAction *actionAdd;
    QAction *actionInsert;
    QAction *actionSub;
    QAction *actionRevert;
    QAction *actionDelUser;
    QAction *actionPic;
    QAction *actionDelPic;
    QAction *actionUp;
    QWidget *centralWidget;
    QTableView *tableView;
    QLabel *photo;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(841, 529);
        actionActOpenDB = new QAction(MainWindow);
        actionActOpenDB->setObjectName(QStringLiteral("actionActOpenDB"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/open"), QSize(), QIcon::Normal, QIcon::Off);
        actionActOpenDB->setIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/exit"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/add"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon2);
        actionInsert = new QAction(MainWindow);
        actionInsert->setObjectName(QStringLiteral("actionInsert"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/insert"), QSize(), QIcon::Normal, QIcon::Off);
        actionInsert->setIcon(icon3);
        actionSub = new QAction(MainWindow);
        actionSub->setObjectName(QStringLiteral("actionSub"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/sub"), QSize(), QIcon::Normal, QIcon::Off);
        actionSub->setIcon(icon4);
        actionRevert = new QAction(MainWindow);
        actionRevert->setObjectName(QStringLiteral("actionRevert"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/revert"), QSize(), QIcon::Normal, QIcon::Off);
        actionRevert->setIcon(icon5);
        actionDelUser = new QAction(MainWindow);
        actionDelUser->setObjectName(QStringLiteral("actionDelUser"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/delUser"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelUser->setIcon(icon6);
        actionPic = new QAction(MainWindow);
        actionPic->setObjectName(QStringLiteral("actionPic"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Pic"), QSize(), QIcon::Normal, QIcon::Off);
        actionPic->setIcon(icon7);
        actionDelPic = new QAction(MainWindow);
        actionDelPic->setObjectName(QStringLiteral("actionDelPic"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/delPic"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelPic->setIcon(icon8);
        actionUp = new QAction(MainWindow);
        actionUp->setObjectName(QStringLiteral("actionUp"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/up"), QSize(), QIcon::Normal, QIcon::Off);
        actionUp->setIcon(icon9);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(50, 110, 321, 261));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        photo = new QLabel(centralWidget);
        photo->setObjectName(QStringLiteral("photo"));
        photo->setGeometry(QRect(550, 220, 201, 151));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setGeometry(QRect(590, 130, 121, 31));
        comboBox->setEditable(true);
        comboBox->setDuplicatesEnabled(false);
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(140, 60, 85, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 60, 67, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 841, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actionActOpenDB);
        mainToolBar->addAction(actionQuit);
        mainToolBar->addAction(actionAdd);
        mainToolBar->addAction(actionInsert);
        mainToolBar->addAction(actionSub);
        mainToolBar->addAction(actionRevert);
        mainToolBar->addAction(actionDelUser);
        mainToolBar->addAction(actionPic);
        mainToolBar->addAction(actionDelPic);
        mainToolBar->addAction(actionUp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionActOpenDB->setText(QApplication::translate("MainWindow", "actOpenDB", 0));
#ifndef QT_NO_TOOLTIP
        actionActOpenDB->setToolTip(QApplication::translate("MainWindow", "Open Database", 0));
#endif // QT_NO_TOOLTIP
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionAdd->setText(QApplication::translate("MainWindow", "Add", 0));
        actionInsert->setText(QApplication::translate("MainWindow", "Insert", 0));
        actionSub->setText(QApplication::translate("MainWindow", "sub", 0));
        actionRevert->setText(QApplication::translate("MainWindow", "revert", 0));
        actionDelUser->setText(QApplication::translate("MainWindow", "delUser", 0));
        actionPic->setText(QApplication::translate("MainWindow", "Pic", 0));
        actionDelPic->setText(QApplication::translate("MainWindow", "delPic", 0));
        actionUp->setText(QApplication::translate("MainWindow", "Up", 0));
        photo->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "UFO", 0)
         << QApplication::translate("MainWindow", "ABC", 0)
        );
        label->setText(QApplication::translate("MainWindow", "sort", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
