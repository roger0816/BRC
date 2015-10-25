/********************************************************************************
** Form generated from reading UI file 'StageSetting.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGESETTING_H
#define UI_STAGESETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "ItemSetting.h"

QT_BEGIN_NAMESPACE

class Ui_StageSetting
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
    ItemSetting *vNetSetting3;
    ItemSetting *vNetSetting2;
    QWidget *wFreeSetting;
    QGridLayout *gridLayout_8;
    QWidget *w0;
    QGridLayout *gridLayout_4;
    QWidget *w0_0;
    QGridLayout *gridLayout_7;
    QPushButton *btn0_2;
    QWidget *w0_1;
    QGridLayout *gridLayout_11;
    QLineEdit *lineEdit;
    QLabel *lb0;
    QLineEdit *lineEdit_2;
    QLabel *lbTitle0;
    ItemSetting *vNetSetting1;
    QSpacerItem *verticalSpacer;
    ItemSetting *vNetSetting0;
    QWidget *page_2;
    QWidget *wSub;
    QGridLayout *gridLayout_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *StageSetting)
    {
        if (StageSetting->objectName().isEmpty())
            StageSetting->setObjectName(QStringLiteral("StageSetting"));
        StageSetting->resize(700, 1338);
        gridLayout = new QGridLayout(StageSetting);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        wBg = new QWidget(StageSetting);
        wBg->setObjectName(QStringLiteral("wBg"));
        wBg->setStyleSheet(QLatin1String("QWidget#wBg{background-color: rgb(255, 255, 255);}\n"
""));
        gridLayout_2 = new QGridLayout(wBg);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(wBg);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(4);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        wTitle = new QWidget(widget);
        wTitle->setObjectName(QStringLiteral("wTitle"));
        wTitle->setMinimumSize(QSize(0, 160));
        wTitle->setMaximumSize(QSize(16777215, 160));
        wTitle->setStyleSheet(QStringLiteral("background-color: rgb(102, 102, 102);"));
        gridLayout_5 = new QGridLayout(wTitle);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_3 = new QLabel(wTitle);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QStringLiteral("American Typewriter"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_3->addWidget(wTitle, 0, 0, 1, 1);

        wBody = new QWidget(widget);
        wBody->setObjectName(QStringLiteral("wBody"));
        gridLayout_10 = new QGridLayout(wBody);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(5, 5, 5, 5);
        stackedWidget = new QStackedWidget(wBody);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_23 = new QGridLayout(page);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        gridLayout_23->setVerticalSpacing(40);
        gridLayout_23->setContentsMargins(5, 5, 5, 0);
        vNetSetting3 = new ItemSetting(page);
        vNetSetting3->setObjectName(QStringLiteral("vNetSetting3"));
        vNetSetting3->setMinimumSize(QSize(0, 120));
        vNetSetting3->setMaximumSize(QSize(16777215, 400));

        gridLayout_23->addWidget(vNetSetting3, 9, 0, 1, 1);

        vNetSetting2 = new ItemSetting(page);
        vNetSetting2->setObjectName(QStringLiteral("vNetSetting2"));
        vNetSetting2->setMinimumSize(QSize(0, 120));
        vNetSetting2->setMaximumSize(QSize(16777215, 400));

        gridLayout_23->addWidget(vNetSetting2, 8, 0, 1, 1);

        wFreeSetting = new QWidget(page);
        wFreeSetting->setObjectName(QStringLiteral("wFreeSetting"));
        wFreeSetting->setMinimumSize(QSize(0, 120));
        gridLayout_8 = new QGridLayout(wFreeSetting);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        w0 = new QWidget(wFreeSetting);
        w0->setObjectName(QStringLiteral("w0"));
        w0->setMinimumSize(QSize(121, 40));
        w0->setMaximumSize(QSize(16777215, 200));
        w0->setStyleSheet(QLatin1String("QWidget#w0{ border: 2px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}"));
        gridLayout_4 = new QGridLayout(w0);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        w0_0 = new QWidget(w0);
        w0_0->setObjectName(QStringLiteral("w0_0"));
        w0_0->setMinimumSize(QSize(0, 0));
        w0_0->setMaximumSize(QSize(200, 16777215));
        gridLayout_7 = new QGridLayout(w0_0);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(5, 5, 5, 5);
        btn0_2 = new QPushButton(w0_0);
        btn0_2->setObjectName(QStringLiteral("btn0_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn0_2->sizePolicy().hasHeightForWidth());
        btn0_2->setSizePolicy(sizePolicy);
        btn0_2->setMinimumSize(QSize(160, 0));
        btn0_2->setMaximumSize(QSize(160, 16777215));
        btn0_2->setStyleSheet(QStringLiteral(""));
        btn0_2->setCheckable(true);

        gridLayout_7->addWidget(btn0_2, 0, 0, 1, 1);


        gridLayout_4->addWidget(w0_0, 0, 0, 2, 1);

        w0_1 = new QWidget(w0);
        w0_1->setObjectName(QStringLiteral("w0_1"));
        w0_1->setStyleSheet(QLatin1String("QWidget#w0_1{    border: 1px solid gray;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}"));
        gridLayout_11 = new QGridLayout(w0_1);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setHorizontalSpacing(0);
        gridLayout_11->setContentsMargins(-1, 20, -1, 20);
        lineEdit = new QLineEdit(w0_1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        gridLayout_11->addWidget(lineEdit, 0, 1, 1, 1);

        lb0 = new QLabel(w0_1);
        lb0->setObjectName(QStringLiteral("lb0"));
        lb0->setMinimumSize(QSize(40, 0));
        lb0->setMaximumSize(QSize(40, 16777215));

        gridLayout_11->addWidget(lb0, 0, 2, 1, 1);

        lineEdit_2 = new QLineEdit(w0_1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);

        gridLayout_11->addWidget(lineEdit_2, 0, 3, 1, 1);

        lbTitle0 = new QLabel(w0_1);
        lbTitle0->setObjectName(QStringLiteral("lbTitle0"));
        lbTitle0->setMinimumSize(QSize(40, 0));
        lbTitle0->setMaximumSize(QSize(40, 16777215));
        QFont font1;
        font1.setPointSize(14);
        lbTitle0->setFont(font1);

        gridLayout_11->addWidget(lbTitle0, 0, 0, 1, 1);


        gridLayout_4->addWidget(w0_1, 0, 1, 2, 1);


        gridLayout_8->addWidget(w0, 0, 0, 1, 1);


        gridLayout_23->addWidget(wFreeSetting, 5, 0, 1, 1);

        vNetSetting1 = new ItemSetting(page);
        vNetSetting1->setObjectName(QStringLiteral("vNetSetting1"));
        vNetSetting1->setMinimumSize(QSize(0, 120));
        vNetSetting1->setMaximumSize(QSize(16777215, 400));

        gridLayout_23->addWidget(vNetSetting1, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_23->addItem(verticalSpacer, 11, 0, 1, 1);

        vNetSetting0 = new ItemSetting(page);
        vNetSetting0->setObjectName(QStringLiteral("vNetSetting0"));
        vNetSetting0->setMinimumSize(QSize(121, 120));
        vNetSetting0->setMaximumSize(QSize(16777215, 400));

        gridLayout_23->addWidget(vNetSetting0, 6, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout_10->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(wBody, 2, 0, 1, 1);

        wSub = new QWidget(widget);
        wSub->setObjectName(QStringLiteral("wSub"));
        wSub->setMinimumSize(QSize(0, 90));
        wSub->setMaximumSize(QSize(16777215, 100));
        gridLayout_9 = new QGridLayout(wSub);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(wSub);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(16);
        pushButton->setFont(font2);

        gridLayout_9->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(wSub);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font2);

        gridLayout_9->addWidget(pushButton_2, 0, 0, 1, 1);


        gridLayout_3->addWidget(wSub, 1, 0, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        gridLayout->addWidget(wBg, 0, 0, 1, 1);


        retranslateUi(StageSetting);

        QMetaObject::connectSlotsByName(StageSetting);
    } // setupUi

    void retranslateUi(QWidget *StageSetting)
    {
        StageSetting->setWindowTitle(QApplication::translate("StageSetting", "Form", 0));
        label_3->setText(QApplication::translate("StageSetting", "\350\250\255\345\256\232\347\225\253\351\235\242", 0));
        btn0_2->setText(QApplication::translate("StageSetting", "\350\207\252\350\250\202", 0));
        lb0->setText(QApplication::translate("StageSetting", "PORT:", 0));
        lbTitle0->setText(QApplication::translate("StageSetting", "IP:", 0));
        pushButton->setText(QApplication::translate("StageSetting", "\345\205\266\345\256\203", 0));
        pushButton_2->setText(QApplication::translate("StageSetting", "\347\266\262\350\267\257", 0));
    } // retranslateUi

};

namespace Ui {
    class StageSetting: public Ui_StageSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGESETTING_H
