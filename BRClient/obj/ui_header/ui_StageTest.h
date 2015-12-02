/********************************************************************************
** Form generated from reading UI file 'StageTest.ui'
**
** Created: Wed Dec 2 07:13:57 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGETEST_H
#define UI_STAGETEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
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
            StageTest->setObjectName(QString::fromUtf8("StageTest"));
        StageTest->resize(426, 401);
        gridLayout = new QGridLayout(StageTest);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new Vkeybord(StageTest);
        widget->setObjectName(QString::fromUtf8("widget"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 160, 113, 32));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 230, 113, 32));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 310, 113, 32));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(StageTest);

        QMetaObject::connectSlotsByName(StageTest);
    } // setupUi

    void retranslateUi(QWidget *StageTest)
    {
        StageTest->setWindowTitle(QApplication::translate("StageTest", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("StageTest", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("StageTest", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("StageTest", "send socket", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StageTest: public Ui_StageTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGETEST_H
