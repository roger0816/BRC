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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "Vkeybord.h"

QT_BEGIN_NAMESPACE

class Ui_StageTest
{
public:
    QGridLayout *gridLayout;
    Vkeybord *widget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

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
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 160, 113, 32));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 230, 113, 32));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 310, 113, 32));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(StageTest);

        QMetaObject::connectSlotsByName(StageTest);
    } // setupUi

    void retranslateUi(QWidget *StageTest)
    {
        StageTest->setWindowTitle(QApplication::translate("StageTest", "Form", 0));
        pushButton->setText(QApplication::translate("StageTest", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("StageTest", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("StageTest", "send socket", 0));
    } // retranslateUi

};

namespace Ui {
    class StageTest: public Ui_StageTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGETEST_H
