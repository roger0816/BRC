#-------------------------------------------------
#
# Project created by QtCreator 2015-10-10T05:43:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BRManager
TEMPLATE = app

DESTDIR = $$PWD/../bin
RCC_DIR =$$PWD/../bin
OBJECTS_DIR = $$PWD/obj
MOC_DIR =$$PWD/obj
UI_DIR = $$PWD/obj/ui_header


SOURCES += main.cpp\
        widget.cpp \
    CUsbDetect.cpp

HEADERS  += widget.h \
    CUsbDetect.h

FORMS    += widget.ui

INCLUDEPATH += $$PWD/../../../../../usr/include
DEPENDPATH += $$PWD/../../../../../usr/include


LIBS += -L$$PWD/../../../../../usr/include/libusb-1.0  -lusb-1.0
LIBS += -L$$PWD/../../../../../usr/include -lusb


