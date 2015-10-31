/********************************************************************************
** Form generated from reading UI file 'Vinput.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VINPUT_H
#define UI_VINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vinput
{
public:
    QGridLayout *gridLayout;
    QWidget *wBg;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QWidget *Vinput)
    {
        if (Vinput->objectName().isEmpty())
            Vinput->setObjectName(QStringLiteral("Vinput"));
        Vinput->resize(400, 300);
        gridLayout = new QGridLayout(Vinput);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        wBg = new QWidget(Vinput);
        wBg->setObjectName(QStringLiteral("wBg"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wBg->sizePolicy().hasHeightForWidth());
        wBg->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(wBg);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(wBg);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
""));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout->addWidget(wBg, 0, 0, 1, 1);


        retranslateUi(Vinput);

        QMetaObject::connectSlotsByName(Vinput);
    } // setupUi

    void retranslateUi(QWidget *Vinput)
    {
        Vinput->setWindowTitle(QApplication::translate("Vinput", "Form", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Vinput: public Ui_Vinput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VINPUT_H
