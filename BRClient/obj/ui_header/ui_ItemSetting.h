/********************************************************************************
** Form generated from reading UI file 'ItemSetting.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMSETTING_H
#define UI_ITEMSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemSetting
{
public:
    QGridLayout *gridLayout;
    QWidget *w0;
    QGridLayout *gridLayout_4;
    QWidget *w0_2;
    QGridLayout *gridLayout_8;
    QLabel *lbTitle1;
    QLabel *lb1;
    QWidget *w0_0;
    QGridLayout *gridLayout_6;
    QPushButton *btn0;
    QWidget *w0_1;
    QGridLayout *gridLayout_7;
    QLabel *lbTitle0;
    QLabel *lb0;

    void setupUi(QWidget *ItemSetting)
    {
        if (ItemSetting->objectName().isEmpty())
            ItemSetting->setObjectName(QStringLiteral("ItemSetting"));
        ItemSetting->resize(400, 300);
        gridLayout = new QGridLayout(ItemSetting);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        w0 = new QWidget(ItemSetting);
        w0->setObjectName(QStringLiteral("w0"));
        w0->setMinimumSize(QSize(121, 40));
        w0->setMaximumSize(QSize(16777215, 400));
        w0->setStyleSheet(QLatin1String("QWidget#w0{ border: 2px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}"));
        gridLayout_4 = new QGridLayout(w0);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        w0_2 = new QWidget(w0);
        w0_2->setObjectName(QStringLiteral("w0_2"));
        w0_2->setStyleSheet(QLatin1String("QWidget#w0_2{border: 1px solid gray;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}"));
        gridLayout_8 = new QGridLayout(w0_2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        lbTitle1 = new QLabel(w0_2);
        lbTitle1->setObjectName(QStringLiteral("lbTitle1"));
        lbTitle1->setMinimumSize(QSize(100, 0));
        lbTitle1->setMaximumSize(QSize(100, 16777215));
        QFont font;
        font.setPointSize(14);
        lbTitle1->setFont(font);

        gridLayout_8->addWidget(lbTitle1, 0, 0, 1, 1);

        lb1 = new QLabel(w0_2);
        lb1->setObjectName(QStringLiteral("lb1"));

        gridLayout_8->addWidget(lb1, 0, 1, 1, 1);


        gridLayout_4->addWidget(w0_2, 1, 1, 1, 1);

        w0_0 = new QWidget(w0);
        w0_0->setObjectName(QStringLiteral("w0_0"));
        w0_0->setMinimumSize(QSize(0, 0));
        w0_0->setMaximumSize(QSize(160, 16777215));
        gridLayout_6 = new QGridLayout(w0_0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(5, 5, 5, 5);
        btn0 = new QPushButton(w0_0);
        btn0->setObjectName(QStringLiteral("btn0"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);
        btn0->setMinimumSize(QSize(140, 0));
        btn0->setMaximumSize(QSize(300, 16777215));
        btn0->setStyleSheet(QStringLiteral(""));
        btn0->setCheckable(true);

        gridLayout_6->addWidget(btn0, 0, 0, 1, 1);


        gridLayout_4->addWidget(w0_0, 0, 0, 2, 1);

        w0_1 = new QWidget(w0);
        w0_1->setObjectName(QStringLiteral("w0_1"));
        w0_1->setStyleSheet(QLatin1String("QWidget#w0_1{    border: 1px solid gray;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}"));
        gridLayout_7 = new QGridLayout(w0_1);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        lbTitle0 = new QLabel(w0_1);
        lbTitle0->setObjectName(QStringLiteral("lbTitle0"));
        lbTitle0->setMinimumSize(QSize(100, 0));
        lbTitle0->setMaximumSize(QSize(100, 16777215));
        lbTitle0->setFont(font);

        gridLayout_7->addWidget(lbTitle0, 0, 0, 1, 1);

        lb0 = new QLabel(w0_1);
        lb0->setObjectName(QStringLiteral("lb0"));

        gridLayout_7->addWidget(lb0, 0, 1, 1, 1);


        gridLayout_4->addWidget(w0_1, 0, 1, 1, 1);


        gridLayout->addWidget(w0, 0, 0, 1, 1);


        retranslateUi(ItemSetting);

        QMetaObject::connectSlotsByName(ItemSetting);
    } // setupUi

    void retranslateUi(QWidget *ItemSetting)
    {
        ItemSetting->setWindowTitle(QApplication::translate("ItemSetting", "Form", 0));
        lbTitle1->setText(QApplication::translate("ItemSetting", "PORT:", 0));
        lb1->setText(QString());
        btn0->setText(QApplication::translate("ItemSetting", "\350\250\255\345\256\232", 0));
        lbTitle0->setText(QApplication::translate("ItemSetting", "IP:", 0));
        lb0->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ItemSetting: public Ui_ItemSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMSETTING_H
