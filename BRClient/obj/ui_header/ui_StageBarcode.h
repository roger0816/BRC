/********************************************************************************
** Form generated from reading UI file 'StageBarcode.ui'
**
** Created: Wed Dec 2 07:13:57 2015
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
    QWidget *wTitle;
    QGridLayout *gridLayout_5;
    QPushButton *btnSub0;
    QLabel *label_3;
    QWidget *widget_2;
    QWidget *wBody;
    QGridLayout *gridLayout_10;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_23;
    QWidget *vBarcode3;
    QGridLayout *gridLayout_3;
    QLabel *label;
    ItemBarcode *vBarcode1;
    ItemBarcode *vBarcode0;
    ItemBarcode *vBarcode2;
    QSpacerItem *verticalSpacer;
    QLabel *lbVersion;
    QWidget *page_2;

    void setupUi(QWidget *StageBarcode)
    {
        if (StageBarcode->objectName().isEmpty())
            StageBarcode->setObjectName(QString::fromUtf8("StageBarcode"));
        StageBarcode->resize(800, 980);
        gridLayout = new QGridLayout(StageBarcode);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        wBg = new QWidget(StageBarcode);
        wBg->setObjectName(QString::fromUtf8("wBg"));
        wBg->setStyleSheet(QString::fromUtf8("QWidget#wBg{background-color: rgb(255, 255, 255);}\n"
""));
        gridLayout_2 = new QGridLayout(wBg);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        wTitle = new QWidget(wBg);
        wTitle->setObjectName(QString::fromUtf8("wTitle"));
        wTitle->setMinimumSize(QSize(0, 40));
        wTitle->setMaximumSize(QSize(16777215, 1000));
        wTitle->setStyleSheet(QString::fromUtf8("QWidget#wTitle{background-color: rgb(102, 102, 102);}"));
        gridLayout_5 = new QGridLayout(wTitle);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        btnSub0 = new QPushButton(wTitle);
        btnSub0->setObjectName(QString::fromUtf8("btnSub0"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnSub0->sizePolicy().hasHeightForWidth());
        btnSub0->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        btnSub0->setFont(font);

        gridLayout_5->addWidget(btnSub0, 0, 2, 1, 1);

        label_3 = new QLabel(wTitle);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("American Typewriter"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 0, 1, 1, 1);

        widget_2 = new QWidget(wTitle);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setFont(font);
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_5->addWidget(widget_2, 0, 0, 1, 1);

        gridLayout_5->setColumnStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 4);
        gridLayout_5->setColumnStretch(2, 1);

        gridLayout_2->addWidget(wTitle, 0, 0, 1, 1);

        wBody = new QWidget(wBg);
        wBody->setObjectName(QString::fromUtf8("wBody"));
        gridLayout_10 = new QGridLayout(wBody);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        stackedWidget = new QStackedWidget(wBody);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(16777215, 880));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_23 = new QGridLayout(page);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        gridLayout_23->setHorizontalSpacing(0);
        gridLayout_23->setVerticalSpacing(4);
        gridLayout_23->setContentsMargins(2, 8, 2, 10);
        vBarcode3 = new QWidget(page);
        vBarcode3->setObjectName(QString::fromUtf8("vBarcode3"));
        vBarcode3->setMinimumSize(QSize(0, 40));
        vBarcode3->setMaximumSize(QSize(16777215, 400));
        gridLayout_3 = new QGridLayout(vBarcode3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(vBarcode3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        gridLayout_23->addWidget(vBarcode3, 3, 0, 1, 1);

        vBarcode1 = new ItemBarcode(page);
        vBarcode1->setObjectName(QString::fromUtf8("vBarcode1"));
        vBarcode1->setMinimumSize(QSize(0, 40));
        vBarcode1->setMaximumSize(QSize(16777215, 400));

        gridLayout_23->addWidget(vBarcode1, 1, 0, 1, 1);

        vBarcode0 = new ItemBarcode(page);
        vBarcode0->setObjectName(QString::fromUtf8("vBarcode0"));
        vBarcode0->setMinimumSize(QSize(121, 40));
        vBarcode0->setMaximumSize(QSize(16777215, 400));

        gridLayout_23->addWidget(vBarcode0, 0, 0, 1, 1);

        vBarcode2 = new ItemBarcode(page);
        vBarcode2->setObjectName(QString::fromUtf8("vBarcode2"));
        vBarcode2->setMinimumSize(QSize(0, 40));
        vBarcode2->setMaximumSize(QSize(16777215, 400));

        gridLayout_23->addWidget(vBarcode2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_23->addItem(verticalSpacer, 4, 0, 1, 1);

        lbVersion = new QLabel(page);
        lbVersion->setObjectName(QString::fromUtf8("lbVersion"));

        gridLayout_23->addWidget(lbVersion, 5, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout_10->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(wBody, 1, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 5);

        gridLayout->addWidget(wBg, 0, 0, 1, 1);


        retranslateUi(StageBarcode);

        QMetaObject::connectSlotsByName(StageBarcode);
    } // setupUi

    void retranslateUi(QWidget *StageBarcode)
    {
        StageBarcode->setWindowTitle(QApplication::translate("StageBarcode", "Form", 0, QApplication::UnicodeUTF8));
        btnSub0->setText(QApplication::translate("StageBarcode", "\350\250\255\345\256\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("StageBarcode", "Barcode reader", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        lbVersion->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StageBarcode: public Ui_StageBarcode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGEBARCODE_H
