/********************************************************************************
** Form generated from reading UI file 'StageBarcode.ui'
**
** Created: Thu Oct 22 00:13:31 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGEBARCODE_H
#define UI_STAGEBARCODE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>
#include "ItemBarcode.h"

QT_BEGIN_NAMESPACE

class Ui_StageBarcode
{
public:
    QGridLayout *gridLayout;
    QWidget *wBg;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QWidget *wTitle;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QWidget *wBody;
    QGridLayout *gridLayout_10;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_23;
    ItemBarcode *vBarcode3;
    ItemBarcode *vBarcode1;
    ItemBarcode *vBarcode0;
    ItemBarcode *vBarcode2;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QWidget *vKeyboard;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QWidget *wSub;
    QGridLayout *gridLayout_9;
    QPushButton *btnSub0;

    void setupUi(QWidget *StageBarcode)
    {
        if (StageBarcode->objectName().isEmpty())
            StageBarcode->setObjectName(QString::fromUtf8("StageBarcode"));
        StageBarcode->resize(642, 1280);
        gridLayout = new QGridLayout(StageBarcode);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        wBg = new QWidget(StageBarcode);
        wBg->setObjectName(QString::fromUtf8("wBg"));
        wBg->setStyleSheet(QString::fromUtf8("QWidget#wBg{background-color: rgb(255, 255, 255);}\n"
""));
        gridLayout_2 = new QGridLayout(wBg);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(wBg);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(4);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        wTitle = new QWidget(widget);
        wTitle->setObjectName(QString::fromUtf8("wTitle"));
        wTitle->setMinimumSize(QSize(0, 160));
        wTitle->setMaximumSize(QSize(16777215, 160));
        wTitle->setStyleSheet(QString::fromUtf8("background-color: rgb(102, 102, 102);"));
        gridLayout_5 = new QGridLayout(wTitle);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_3 = new QLabel(wTitle);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("American Typewriter"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_3->addWidget(wTitle, 0, 0, 1, 1);

        wBody = new QWidget(widget);
        wBody->setObjectName(QString::fromUtf8("wBody"));
        gridLayout_10 = new QGridLayout(wBody);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(5, 5, 5, 20);
        stackedWidget = new QStackedWidget(wBody);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(16777215, 880));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_23 = new QGridLayout(page);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        gridLayout_23->setContentsMargins(5, 5, 5, 5);
        vBarcode3 = new ItemBarcode(page);
        vBarcode3->setObjectName(QString::fromUtf8("vBarcode3"));
        vBarcode3->setMinimumSize(QSize(0, 200));
        vBarcode3->setMaximumSize(QSize(16777215, 400));

        gridLayout_23->addWidget(vBarcode3, 3, 0, 1, 1);

        vBarcode1 = new ItemBarcode(page);
        vBarcode1->setObjectName(QString::fromUtf8("vBarcode1"));
        vBarcode1->setMinimumSize(QSize(0, 200));
        vBarcode1->setMaximumSize(QSize(16777215, 400));

        gridLayout_23->addWidget(vBarcode1, 1, 0, 1, 1);

        vBarcode0 = new ItemBarcode(page);
        vBarcode0->setObjectName(QString::fromUtf8("vBarcode0"));
        vBarcode0->setMinimumSize(QSize(121, 200));
        vBarcode0->setMaximumSize(QSize(16777215, 400));

        gridLayout_23->addWidget(vBarcode0, 0, 0, 1, 1);

        vBarcode2 = new ItemBarcode(page);
        vBarcode2->setObjectName(QString::fromUtf8("vBarcode2"));
        vBarcode2->setMinimumSize(QSize(0, 200));
        vBarcode2->setMaximumSize(QSize(16777215, 400));

        gridLayout_23->addWidget(vBarcode2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_23->addItem(verticalSpacer, 4, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout_10->addWidget(stackedWidget, 0, 0, 1, 1);

        vKeyboard = new QWidget(wBody);
        vKeyboard->setObjectName(QString::fromUtf8("vKeyboard"));
        vKeyboard->setMinimumSize(QSize(200, 0));
        gridLayout_4 = new QGridLayout(vKeyboard);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(vKeyboard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);


        gridLayout_10->addWidget(vKeyboard, 1, 0, 1, 1);


        gridLayout_3->addWidget(wBody, 2, 0, 1, 1);

        wSub = new QWidget(widget);
        wSub->setObjectName(QString::fromUtf8("wSub"));
        wSub->setMinimumSize(QSize(0, 100));
        wSub->setMaximumSize(QSize(16777215, 100));
        gridLayout_9 = new QGridLayout(wSub);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        btnSub0 = new QPushButton(wSub);
        btnSub0->setObjectName(QString::fromUtf8("btnSub0"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnSub0->sizePolicy().hasHeightForWidth());
        btnSub0->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(16);
        btnSub0->setFont(font1);

        gridLayout_9->addWidget(btnSub0, 0, 0, 1, 1);


        gridLayout_3->addWidget(wSub, 1, 0, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        gridLayout->addWidget(wBg, 0, 0, 1, 1);


        retranslateUi(StageBarcode);

        QMetaObject::connectSlotsByName(StageBarcode);
    } // setupUi

    void retranslateUi(QWidget *StageBarcode)
    {
        StageBarcode->setWindowTitle(QApplication::translate("StageBarcode", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("StageBarcode", "Barcode reader", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("StageBarcode", "Keyboard", 0, QApplication::UnicodeUTF8));
        btnSub0->setText(QApplication::translate("StageBarcode", "\350\250\255\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StageBarcode: public Ui_StageBarcode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGEBARCODE_H
