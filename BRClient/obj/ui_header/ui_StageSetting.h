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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Vinput.h"

QT_BEGIN_NAMESPACE

class Ui_StageSetting
{
public:
    QGridLayout *gridLayout;
    QWidget *wBg;
    QGridLayout *gridLayout_2;
    QWidget *wTitle;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QLabel *lbM;
    QWidget *wBody;
    QGridLayout *gridLayout_10;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_7;
    QWidget *wLanguage;
    QGridLayout *gridLayout_12;
    QLabel *lb0_2;
    QWidget *w2;
    QGridLayout *gridLayout_8;
    QPushButton *btnEn;
    QPushButton *btnTw;
    QPushButton *btnCn;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QPushButton *btnCancel;
    QPushButton *btnCheck;
    QSpacerItem *horizontalSpacer;
    QWidget *wNetwork;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QWidget *w0_1;
    QGridLayout *gridLayout_11;
    Vinput *txtIp;
    QLabel *lbTitle0;
    QLabel *lb0;
    Vinput *txtPort;
    QWidget *wUpdate;
    QGridLayout *gridLayout_6;
    QLabel *label_5;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *w0_3;
    QGridLayout *gridLayout_14;
    Vinput *txtUpdatePort;
    Vinput *txtUpdateIp;
    QLabel *lbTitle0_3;
    QLabel *lb0_4;
    QWidget *w0_4;
    QGridLayout *gridLayout_16;
    Vinput *txtUpdateUser;
    QLabel *lb0_5;
    QLabel *lbTitle0_4;
    Vinput *txtUpdatePass;
    QWidget *w0_5;
    QGridLayout *gridLayout_17;
    Vinput *txtUpdatePath;
    QLabel *label_4;
    QWidget *page_2;

    void setupUi(QWidget *StageSetting)
    {
        if (StageSetting->objectName().isEmpty())
            StageSetting->setObjectName(QStringLiteral("StageSetting"));
        StageSetting->resize(800, 540);
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
        wTitle = new QWidget(wBg);
        wTitle->setObjectName(QStringLiteral("wTitle"));
        wTitle->setMinimumSize(QSize(0, 40));
        wTitle->setMaximumSize(QSize(16777215, 1000));
        wTitle->setStyleSheet(QStringLiteral("background-color: rgb(102, 102, 102);"));
        gridLayout_5 = new QGridLayout(wTitle);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(4, 0, 0, 0);
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

        gridLayout_5->addWidget(label_3, 0, 1, 1, 1);

        lbM = new QLabel(wTitle);
        lbM->setObjectName(QStringLiteral("lbM"));
        lbM->setMinimumSize(QSize(60, 30));
        lbM->setMaximumSize(QSize(300, 16777215));
        lbM->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(lbM, 0, 0, 1, 1);


        gridLayout_2->addWidget(wTitle, 0, 0, 1, 1);

        wBody = new QWidget(wBg);
        wBody->setObjectName(QStringLiteral("wBody"));
        gridLayout_10 = new QGridLayout(wBody);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(wBody);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_7 = new QGridLayout(page);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(0);
        gridLayout_7->setVerticalSpacing(2);
        gridLayout_7->setContentsMargins(4, 4, 4, 4);
        wLanguage = new QWidget(page);
        wLanguage->setObjectName(QStringLiteral("wLanguage"));
        wLanguage->setMinimumSize(QSize(121, 40));
        wLanguage->setMaximumSize(QSize(16777215, 100000));
        QFont font1;
        font1.setPointSize(16);
        wLanguage->setFont(font1);
        wLanguage->setStyleSheet(QLatin1String("QWidget#wLanguage{ border: 2px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}\n"
"\n"
"QWidget#w2{    border: 1px solid gray;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}\n"
""));
        gridLayout_12 = new QGridLayout(wLanguage);
        gridLayout_12->setSpacing(0);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        lb0_2 = new QLabel(wLanguage);
        lb0_2->setObjectName(QStringLiteral("lb0_2"));
        lb0_2->setMinimumSize(QSize(0, 0));
        lb0_2->setMaximumSize(QSize(1000, 16777215));
        QFont font2;
        font2.setPointSize(12);
        lb0_2->setFont(font2);
        lb0_2->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(lb0_2, 0, 0, 1, 1);

        w2 = new QWidget(wLanguage);
        w2->setObjectName(QStringLiteral("w2"));
        w2->setMinimumSize(QSize(119, 0));
        gridLayout_8 = new QGridLayout(w2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(-1, 5, -1, 5);
        btnEn = new QPushButton(w2);
        btnEn->setObjectName(QStringLiteral("btnEn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnEn->sizePolicy().hasHeightForWidth());
        btnEn->setSizePolicy(sizePolicy);
        btnEn->setCheckable(true);
        btnEn->setFlat(true);

        gridLayout_8->addWidget(btnEn, 0, 0, 1, 1);

        btnTw = new QPushButton(w2);
        btnTw->setObjectName(QStringLiteral("btnTw"));
        sizePolicy.setHeightForWidth(btnTw->sizePolicy().hasHeightForWidth());
        btnTw->setSizePolicy(sizePolicy);
        btnTw->setCheckable(true);
        btnTw->setFlat(true);

        gridLayout_8->addWidget(btnTw, 0, 1, 1, 1);

        btnCn = new QPushButton(w2);
        btnCn->setObjectName(QStringLiteral("btnCn"));
        sizePolicy.setHeightForWidth(btnCn->sizePolicy().hasHeightForWidth());
        btnCn->setSizePolicy(sizePolicy);
        btnCn->setCheckable(true);
        btnCn->setFlat(true);

        gridLayout_8->addWidget(btnCn, 0, 2, 1, 1);


        gridLayout_12->addWidget(w2, 0, 1, 1, 1);

        gridLayout_12->setColumnStretch(0, 1);
        gridLayout_12->setColumnStretch(1, 4);

        gridLayout_7->addWidget(wLanguage, 2, 0, 1, 1);

        widget = new QWidget(page);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(40, 20));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(40);
        gridLayout_3->setContentsMargins(-1, 0, 40, 0);
        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        sizePolicy.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy);
        btnCancel->setMinimumSize(QSize(0, 0));
        btnCancel->setMaximumSize(QSize(1000, 16777215));

        gridLayout_3->addWidget(btnCancel, 0, 1, 1, 1);

        btnCheck = new QPushButton(widget);
        btnCheck->setObjectName(QStringLiteral("btnCheck"));
        sizePolicy.setHeightForWidth(btnCheck->sizePolicy().hasHeightForWidth());
        btnCheck->setSizePolicy(sizePolicy);
        btnCheck->setMinimumSize(QSize(0, 0));
        btnCheck->setMaximumSize(QSize(1000, 16777215));

        gridLayout_3->addWidget(btnCheck, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);

        gridLayout_7->addWidget(widget, 3, 0, 1, 1);

        wNetwork = new QWidget(page);
        wNetwork->setObjectName(QStringLiteral("wNetwork"));
        wNetwork->setMinimumSize(QSize(121, 40));
        wNetwork->setStyleSheet(QLatin1String("QWidget#wNetwork{ border: 2px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}\n"
"\n"
"QWidget#w0_1{    border: 1px solid gray;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}"));
        gridLayout_4 = new QGridLayout(wNetwork);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(wNetwork);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(1000, 16777215));
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        w0_1 = new QWidget(wNetwork);
        w0_1->setObjectName(QStringLiteral("w0_1"));
        w0_1->setMinimumSize(QSize(119, 40));
        w0_1->setFont(font1);
        w0_1->setStyleSheet(QStringLiteral(""));
        gridLayout_11 = new QGridLayout(w0_1);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setHorizontalSpacing(5);
        gridLayout_11->setContentsMargins(5, 5, 5, 5);
        txtIp = new Vinput(w0_1);
        txtIp->setObjectName(QStringLiteral("txtIp"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txtIp->sizePolicy().hasHeightForWidth());
        txtIp->setSizePolicy(sizePolicy1);
        txtIp->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_11->addWidget(txtIp, 0, 1, 1, 1);

        lbTitle0 = new QLabel(w0_1);
        lbTitle0->setObjectName(QStringLiteral("lbTitle0"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lbTitle0->sizePolicy().hasHeightForWidth());
        lbTitle0->setSizePolicy(sizePolicy2);
        lbTitle0->setMinimumSize(QSize(20, 0));
        lbTitle0->setMaximumSize(QSize(40, 16777215));
        QFont font3;
        font3.setPointSize(14);
        lbTitle0->setFont(font3);

        gridLayout_11->addWidget(lbTitle0, 0, 0, 1, 1);

        lb0 = new QLabel(w0_1);
        lb0->setObjectName(QStringLiteral("lb0"));
        sizePolicy2.setHeightForWidth(lb0->sizePolicy().hasHeightForWidth());
        lb0->setSizePolicy(sizePolicy2);
        lb0->setMinimumSize(QSize(20, 0));
        lb0->setMaximumSize(QSize(40, 16777215));

        gridLayout_11->addWidget(lb0, 0, 2, 1, 1);

        txtPort = new Vinput(w0_1);
        txtPort->setObjectName(QStringLiteral("txtPort"));
        sizePolicy1.setHeightForWidth(txtPort->sizePolicy().hasHeightForWidth());
        txtPort->setSizePolicy(sizePolicy1);
        txtPort->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_11->addWidget(txtPort, 0, 3, 1, 1);

        gridLayout_11->setColumnStretch(0, 1);
        gridLayout_11->setColumnStretch(1, 5);
        gridLayout_11->setColumnStretch(2, 2);
        gridLayout_11->setColumnStretch(3, 3);

        gridLayout_4->addWidget(w0_1, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 5);

        gridLayout_7->addWidget(wNetwork, 0, 0, 1, 1);

        wUpdate = new QWidget(page);
        wUpdate->setObjectName(QStringLiteral("wUpdate"));
        wUpdate->setMinimumSize(QSize(121, 40));
        wUpdate->setStyleSheet(QLatin1String("QWidget#wUpdate{ border: 2px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}\n"
"\n"
"QWidget#w0_3{    border: 1px solid gray;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}\n"
"\n"
"QWidget#w0_4{    border: 1px solid gray;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}\n"
"\n"
"QWidget#w0_5{    border: 1px solid gray;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;}"));
        gridLayout_6 = new QGridLayout(wUpdate);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(wUpdate);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(1000, 16777215));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1);

        widget_2 = new QWidget(wUpdate);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        w0_3 = new QWidget(widget_2);
        w0_3->setObjectName(QStringLiteral("w0_3"));
        w0_3->setMinimumSize(QSize(119, 10));
        w0_3->setFont(font1);
        w0_3->setStyleSheet(QStringLiteral(""));
        gridLayout_14 = new QGridLayout(w0_3);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setHorizontalSpacing(6);
        gridLayout_14->setContentsMargins(6, 6, 6, 6);
        txtUpdatePort = new Vinput(w0_3);
        txtUpdatePort->setObjectName(QStringLiteral("txtUpdatePort"));
        sizePolicy1.setHeightForWidth(txtUpdatePort->sizePolicy().hasHeightForWidth());
        txtUpdatePort->setSizePolicy(sizePolicy1);
        txtUpdatePort->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_14->addWidget(txtUpdatePort, 0, 3, 1, 1);

        txtUpdateIp = new Vinput(w0_3);
        txtUpdateIp->setObjectName(QStringLiteral("txtUpdateIp"));
        sizePolicy1.setHeightForWidth(txtUpdateIp->sizePolicy().hasHeightForWidth());
        txtUpdateIp->setSizePolicy(sizePolicy1);
        txtUpdateIp->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_14->addWidget(txtUpdateIp, 0, 1, 1, 1);

        lbTitle0_3 = new QLabel(w0_3);
        lbTitle0_3->setObjectName(QStringLiteral("lbTitle0_3"));
        sizePolicy2.setHeightForWidth(lbTitle0_3->sizePolicy().hasHeightForWidth());
        lbTitle0_3->setSizePolicy(sizePolicy2);
        lbTitle0_3->setMinimumSize(QSize(20, 0));
        lbTitle0_3->setMaximumSize(QSize(40, 16777215));
        lbTitle0_3->setFont(font3);

        gridLayout_14->addWidget(lbTitle0_3, 0, 0, 1, 1);

        lb0_4 = new QLabel(w0_3);
        lb0_4->setObjectName(QStringLiteral("lb0_4"));
        sizePolicy2.setHeightForWidth(lb0_4->sizePolicy().hasHeightForWidth());
        lb0_4->setSizePolicy(sizePolicy2);
        lb0_4->setMinimumSize(QSize(20, 0));
        lb0_4->setMaximumSize(QSize(40, 16777215));

        gridLayout_14->addWidget(lb0_4, 0, 2, 1, 1);

        gridLayout_14->setColumnStretch(0, 1);
        gridLayout_14->setColumnStretch(1, 5);
        gridLayout_14->setColumnStretch(2, 2);
        gridLayout_14->setColumnStretch(3, 3);

        verticalLayout->addWidget(w0_3);

        w0_4 = new QWidget(widget_2);
        w0_4->setObjectName(QStringLiteral("w0_4"));
        w0_4->setMinimumSize(QSize(119, 10));
        w0_4->setFont(font1);
        w0_4->setStyleSheet(QStringLiteral(""));
        gridLayout_16 = new QGridLayout(w0_4);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setHorizontalSpacing(2);
        gridLayout_16->setContentsMargins(6, 6, 6, 6);
        txtUpdateUser = new Vinput(w0_4);
        txtUpdateUser->setObjectName(QStringLiteral("txtUpdateUser"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(txtUpdateUser->sizePolicy().hasHeightForWidth());
        txtUpdateUser->setSizePolicy(sizePolicy3);
        txtUpdateUser->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_16->addWidget(txtUpdateUser, 0, 1, 1, 1);

        lb0_5 = new QLabel(w0_4);
        lb0_5->setObjectName(QStringLiteral("lb0_5"));
        sizePolicy3.setHeightForWidth(lb0_5->sizePolicy().hasHeightForWidth());
        lb0_5->setSizePolicy(sizePolicy3);
        lb0_5->setMinimumSize(QSize(20, 0));
        lb0_5->setMaximumSize(QSize(1000, 16777215));
        QFont font4;
        font4.setPointSize(10);
        lb0_5->setFont(font4);
        lb0_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(lb0_5, 0, 2, 1, 1);

        lbTitle0_4 = new QLabel(w0_4);
        lbTitle0_4->setObjectName(QStringLiteral("lbTitle0_4"));
        sizePolicy3.setHeightForWidth(lbTitle0_4->sizePolicy().hasHeightForWidth());
        lbTitle0_4->setSizePolicy(sizePolicy3);
        lbTitle0_4->setMinimumSize(QSize(20, 0));
        lbTitle0_4->setMaximumSize(QSize(40, 16777215));
        lbTitle0_4->setFont(font4);

        gridLayout_16->addWidget(lbTitle0_4, 0, 0, 1, 1);

        txtUpdatePass = new Vinput(w0_4);
        txtUpdatePass->setObjectName(QStringLiteral("txtUpdatePass"));
        sizePolicy3.setHeightForWidth(txtUpdatePass->sizePolicy().hasHeightForWidth());
        txtUpdatePass->setSizePolicy(sizePolicy3);
        txtUpdatePass->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_16->addWidget(txtUpdatePass, 0, 3, 1, 1);

        gridLayout_16->setColumnStretch(0, 2);
        gridLayout_16->setColumnStretch(1, 5);
        gridLayout_16->setColumnStretch(2, 2);
        gridLayout_16->setColumnStretch(3, 5);

        verticalLayout->addWidget(w0_4);

        w0_5 = new QWidget(widget_2);
        w0_5->setObjectName(QStringLiteral("w0_5"));
        w0_5->setMinimumSize(QSize(119, 10));
        w0_5->setFont(font1);
        w0_5->setStyleSheet(QStringLiteral(""));
        gridLayout_17 = new QGridLayout(w0_5);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setHorizontalSpacing(2);
        gridLayout_17->setContentsMargins(6, 6, 6, 6);
        txtUpdatePath = new Vinput(w0_5);
        txtUpdatePath->setObjectName(QStringLiteral("txtUpdatePath"));
        sizePolicy.setHeightForWidth(txtUpdatePath->sizePolicy().hasHeightForWidth());
        txtUpdatePath->setSizePolicy(sizePolicy);
        txtUpdatePath->setMinimumSize(QSize(20, 0));
        txtUpdatePath->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_17->addWidget(txtUpdatePath, 0, 1, 1, 1);

        label_4 = new QLabel(w0_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMinimumSize(QSize(40, 0));
        label_4->setFont(font4);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_17->addWidget(label_4, 0, 0, 1, 1);

        gridLayout_17->setColumnStretch(0, 1);

        verticalLayout->addWidget(w0_5);


        gridLayout_6->addWidget(widget_2, 0, 1, 1, 1);

        gridLayout_6->setColumnStretch(0, 1);
        gridLayout_6->setColumnStretch(1, 5);

        gridLayout_7->addWidget(wUpdate, 1, 0, 1, 1);

        gridLayout_7->setRowStretch(0, 1);
        gridLayout_7->setRowStretch(1, 4);
        gridLayout_7->setRowStretch(2, 1);
        gridLayout_7->setRowStretch(3, 1);
        stackedWidget->addWidget(page);
        widget->raise();
        wNetwork->raise();
        wLanguage->raise();
        wUpdate->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout_10->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(wBody, 1, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 5);

        gridLayout->addWidget(wBg, 0, 0, 1, 1);


        retranslateUi(StageSetting);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StageSetting);
    } // setupUi

    void retranslateUi(QWidget *StageSetting)
    {
        StageSetting->setWindowTitle(QApplication::translate("StageSetting", "Form", 0));
        label_3->setText(QApplication::translate("StageSetting", "\350\250\255\345\256\232\347\225\253\351\235\242", 0));
        lbM->setText(QString());
        lb0_2->setText(QApplication::translate("StageSetting", "\350\252\236\347\263\273", 0));
        btnEn->setText(QApplication::translate("StageSetting", "English", 0));
        btnTw->setText(QApplication::translate("StageSetting", "\347\271\201\351\253\224\344\270\255\346\226\207", 0));
        btnCn->setText(QApplication::translate("StageSetting", "\347\256\200\344\275\223\344\270\255\346\226\207", 0));
        btnCancel->setText(QApplication::translate("StageSetting", "\345\217\226\346\266\210", 0));
        btnCheck->setText(QApplication::translate("StageSetting", "\347\242\272\345\256\232", 0));
        label->setText(QApplication::translate("StageSetting", "\351\200\243\347\267\232", 0));
        lbTitle0->setText(QApplication::translate("StageSetting", "IP:", 0));
        lb0->setText(QApplication::translate("StageSetting", "PORT:", 0));
        label_5->setText(QApplication::translate("StageSetting", "\346\233\264\346\226\260", 0));
        lbTitle0_3->setText(QApplication::translate("StageSetting", "IP:", 0));
        lb0_4->setText(QApplication::translate("StageSetting", "PORT:", 0));
        lb0_5->setText(QApplication::translate("StageSetting", "PW:", 0));
        lbTitle0_4->setText(QApplication::translate("StageSetting", "USER:", 0));
        label_4->setText(QApplication::translate("StageSetting", "path:/", 0));
    } // retranslateUi

};

namespace Ui {
    class StageSetting: public Ui_StageSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGESETTING_H
