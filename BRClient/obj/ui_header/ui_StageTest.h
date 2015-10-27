/********************************************************************************
** Form generated from reading UI file 'StageTest.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGETEST_H
#define UI_STAGETEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "Vkeybord.h"

QT_BEGIN_NAMESPACE

class Ui_StageTest
{
public:
    QGridLayout *gridLayout;
    Vkeybord *widget;

    void setupUi(QWidget *StageTest)
    {
        if (StageTest->objectName().isEmpty())
            StageTest->setObjectName(QStringLiteral("StageTest"));
        StageTest->resize(426, 401);
        gridLayout = new QGridLayout(StageTest);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new Vkeybord(StageTest);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(StageTest);

        QMetaObject::connectSlotsByName(StageTest);
    } // setupUi

    void retranslateUi(QWidget *StageTest)
    {
        StageTest->setWindowTitle(QApplication::translate("StageTest", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class StageTest: public Ui_StageTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGETEST_H
