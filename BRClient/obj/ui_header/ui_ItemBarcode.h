/********************************************************************************
** Form generated from reading UI file 'ItemBarcode.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMBARCODE_H
#define UI_ITEMBARCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "Vinput.h"

QT_BEGIN_NAMESPACE

class Ui_ItemBarcode
{
public:
    QGridLayout *gridLayout;
    QWidget *w0;
    QGridLayout *gridLayout_2;
    QWidget *w0_0;
    QGridLayout *gridLayout_6;
    QPushButton *btn0;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QWidget *w0_1;
    QGridLayout *gridLayout_3;
    QLabel *lbTitle0;
    Vinput *lb0;
    QWidget *w0_2;
    QGridLayout *gridLayout_8;
    QLabel *lbTitle1;
    Vinput *lb1;
    QWidget *w0_3;
    QGridLayout *gridLayout_9;
    QLabel *lb2;

    void setupUi(QWidget *ItemBarcode)
    {
        if (ItemBarcode->objectName().isEmpty())
            ItemBarcode->setObjectName(QStringLiteral("ItemBarcode"));
        ItemBarcode->resize(690, 160);
        ItemBarcode->setMinimumSize(QSize(0, 0));
        ItemBarcode->setMaximumSize(QSize(16777215, 10000));
        gridLayout = new QGridLayout(ItemBarcode);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        w0 = new QWidget(ItemBarcode);
        w0->setObjectName(QStringLiteral("w0"));
        w0->setMinimumSize(QSize(121, 0));
        w0->setMaximumSize(QSize(16777215, 100000));
        w0->setStyleSheet(QLatin1String("QWidget#w0{ border: 2px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}"));
        gridLayout_2 = new QGridLayout(w0);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        w0_0 = new QWidget(w0);
        w0_0->setObjectName(QStringLiteral("w0_0"));
        w0_0->setMinimumSize(QSize(60, 0));
        w0_0->setMaximumSize(QSize(10000, 16777215));
        gridLayout_6 = new QGridLayout(w0_0);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        btn0 = new QPushButton(w0_0);
        btn0->setObjectName(QStringLiteral("btn0"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);
        btn0->setMinimumSize(QSize(0, 0));
        btn0->setMaximumSize(QSize(100000, 16777215));
        QFont font;
        font.setPointSize(12);
        btn0->setFont(font);
        btn0->setStyleSheet(QStringLiteral(""));
        btn0->setCheckable(false);

        gridLayout_6->addWidget(btn0, 0, 0, 1, 1);


        gridLayout_2->addWidget(w0_0, 0, 0, 1, 1);

        widget = new QWidget(w0);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        w0_1 = new QWidget(widget);
        w0_1->setObjectName(QStringLiteral("w0_1"));
        w0_1->setMinimumSize(QSize(119, 0));
        w0_1->setStyleSheet(QLatin1String("QWidget#w0_1{    border: 1px solid gray;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}"));
        gridLayout_3 = new QGridLayout(w0_1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(2, 2, 2, 2);
        lbTitle0 = new QLabel(w0_1);
        lbTitle0->setObjectName(QStringLiteral("lbTitle0"));
        lbTitle0->setMinimumSize(QSize(60, 0));
        lbTitle0->setMaximumSize(QSize(60, 16777215));
        lbTitle0->setFont(font);

        gridLayout_3->addWidget(lbTitle0, 0, 0, 1, 1);

        lb0 = new Vinput(w0_1);
        lb0->setObjectName(QStringLiteral("lb0"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lb0->sizePolicy().hasHeightForWidth());
        lb0->setSizePolicy(sizePolicy1);
        lb0->setMinimumSize(QSize(30, 0));
        lb0->setFont(font);

        gridLayout_3->addWidget(lb0, 0, 1, 1, 1);


        gridLayout_4->addWidget(w0_1, 0, 0, 1, 1);

        w0_2 = new QWidget(widget);
        w0_2->setObjectName(QStringLiteral("w0_2"));
        w0_2->setMinimumSize(QSize(119, 0));
        w0_2->setStyleSheet(QLatin1String("QWidget#w0_2{border: 1px solid gray;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}"));
        gridLayout_8 = new QGridLayout(w0_2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(2, 2, 2, 2);
        lbTitle1 = new QLabel(w0_2);
        lbTitle1->setObjectName(QStringLiteral("lbTitle1"));
        lbTitle1->setMinimumSize(QSize(60, 0));
        lbTitle1->setMaximumSize(QSize(60, 16777215));
        lbTitle1->setFont(font);

        gridLayout_8->addWidget(lbTitle1, 0, 0, 1, 1);

        lb1 = new Vinput(w0_2);
        lb1->setObjectName(QStringLiteral("lb1"));
        sizePolicy.setHeightForWidth(lb1->sizePolicy().hasHeightForWidth());
        lb1->setSizePolicy(sizePolicy);
        lb1->setFont(font);

        gridLayout_8->addWidget(lb1, 0, 1, 1, 1);


        gridLayout_4->addWidget(w0_2, 1, 0, 1, 1);

        w0_3 = new QWidget(widget);
        w0_3->setObjectName(QStringLiteral("w0_3"));
        w0_3->setMinimumSize(QSize(119, 0));
        w0_3->setStyleSheet(QLatin1String("QWidget#w0_3{border: 1px solid gray;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}"));
        gridLayout_9 = new QGridLayout(w0_3);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(2, 2, 2, 2);
        lb2 = new QLabel(w0_3);
        lb2->setObjectName(QStringLiteral("lb2"));

        gridLayout_9->addWidget(lb2, 0, 0, 1, 1);


        gridLayout_4->addWidget(w0_3, 2, 0, 1, 1);


        gridLayout_2->addWidget(widget, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 4);

        gridLayout->addWidget(w0, 0, 0, 1, 1);


        retranslateUi(ItemBarcode);

        QMetaObject::connectSlotsByName(ItemBarcode);
    } // setupUi

    void retranslateUi(QWidget *ItemBarcode)
    {
        ItemBarcode->setWindowTitle(QApplication::translate("ItemBarcode", "Form", 0));
        btn0->setText(QString());
        lbTitle0->setText(QApplication::translate("ItemBarcode", "\345\223\241\345\267\245\347\267\250\350\231\237:", 0));
        lbTitle1->setText(QApplication::translate("ItemBarcode", "\347\245\250\350\231\237:", 0));
        lb2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ItemBarcode: public Ui_ItemBarcode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMBARCODE_H
