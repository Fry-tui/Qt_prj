#-------------------------------------------------
#
# Project created by QtCreator 2021-10-29T13:47:58
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Login_prj
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    gdb.cpp

HEADERS  += widget.h \
    gdb.h

FORMS    += widget.ui

RESOURCES += \
    icon.qrc
