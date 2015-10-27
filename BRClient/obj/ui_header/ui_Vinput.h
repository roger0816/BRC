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
    QWidget *widget;
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
        widget = new QWidget(Vinput);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


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
