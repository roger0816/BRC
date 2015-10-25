#-------------------------------------------------
#
# Project created by QtCreator 2015-10-25T16:19:34
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BRClient
TEMPLATE = app

DESTDIR = $$PWD/../bin
RCC_DIR =$$PWD/../bin
OBJECTS_DIR = $$PWD/obj
MOC_DIR =$$PWD/obj
UI_DIR = $$PWD/obj/ui_header

SOURCES += main.cpp\
        widget.cpp \
    StageSetting.cpp \
    StageBarcode.cpp \
    ItemSetting.cpp \
    ItemBarcode.cpp \
    StageTest.cpp \
    CTcpClient.cpp \
    Global.cpp

HEADERS  += widget.h \
    StageSetting.h \
    StageBarcode.h \
    ItemSetting.h \
    ItemBarcode.h \
    StageTest.h \
    CTcpClient.h \
    Global.h


FORMS    += widget.ui \
    StageSetting.ui \
    StageBarcode.ui \
    ItemSetting.ui \
    ItemBarcode.ui \
    StageTest.ui



