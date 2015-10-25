/********************************************************************************
** Form generated from reading UI file 'ItemSettingNetwork.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMSETTINGNETWORK_H
#define UI_ITEMSETTINGNETWORK_H

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

class Ui_ItemSettingNetwork
{
public:
    QGridLayout *gridLayout;
    QWidget *w0;
    QGridLayout *gridLayout_4;
    QWidget *w0_2;
    QGridLayout *gridLayout_8;
    QLabel *label_2;
    QLabel *lbPort;
    QWidget *w0_0;
    QGridLayout *gridLayout_6;
    QPushButton *btn0;
    QWidget *w0_1;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QLabel *lbIp;

    void setupUi(QWidget *ItemSettingNetwork)
    {
        if (ItemSettingNetwork->objectName().isEmpty())
            ItemSettingNetwork->setObjectName(QStringLiteral("ItemSettingNetwork"));
        ItemSettingNetwork->resize(400, 300);
        gridLayout = new QGridLayout(ItemSettingNetwork);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        w0 = new QWidget(ItemSettingNetwork);
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
        label_2 = new QLabel(w0_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setMaximumSize(QSize(100, 16777215));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);

        gridLayout_8->addWidget(label_2, 0, 0, 1, 1);

        lbPort = new QLabel(w0_2);
        lbPort->setObjectName(QStringLiteral("lbPort"));

        gridLayout_8->addWidget(lbPort, 0, 1, 1, 1);


        gridLayout_4->addWidget(w0_2, 1, 1, 1, 1);

        w0_0 = new QWidget(w0);
        w0_0->setObjectName(QStringLiteral("w0_0"));
        w0_0->setMinimumSize(QSize(0, 0));
        w0_0->setMaximumSize(QSize(200, 16777215));
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
        btn0->setMinimumSize(QSize(186, 0));
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
        label_4 = new QLabel(w0_1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setFont(font);

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);

        lbIp = new QLabel(w0_1);
        lbIp->setObjectName(QStringLiteral("lbIp"));

        gridLayout_7->addWidget(lbIp, 0, 1, 1, 1);


        gridLayout_4->addWidget(w0_1, 0, 1, 1, 1);


        gridLayout->addWidget(w0, 0, 0, 1, 1);


        retranslateUi(ItemSettingNetwork);

        QMetaObject::connectSlotsByName(ItemSettingNetwork);
    } // setupUi

    void retranslateUi(QWidget *ItemSettingNetwork)
    {
        ItemSettingNetwork->setWindowTitle(QApplication::translate("ItemSettingNetwork", "Form", 0));
        label_2->setText(QApplication::translate("ItemSettingNetwork", "PORT:", 0));
        lbPort->setText(QString());
        btn0->setText(QApplication::translate("ItemSettingNetwork", "\350\250\255\345\256\232", 0));
        label_4->setText(QApplication::translate("ItemSettingNetwork", "IP:", 0));
        lbIp->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ItemSettingNetwork: public Ui_ItemSettingNetwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMSETTINGNETWORK_H
