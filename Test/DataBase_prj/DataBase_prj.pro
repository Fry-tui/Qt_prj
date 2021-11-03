#-------------------------------------------------
#
# Project created by QtCreator 2021-11-01T09:14:19
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DataBase_prj
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qwcomboboxdelegate.cpp

HEADERS  += mainwindow.h \
    qwcomboboxdelegate.h

FORMS    += mainwindow.ui

DISTFILES += \
    icon/open.png

RESOURCES += \
    image.qrc

QMAKE_CXXFLAGS +=  \
    -Wno-unused-parameter
