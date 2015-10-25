/********************************************************************************
** Form generated from reading UI file 'StageTest.ui'
**
** Created: Thu Oct 22 00:13:31 2015
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
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StageTest
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QLineEdit *lineEdit;

    void setupUi(QWidget *StageTest)
    {
        if (StageTest->objectName().isEmpty())
            StageTest->setObjectName(QString::fromUtf8("StageTest"));
        StageTest->resize(426, 401);
        gridLayout = new QGridLayout(StageTest);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(StageTest);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#wBg{background-color: rgb(0, 0, 255);}"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 10, 131, 51));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(StageTest);

        QMetaObject::connectSlotsByName(StageTest);
    } // setupUi

    void retranslateUi(QWidget *StageTest)
    {
        StageTest->setWindowTitle(QApplication::translate("StageTest", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StageTest: public Ui_StageTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGETEST_H
