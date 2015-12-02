/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Wed Dec 2 07:13:57 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>
#include "StageBarcode.h"
#include "StageSetting.h"
#include "StageTest.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    StageTest *vTest;
    StageSetting *vSetting;
    StageBarcode *vBarcode;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 400, 300));
        vTest = new StageTest();
        vTest->setObjectName(QString::fromUtf8("vTest"));
        stackedWidget->addWidget(vTest);
        vSetting = new StageSetting();
        vSetting->setObjectName(QString::fromUtf8("vSetting"));
        stackedWidget->addWidget(vSetting);
        vBarcode = new StageBarcode();
        vBarcode->setObjectName(QString::fromUtf8("vBarcode"));
        stackedWidget->addWidget(vBarcode);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
