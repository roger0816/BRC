/********************************************************************************
** Form generated from reading UI file 'ItemBarcode.ui'
**
** Created: Wed Dec 2 07:13:57 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMBARCODE_H
#define UI_ITEMBARCODE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "Vinput.h"

QT_BEGIN_NAMESPACE

class Ui_ItemBarcode
{
public:
    QGridLayout *gridLayout;
    QWidget *w0;
    QGridLayout *gridLayout_4;
    QWidget *w0_0;
    QGridLayout *gridLayout_6;
    QPushButton *btn0;
    QWidget *w0_1;
    QGridLayout *gridLayout_3;
    QLabel *lbTitle0;
    Vinput *lb0;
    QWidget *w0_2;
    QGridLayout *gridLayout_8;
    QLabel *lbTitle1;
    Vinput *lb1;
    QWidget *w0_3;
    QGridLayout *gridLayout_2;
    QLabel *lbTitle2;

    void setupUi(QWidget *ItemBarcode)
    {
        if (ItemBarcode->objectName().isEmpty())
            ItemBarcode->setObjectName(QString::fromUtf8("ItemBarcode"));
        ItemBarcode->resize(690, 160);
        ItemBarcode->setMinimumSize(QSize(0, 0));
        ItemBarcode->setMaximumSize(QSize(16777215, 10000));
        gridLayout = new QGridLayout(ItemBarcode);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        w0 = new QWidget(ItemBarcode);
        w0->setObjectName(QString::fromUtf8("w0"));
        w0->setMinimumSize(QSize(121, 0));
        w0->setMaximumSize(QSize(16777215, 100000));
        w0->setStyleSheet(QString::fromUtf8("QWidget#w0{ border: 2px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}"));
        gridLayout_4 = new QGridLayout(w0);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 20, 0);
        w0_0 = new QWidget(w0);
        w0_0->setObjectName(QString::fromUtf8("w0_0"));
        w0_0->setMinimumSize(QSize(60, 0));
        w0_0->setMaximumSize(QSize(10000, 16777215));
        gridLayout_6 = new QGridLayout(w0_0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(5, 5, 5, 5);
        btn0 = new QPushButton(w0_0);
        btn0->setObjectName(QString::fromUtf8("btn0"));
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
        btn0->setStyleSheet(QString::fromUtf8(""));
        btn0->setCheckable(false);

        gridLayout_6->addWidget(btn0, 0, 0, 1, 1);


        gridLayout_4->addWidget(w0_0, 0, 0, 2, 1);

        w0_1 = new QWidget(w0);
        w0_1->setObjectName(QString::fromUtf8("w0_1"));
        w0_1->setMinimumSize(QSize(119, 0));
        w0_1->setStyleSheet(QString::fromUtf8("QWidget#w0_1{    border: 1px solid gray;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}"));
        gridLayout_3 = new QGridLayout(w0_1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(2, 2, 2, 2);
        lbTitle0 = new QLabel(w0_1);
        lbTitle0->setObjectName(QString::fromUtf8("lbTitle0"));
        lbTitle0->setMinimumSize(QSize(60, 0));
        lbTitle0->setMaximumSize(QSize(60, 16777215));
        lbTitle0->setFont(font);

        gridLayout_3->addWidget(lbTitle0, 0, 0, 1, 1);

        lb0 = new Vinput(w0_1);
        lb0->setObjectName(QString::fromUtf8("lb0"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lb0->sizePolicy().hasHeightForWidth());
        lb0->setSizePolicy(sizePolicy1);
        lb0->setMinimumSize(QSize(30, 0));
        lb0->setFont(font);

        gridLayout_3->addWidget(lb0, 0, 1, 1, 1);


        gridLayout_4->addWidget(w0_1, 0, 1, 1, 1);

        w0_2 = new QWidget(w0);
        w0_2->setObjectName(QString::fromUtf8("w0_2"));
        w0_2->setMinimumSize(QSize(119, 0));
        w0_2->setStyleSheet(QString::fromUtf8("QWidget#w0_2{border: 1px solid gray;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}"));
        gridLayout_8 = new QGridLayout(w0_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(2, 2, 2, 2);
        lbTitle1 = new QLabel(w0_2);
        lbTitle1->setObjectName(QString::fromUtf8("lbTitle1"));
        lbTitle1->setMinimumSize(QSize(60, 0));
        lbTitle1->setMaximumSize(QSize(60, 16777215));
        lbTitle1->setFont(font);

        gridLayout_8->addWidget(lbTitle1, 0, 0, 1, 1);

        lb1 = new Vinput(w0_2);
        lb1->setObjectName(QString::fromUtf8("lb1"));
        sizePolicy.setHeightForWidth(lb1->sizePolicy().hasHeightForWidth());
        lb1->setSizePolicy(sizePolicy);
        lb1->setFont(font);

        gridLayout_8->addWidget(lb1, 0, 1, 1, 1);


        gridLayout_4->addWidget(w0_2, 1, 1, 1, 1);

        w0_3 = new QWidget(w0);
        w0_3->setObjectName(QString::fromUtf8("w0_3"));
        w0_3->setMinimumSize(QSize(0, 0));
        w0_3->setMaximumSize(QSize(10000, 16777215));
        gridLayout_2 = new QGridLayout(w0_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lbTitle2 = new QLabel(w0_3);
        lbTitle2->setObjectName(QString::fromUtf8("lbTitle2"));
        lbTitle2->setMinimumSize(QSize(0, 0));
        lbTitle2->setMaximumSize(QSize(10000, 16777215));
        QFont font1;
        font1.setPointSize(16);
        lbTitle2->setFont(font1);
        lbTitle2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lbTitle2, 0, 0, 1, 1);


        gridLayout_4->addWidget(w0_3, 0, 2, 2, 1);

        gridLayout_4->setRowStretch(0, 2);
        gridLayout_4->setRowStretch(1, 3);
        gridLayout_4->setColumnStretch(0, 2);
        gridLayout_4->setColumnStretch(1, 5);
        gridLayout_4->setColumnStretch(2, 1);

        gridLayout->addWidget(w0, 0, 0, 1, 1);


        retranslateUi(ItemBarcode);

        QMetaObject::connectSlotsByName(ItemBarcode);
    } // setupUi

    void retranslateUi(QWidget *ItemBarcode)
    {
        ItemBarcode->setWindowTitle(QApplication::translate("ItemBarcode", "Form", 0, QApplication::UnicodeUTF8));
        btn0->setText(QApplication::translate("ItemBarcode", "\346\242\235\347\242\274\346\251\237", 0, QApplication::UnicodeUTF8));
        lbTitle0->setText(QApplication::translate("ItemBarcode", "\345\223\241\345\267\245\347\267\250\350\231\237:", 0, QApplication::UnicodeUTF8));
        lbTitle1->setText(QApplication::translate("ItemBarcode", "\347\245\250\350\231\237:", 0, QApplication::UnicodeUTF8));
        lbTitle2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ItemBarcode: public Ui_ItemBarcode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMBARCODE_H
