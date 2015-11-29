#-------------------------------------------------
#
# Project created by QtCreator 2015-10-25T16:19:34
#
#-------------------------------------------------

QT       += core gui network #multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BRClient
TEMPLATE = app

DESTDIR = $$PWD/../bin
RCC_DIR =$$PWD/../bin
OBJECTS_DIR = $$PWD/obj
MOC_DIR =$$PWD/obj
UI_DIR = $$PWD/obj/ui_header


TRANSLATIONS += $$PWD/translations/tw.ts \
                $$PWD/translations/en.ts \
                $$PWD/translations/cn.ts \


SOURCES += main.cpp\
        widget.cpp \
    StageSetting.cpp \
    StageBarcode.cpp \
    ItemBarcode.cpp \
    StageTest.cpp \
    CTcpClient.cpp \
    Global.cpp \
    Vinput.cpp \
    Vkeybord.cpp \
    ItemKey.cpp \
    CThread.cpp \
    ListenKeyEvent.cpp

HEADERS  += widget.h \
    StageSetting.h \
    StageBarcode.h \
    ItemBarcode.h \
    StageTest.h \
    CTcpClient.h \
    Global.h \
    Vinput.h \
    Vkeybord.h \
    ItemKey.h \
    CThread.h \
    ListenKeyEvent.h


FORMS    += widget.ui \
    StageSetting.ui \
    StageBarcode.ui \
    ItemBarcode.ui \
    StageTest.ui \
    Vinput.ui \
    Vkeybord.ui \
    ItemKey.ui

RESOURCES += \
    res.qrc



