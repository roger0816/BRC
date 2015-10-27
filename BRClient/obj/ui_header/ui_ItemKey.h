/********************************************************************************
** Form generated from reading UI file 'ItemKey.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMKEY_H
#define UI_ITEMKEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemKey
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;

    void setupUi(QWidget *ItemKey)
    {
        if (ItemKey->objectName().isEmpty())
            ItemKey->setObjectName(QStringLiteral("ItemKey"));
        ItemKey->resize(197, 186);
        gridLayout = new QGridLayout(ItemKey);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(ItemKey);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        retranslateUi(ItemKey);

        QMetaObject::connectSlotsByName(ItemKey);
    } // setupUi

    void retranslateUi(QWidget *ItemKey)
    {
        ItemKey->setWindowTitle(QApplication::translate("ItemKey", "Form", 0));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ItemKey: public Ui_ItemKey {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMKEY_H
