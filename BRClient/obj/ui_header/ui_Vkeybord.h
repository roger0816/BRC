/********************************************************************************
** Form generated from reading UI file 'Vkeybord.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VKEYBORD_H
#define UI_VKEYBORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "ItemKey.h"

QT_BEGIN_NAMESPACE

class Ui_Vkeybord
{
public:
    QGridLayout *gridLayout;
    QWidget *wBg;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout_9;
    QLineEdit *lineEdit;
    QWidget *widget_2;
    QGridLayout *gridLayout_8;
    QWidget *wNumber;
    QGridLayout *gridLayout_3;
    ItemKey *btn1;
    ItemKey *btn2;
    ItemKey *btn3;
    ItemKey *btn4;
    ItemKey *btn5;
    ItemKey *btn6;
    ItemKey *btn7;
    ItemKey *btn8;
    ItemKey *btn9;
    ItemKey *btn0;
    QWidget *wNumber_2;
    QGridLayout *gridLayout_4;
    ItemKey *e;
    ItemKey *q;
    ItemKey *r;
    ItemKey *w;
    ItemKey *t;
    ItemKey *y;
    ItemKey *i;
    ItemKey *o;
    ItemKey *p;
    ItemKey *u;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *wNumber_3;
    QGridLayout *gridLayout_5;
    ItemKey *s;
    QSpacerItem *horizontalSpacer_3;
    ItemKey *f;
    ItemKey *g;
    ItemKey *h;
    ItemKey *j;
    ItemKey *k;
    ItemKey *d;
    ItemKey *l;
    QSpacerItem *horizontalSpacer_4;
    ItemKey *a;
    QWidget *wNumber_4;
    QGridLayout *gridLayout_6;
    QWidget *widget_3;
    QGridLayout *gridLayout_10;
    QPushButton *btnShift;
    ItemKey *x;
    ItemKey *v;
    ItemKey *n;
    QSpacerItem *horizontalSpacer_5;
    ItemKey *m;
    ItemKey *c;
    ItemKey *b;
    ItemKey *z;
    QSpacerItem *horizontalSpacer_6;
    ItemKey *back;
    QWidget *wNumber_5;
    QGridLayout *gridLayout_7;
    QWidget *widget_4;
    QGridLayout *gridLayout_11;
    QPushButton *btnClose;
    ItemKey *space;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_5;
    QGridLayout *gridLayout_12;
    QPushButton *btnEnter;
    ItemKey *end;

    void setupUi(QWidget *Vkeybord)
    {
        if (Vkeybord->objectName().isEmpty())
            Vkeybord->setObjectName(QStringLiteral("Vkeybord"));
        Vkeybord->resize(800, 494);
        gridLayout = new QGridLayout(Vkeybord);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        wBg = new QWidget(Vkeybord);
        wBg->setObjectName(QStringLiteral("wBg"));
        wBg->setStyleSheet(QLatin1String("QWidget#wBg{background-color: rgb(227, 227, 227);}\n"
""));
        gridLayout_2 = new QGridLayout(wBg);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget = new QWidget(wBg);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 60));
        QFont font;
        font.setPointSize(16);
        widget->setFont(font);
        gridLayout_9 = new QGridLayout(widget);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(5, 0, 5, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(14);
        lineEdit->setFont(font1);

        gridLayout_9->addWidget(lineEdit, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(wBg);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_8 = new QGridLayout(widget_2);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        wNumber = new QWidget(widget_2);
        wNumber->setObjectName(QStringLiteral("wNumber"));
        wNumber->setMinimumSize(QSize(0, 80));
        wNumber->setMaximumSize(QSize(16777215, 80));
        gridLayout_3 = new QGridLayout(wNumber);
        gridLayout_3->setSpacing(5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        btn1 = new ItemKey(wNumber);
        btn1->setObjectName(QStringLiteral("btn1"));

        gridLayout_3->addWidget(btn1, 0, 0, 1, 1);

        btn2 = new ItemKey(wNumber);
        btn2->setObjectName(QStringLiteral("btn2"));

        gridLayout_3->addWidget(btn2, 0, 1, 1, 1);

        btn3 = new ItemKey(wNumber);
        btn3->setObjectName(QStringLiteral("btn3"));

        gridLayout_3->addWidget(btn3, 0, 2, 1, 1);

        btn4 = new ItemKey(wNumber);
        btn4->setObjectName(QStringLiteral("btn4"));

        gridLayout_3->addWidget(btn4, 0, 3, 1, 1);

        btn5 = new ItemKey(wNumber);
        btn5->setObjectName(QStringLiteral("btn5"));

        gridLayout_3->addWidget(btn5, 0, 4, 1, 1);

        btn6 = new ItemKey(wNumber);
        btn6->setObjectName(QStringLiteral("btn6"));

        gridLayout_3->addWidget(btn6, 0, 5, 1, 1);

        btn7 = new ItemKey(wNumber);
        btn7->setObjectName(QStringLiteral("btn7"));

        gridLayout_3->addWidget(btn7, 0, 6, 1, 1);

        btn8 = new ItemKey(wNumber);
        btn8->setObjectName(QStringLiteral("btn8"));

        gridLayout_3->addWidget(btn8, 0, 7, 1, 1);

        btn9 = new ItemKey(wNumber);
        btn9->setObjectName(QStringLiteral("btn9"));

        gridLayout_3->addWidget(btn9, 0, 8, 1, 1);

        btn0 = new ItemKey(wNumber);
        btn0->setObjectName(QStringLiteral("btn0"));

        gridLayout_3->addWidget(btn0, 0, 9, 1, 1);


        gridLayout_8->addWidget(wNumber, 0, 0, 1, 1);

        wNumber_2 = new QWidget(widget_2);
        wNumber_2->setObjectName(QStringLiteral("wNumber_2"));
        wNumber_2->setMinimumSize(QSize(0, 80));
        wNumber_2->setMaximumSize(QSize(16777215, 80));
        gridLayout_4 = new QGridLayout(wNumber_2);
        gridLayout_4->setSpacing(5);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(10, 5, 10, 5);
        e = new ItemKey(wNumber_2);
        e->setObjectName(QStringLiteral("e"));
        e->setMinimumSize(QSize(70, 0));
        e->setMaximumSize(QSize(70, 16777215));

        gridLayout_4->addWidget(e, 0, 3, 1, 1);

        q = new ItemKey(wNumber_2);
        q->setObjectName(QStringLiteral("q"));
        q->setMinimumSize(QSize(70, 0));
        q->setMaximumSize(QSize(70, 16777215));

        gridLayout_4->addWidget(q, 0, 1, 1, 1);

        r = new ItemKey(wNumber_2);
        r->setObjectName(QStringLiteral("r"));
        r->setMinimumSize(QSize(70, 0));
        r->setMaximumSize(QSize(70, 16777215));

        gridLayout_4->addWidget(r, 0, 4, 1, 1);

        w = new ItemKey(wNumber_2);
        w->setObjectName(QStringLiteral("w"));
        w->setMinimumSize(QSize(70, 0));
        w->setMaximumSize(QSize(70, 16777215));

        gridLayout_4->addWidget(w, 0, 2, 1, 1);

        t = new ItemKey(wNumber_2);
        t->setObjectName(QStringLiteral("t"));
        t->setMinimumSize(QSize(70, 0));
        t->setMaximumSize(QSize(70, 16777215));

        gridLayout_4->addWidget(t, 0, 5, 1, 1);

        y = new ItemKey(wNumber_2);
        y->setObjectName(QStringLiteral("y"));
        y->setMinimumSize(QSize(70, 0));
        y->setMaximumSize(QSize(70, 16777215));

        gridLayout_4->addWidget(y, 0, 6, 1, 1);

        i = new ItemKey(wNumber_2);
        i->setObjectName(QStringLiteral("i"));
        i->setMinimumSize(QSize(70, 0));
        i->setMaximumSize(QSize(70, 16777215));

        gridLayout_4->addWidget(i, 0, 8, 1, 1);

        o = new ItemKey(wNumber_2);
        o->setObjectName(QStringLiteral("o"));
        o->setMinimumSize(QSize(70, 0));
        o->setMaximumSize(QSize(70, 16777215));

        gridLayout_4->addWidget(o, 0, 9, 1, 1);

        p = new ItemKey(wNumber_2);
        p->setObjectName(QStringLiteral("p"));
        p->setMinimumSize(QSize(70, 0));
        p->setMaximumSize(QSize(70, 16777215));

        gridLayout_4->addWidget(p, 0, 10, 1, 1);

        u = new ItemKey(wNumber_2);
        u->setObjectName(QStringLiteral("u"));
        u->setMinimumSize(QSize(70, 0));
        u->setMaximumSize(QSize(70, 16777215));

        gridLayout_4->addWidget(u, 0, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 11, 1, 1);


        gridLayout_8->addWidget(wNumber_2, 1, 0, 1, 1);

        wNumber_3 = new QWidget(widget_2);
        wNumber_3->setObjectName(QStringLiteral("wNumber_3"));
        wNumber_3->setMinimumSize(QSize(0, 80));
        wNumber_3->setMaximumSize(QSize(16777215, 80));
        gridLayout_5 = new QGridLayout(wNumber_3);
        gridLayout_5->setSpacing(5);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(10, 5, 10, 5);
        s = new ItemKey(wNumber_3);
        s->setObjectName(QStringLiteral("s"));
        s->setMinimumSize(QSize(70, 0));
        s->setMaximumSize(QSize(70, 16777215));

        gridLayout_5->addWidget(s, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        f = new ItemKey(wNumber_3);
        f->setObjectName(QStringLiteral("f"));
        f->setMinimumSize(QSize(70, 0));
        f->setMaximumSize(QSize(70, 16777215));

        gridLayout_5->addWidget(f, 0, 4, 1, 1);

        g = new ItemKey(wNumber_3);
        g->setObjectName(QStringLiteral("g"));
        g->setMinimumSize(QSize(70, 0));
        g->setMaximumSize(QSize(71, 16777215));

        gridLayout_5->addWidget(g, 0, 5, 1, 1);

        h = new ItemKey(wNumber_3);
        h->setObjectName(QStringLiteral("h"));
        h->setMinimumSize(QSize(70, 0));
        h->setMaximumSize(QSize(70, 16777215));

        gridLayout_5->addWidget(h, 0, 6, 1, 1);

        j = new ItemKey(wNumber_3);
        j->setObjectName(QStringLiteral("j"));
        j->setMinimumSize(QSize(70, 0));
        j->setMaximumSize(QSize(70, 16777215));

        gridLayout_5->addWidget(j, 0, 7, 1, 1);

        k = new ItemKey(wNumber_3);
        k->setObjectName(QStringLiteral("k"));
        k->setMinimumSize(QSize(70, 0));
        k->setMaximumSize(QSize(70, 16777215));

        gridLayout_5->addWidget(k, 0, 8, 1, 1);

        d = new ItemKey(wNumber_3);
        d->setObjectName(QStringLiteral("d"));
        d->setMinimumSize(QSize(70, 0));
        d->setMaximumSize(QSize(70, 16777215));

        gridLayout_5->addWidget(d, 0, 3, 1, 1);

        l = new ItemKey(wNumber_3);
        l->setObjectName(QStringLiteral("l"));
        l->setMinimumSize(QSize(70, 0));
        l->setMaximumSize(QSize(70, 16777215));

        gridLayout_5->addWidget(l, 0, 9, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 10, 1, 1);

        a = new ItemKey(wNumber_3);
        a->setObjectName(QStringLiteral("a"));
        a->setMinimumSize(QSize(70, 0));
        a->setMaximumSize(QSize(70, 16777215));

        gridLayout_5->addWidget(a, 0, 1, 1, 1);


        gridLayout_8->addWidget(wNumber_3, 2, 0, 1, 1);

        wNumber_4 = new QWidget(widget_2);
        wNumber_4->setObjectName(QStringLiteral("wNumber_4"));
        wNumber_4->setMinimumSize(QSize(0, 80));
        wNumber_4->setMaximumSize(QSize(16777215, 80));
        gridLayout_6 = new QGridLayout(wNumber_4);
        gridLayout_6->setSpacing(5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(10, 5, 10, 5);
        widget_3 = new QWidget(wNumber_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(90, 0));
        gridLayout_10 = new QGridLayout(widget_3);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(5, 5, 5, 5);
        btnShift = new QPushButton(widget_3);
        btnShift->setObjectName(QStringLiteral("btnShift"));
        sizePolicy1.setHeightForWidth(btnShift->sizePolicy().hasHeightForWidth());
        btnShift->setSizePolicy(sizePolicy1);
        btnShift->setMinimumSize(QSize(90, 0));
        btnShift->setMaximumSize(QSize(90, 16777215));
        btnShift->setCheckable(true);

        gridLayout_10->addWidget(btnShift, 0, 0, 1, 1);


        gridLayout_6->addWidget(widget_3, 0, 0, 1, 1);

        x = new ItemKey(wNumber_4);
        x->setObjectName(QStringLiteral("x"));
        x->setMinimumSize(QSize(70, 0));
        x->setMaximumSize(QSize(70, 16777215));

        gridLayout_6->addWidget(x, 0, 4, 1, 1);

        v = new ItemKey(wNumber_4);
        v->setObjectName(QStringLiteral("v"));
        v->setMinimumSize(QSize(70, 0));
        v->setMaximumSize(QSize(70, 16777215));

        gridLayout_6->addWidget(v, 0, 6, 1, 1);

        n = new ItemKey(wNumber_4);
        n->setObjectName(QStringLiteral("n"));
        n->setMinimumSize(QSize(70, 0));
        n->setMaximumSize(QSize(70, 16777215));

        gridLayout_6->addWidget(n, 0, 8, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        m = new ItemKey(wNumber_4);
        m->setObjectName(QStringLiteral("m"));
        m->setMinimumSize(QSize(70, 0));
        m->setMaximumSize(QSize(70, 16777215));

        gridLayout_6->addWidget(m, 0, 10, 1, 1);

        c = new ItemKey(wNumber_4);
        c->setObjectName(QStringLiteral("c"));
        c->setMinimumSize(QSize(70, 0));
        c->setMaximumSize(QSize(70, 16777215));

        gridLayout_6->addWidget(c, 0, 5, 1, 1);

        b = new ItemKey(wNumber_4);
        b->setObjectName(QStringLiteral("b"));
        b->setMinimumSize(QSize(70, 0));
        b->setMaximumSize(QSize(70, 16777215));

        gridLayout_6->addWidget(b, 0, 7, 1, 1);

        z = new ItemKey(wNumber_4);
        z->setObjectName(QStringLiteral("z"));
        z->setMinimumSize(QSize(70, 0));
        z->setMaximumSize(QSize(70, 16777215));

        gridLayout_6->addWidget(z, 0, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 0, 11, 1, 1);

        back = new ItemKey(wNumber_4);
        back->setObjectName(QStringLiteral("back"));
        back->setMinimumSize(QSize(100, 0));
        back->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(back, 0, 12, 1, 1);


        gridLayout_8->addWidget(wNumber_4, 3, 0, 1, 1);

        wNumber_5 = new QWidget(widget_2);
        wNumber_5->setObjectName(QStringLiteral("wNumber_5"));
        wNumber_5->setMinimumSize(QSize(0, 80));
        wNumber_5->setMaximumSize(QSize(16777215, 80));
        gridLayout_7 = new QGridLayout(wNumber_5);
        gridLayout_7->setSpacing(5);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(10, 5, 10, 5);
        widget_4 = new QWidget(wNumber_5);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(120, 0));
        gridLayout_11 = new QGridLayout(widget_4);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(20, 5, 20, 5);
        btnClose = new QPushButton(widget_4);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        sizePolicy1.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy1);
        btnClose->setMinimumSize(QSize(120, 0));
        btnClose->setMaximumSize(QSize(120, 16777215));

        gridLayout_11->addWidget(btnClose, 0, 0, 1, 1);


        gridLayout_7->addWidget(widget_4, 0, 1, 1, 1);

        space = new ItemKey(wNumber_5);
        space->setObjectName(QStringLiteral("space"));
        space->setMinimumSize(QSize(50, 0));
        space->setMaximumSize(QSize(350, 16777215));

        gridLayout_7->addWidget(space, 0, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_8, 0, 5, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        widget_5 = new QWidget(wNumber_5);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(150, 0));
        gridLayout_12 = new QGridLayout(widget_5);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(20, 5, 20, 5);
        btnEnter = new QPushButton(widget_5);
        btnEnter->setObjectName(QStringLiteral("btnEnter"));
        sizePolicy1.setHeightForWidth(btnEnter->sizePolicy().hasHeightForWidth());
        btnEnter->setSizePolicy(sizePolicy1);
        btnEnter->setMinimumSize(QSize(150, 0));
        btnEnter->setMaximumSize(QSize(150, 16777215));

        gridLayout_12->addWidget(btnEnter, 0, 0, 1, 1);


        gridLayout_7->addWidget(widget_5, 0, 4, 1, 1);

        end = new ItemKey(wNumber_5);
        end->setObjectName(QStringLiteral("end"));
        end->setMinimumSize(QSize(70, 70));
        end->setMaximumSize(QSize(70, 70));

        gridLayout_7->addWidget(end, 0, 3, 1, 1);


        gridLayout_8->addWidget(wNumber_5, 4, 0, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);


        gridLayout->addWidget(wBg, 0, 0, 1, 1);


        retranslateUi(Vkeybord);

        QMetaObject::connectSlotsByName(Vkeybord);
    } // setupUi

    void retranslateUi(QWidget *Vkeybord)
    {
        Vkeybord->setWindowTitle(QApplication::translate("Vkeybord", "Form", 0));
        btnShift->setText(QApplication::translate("Vkeybord", "shift", 0));
        btnClose->setText(QApplication::translate("Vkeybord", "close", 0));
        btnEnter->setText(QApplication::translate("Vkeybord", "enter", 0));
    } // retranslateUi

};

namespace Ui {
    class Vkeybord: public Ui_Vkeybord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VKEYBORD_H
