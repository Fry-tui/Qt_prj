#-------------------------------------------------
#
# Project created by QtCreator 2021-11-01T19:25:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = store2
TEMPLATE = app


SOURCES += main.cpp\
        first_page.cpp \
    middle_page.cpp \
    login_register.cpp \
    order.cpp \
    check.cpp \
    pay.cpp \
    pay_check.cpp \
    samp.cpp

HEADERS  += first_page.h \
    middle_page.h \
    login_register.h \
    order.h \
    check.h \
    pay.h \
    pay_check.h \
    samp.h

FORMS    += first_page.ui \
    middle_page.ui \
    login_register.ui \
    order.ui \
    check.ui \
    pay.ui \
    pay_check.ui \
    samp.ui

RESOURCES += \
    ../QTphoto/image.qrc
