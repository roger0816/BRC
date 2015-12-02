/********************************************************************************
** Form generated from reading UI file 'Vkeybord.ui'
**
** Created: Wed Dec 2 07:13:57 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VKEYBORD_H
#define UI_VKEYBORD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
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
    QWidget *end2;
    QGridLayout *gridLayout_13;
    ItemKey *end;

    void setupUi(QWidget *Vkeybord)
    {
        if (Vkeybord->objectName().isEmpty())
            Vkeybord->setObjectName(QString::fromUtf8("Vkeybord"));
        Vkeybord->resize(800, 494);
        gridLayout = new QGridLayout(Vkeybord);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        wBg = new QWidget(Vkeybord);
        wBg->setObjectName(QString::fromUtf8("wBg"));
        wBg->setStyleSheet(QString::fromUtf8("QWidget#wBg{background-color: rgb(227, 227, 227);}\n"
""));
        gridLayout_2 = new QGridLayout(wBg);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(wBg);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setPointSize(16);
        widget->setFont(font);
        gridLayout_9 = new QGridLayout(widget);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(5, 0, 5, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
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
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_8 = new QGridLayout(widget_2);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        wNumber = new QWidget(widget_2);
        wNumber->setObjectName(QString::fromUtf8("wNumber"));
        wNumber->setMinimumSize(QSize(0, 0));
        wNumber->setMaximumSize(QSize(16777215, 10000));
        gridLayout_3 = new QGridLayout(wNumber);
        gridLayout_3->setSpacing(5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        btn1 = new ItemKey(wNumber);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setMaximumSize(QSize(1000, 1000));

        gridLayout_3->addWidget(btn1, 0, 0, 1, 1);

        btn2 = new ItemKey(wNumber);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setMaximumSize(QSize(1000, 16777215));

        gridLayout_3->addWidget(btn2, 0, 1, 1, 1);

        btn3 = new ItemKey(wNumber);
        btn3->setObjectName(QString::fromUtf8("btn3"));

        gridLayout_3->addWidget(btn3, 0, 2, 1, 1);

        btn4 = new ItemKey(wNumber);
        btn4->setObjectName(QString::fromUtf8("btn4"));

        gridLayout_3->addWidget(btn4, 0, 3, 1, 1);

        btn5 = new ItemKey(wNumber);
        btn5->setObjectName(QString::fromUtf8("btn5"));

        gridLayout_3->addWidget(btn5, 0, 4, 1, 1);

        btn6 = new ItemKey(wNumber);
        btn6->setObjectName(QString::fromUtf8("btn6"));

        gridLayout_3->addWidget(btn6, 0, 5, 1, 1);

        btn7 = new ItemKey(wNumber);
        btn7->setObjectName(QString::fromUtf8("btn7"));

        gridLayout_3->addWidget(btn7, 0, 6, 1, 1);

        btn8 = new ItemKey(wNumber);
        btn8->setObjectName(QString::fromUtf8("btn8"));

        gridLayout_3->addWidget(btn8, 0, 7, 1, 1);

        btn9 = new ItemKey(wNumber);
        btn9->setObjectName(QString::fromUtf8("btn9"));

        gridLayout_3->addWidget(btn9, 0, 8, 1, 1);

        btn0 = new ItemKey(wNumber);
        btn0->setObjectName(QString::fromUtf8("btn0"));

        gridLayout_3->addWidget(btn0, 0, 9, 1, 1);


        gridLayout_8->addWidget(wNumber, 0, 0, 1, 1);

        wNumber_2 = new QWidget(widget_2);
        wNumber_2->setObjectName(QString::fromUtf8("wNumber_2"));
        wNumber_2->setMinimumSize(QSize(0, 0));
        wNumber_2->setMaximumSize(QSize(16777215, 10000));
        gridLayout_4 = new QGridLayout(wNumber_2);
        gridLayout_4->setSpacing(5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(10, 5, 10, 5);
        e = new ItemKey(wNumber_2);
        e->setObjectName(QString::fromUtf8("e"));
        e->setMinimumSize(QSize(0, 0));
        e->setMaximumSize(QSize(1000, 16777215));

        gridLayout_4->addWidget(e, 0, 3, 1, 1);

        q = new ItemKey(wNumber_2);
        q->setObjectName(QString::fromUtf8("q"));
        q->setMinimumSize(QSize(0, 0));
        q->setMaximumSize(QSize(1000, 16777215));

        gridLayout_4->addWidget(q, 0, 1, 1, 1);

        r = new ItemKey(wNumber_2);
        r->setObjectName(QString::fromUtf8("r"));
        r->setMinimumSize(QSize(0, 0));
        r->setMaximumSize(QSize(1000, 16777215));

        gridLayout_4->addWidget(r, 0, 4, 1, 1);

        w = new ItemKey(wNumber_2);
        w->setObjectName(QString::fromUtf8("w"));
        w->setMinimumSize(QSize(0, 0));
        w->setMaximumSize(QSize(1000, 16777215));

        gridLayout_4->addWidget(w, 0, 2, 1, 1);

        t = new ItemKey(wNumber_2);
        t->setObjectName(QString::fromUtf8("t"));
        t->setMinimumSize(QSize(0, 0));
        t->setMaximumSize(QSize(1000, 16777215));

        gridLayout_4->addWidget(t, 0, 5, 1, 1);

        y = new ItemKey(wNumber_2);
        y->setObjectName(QString::fromUtf8("y"));
        y->setMinimumSize(QSize(0, 0));
        y->setMaximumSize(QSize(1000, 16777215));

        gridLayout_4->addWidget(y, 0, 6, 1, 1);

        i = new ItemKey(wNumber_2);
        i->setObjectName(QString::fromUtf8("i"));
        i->setMinimumSize(QSize(0, 0));
        i->setMaximumSize(QSize(1000, 16777215));

        gridLayout_4->addWidget(i, 0, 8, 1, 1);

        o = new ItemKey(wNumber_2);
        o->setObjectName(QString::fromUtf8("o"));
        o->setMinimumSize(QSize(0, 0));
        o->setMaximumSize(QSize(1000, 16777215));

        gridLayout_4->addWidget(o, 0, 9, 1, 1);

        p = new ItemKey(wNumber_2);
        p->setObjectName(QString::fromUtf8("p"));
        p->setMinimumSize(QSize(0, 0));
        p->setMaximumSize(QSize(1000, 16777215));

        gridLayout_4->addWidget(p, 0, 10, 1, 1);

        u = new ItemKey(wNumber_2);
        u->setObjectName(QString::fromUtf8("u"));
        u->setMinimumSize(QSize(0, 0));
        u->setMaximumSize(QSize(1000, 16777215));

        gridLayout_4->addWidget(u, 0, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 11, 1, 1);


        gridLayout_8->addWidget(wNumber_2, 1, 0, 1, 1);

        wNumber_3 = new QWidget(widget_2);
        wNumber_3->setObjectName(QString::fromUtf8("wNumber_3"));
        wNumber_3->setMinimumSize(QSize(0, 0));
        wNumber_3->setMaximumSize(QSize(16777215, 10000));
        gridLayout_5 = new QGridLayout(wNumber_3);
        gridLayout_5->setSpacing(5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(10, 5, 10, 5);
        s = new ItemKey(wNumber_3);
        s->setObjectName(QString::fromUtf8("s"));
        s->setMinimumSize(QSize(0, 0));
        s->setMaximumSize(QSize(10000, 16777215));

        gridLayout_5->addWidget(s, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        f = new ItemKey(wNumber_3);
        f->setObjectName(QString::fromUtf8("f"));
        f->setMinimumSize(QSize(0, 0));
        f->setMaximumSize(QSize(1000, 16777215));

        gridLayout_5->addWidget(f, 0, 4, 1, 1);

        g = new ItemKey(wNumber_3);
        g->setObjectName(QString::fromUtf8("g"));
        g->setMinimumSize(QSize(0, 0));
        g->setMaximumSize(QSize(1000, 16777215));

        gridLayout_5->addWidget(g, 0, 5, 1, 1);

        h = new ItemKey(wNumber_3);
        h->setObjectName(QString::fromUtf8("h"));
        h->setMinimumSize(QSize(0, 0));
        h->setMaximumSize(QSize(1000, 16777215));

        gridLayout_5->addWidget(h, 0, 6, 1, 1);

        j = new ItemKey(wNumber_3);
        j->setObjectName(QString::fromUtf8("j"));
        j->setMinimumSize(QSize(0, 0));
        j->setMaximumSize(QSize(1000, 16777215));

        gridLayout_5->addWidget(j, 0, 7, 1, 1);

        k = new ItemKey(wNumber_3);
        k->setObjectName(QString::fromUtf8("k"));
        k->setMinimumSize(QSize(0, 0));
        k->setMaximumSize(QSize(1000, 16777215));

        gridLayout_5->addWidget(k, 0, 8, 1, 1);

        d = new ItemKey(wNumber_3);
        d->setObjectName(QString::fromUtf8("d"));
        d->setMinimumSize(QSize(0, 0));
        d->setMaximumSize(QSize(10000, 16777215));

        gridLayout_5->addWidget(d, 0, 3, 1, 1);

        l = new ItemKey(wNumber_3);
        l->setObjectName(QString::fromUtf8("l"));
        l->setMinimumSize(QSize(0, 0));
        l->setMaximumSize(QSize(1000, 16777215));

        gridLayout_5->addWidget(l, 0, 9, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 10, 1, 1);

        a = new ItemKey(wNumber_3);
        a->setObjectName(QString::fromUtf8("a"));
        a->setMinimumSize(QSize(0, 0));
        a->setMaximumSize(QSize(1000, 16777215));

        gridLayout_5->addWidget(a, 0, 1, 1, 1);


        gridLayout_8->addWidget(wNumber_3, 2, 0, 1, 1);

        wNumber_4 = new QWidget(widget_2);
        wNumber_4->setObjectName(QString::fromUtf8("wNumber_4"));
        wNumber_4->setMinimumSize(QSize(0, 0));
        wNumber_4->setMaximumSize(QSize(16777215, 10000));
        gridLayout_6 = new QGridLayout(wNumber_4);
        gridLayout_6->setSpacing(5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(10, 5, 10, 5);
        widget_3 = new QWidget(wNumber_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 0));
        gridLayout_10 = new QGridLayout(widget_3);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(5, 5, 5, 5);
        btnShift = new QPushButton(widget_3);
        btnShift->setObjectName(QString::fromUtf8("btnShift"));
        sizePolicy1.setHeightForWidth(btnShift->sizePolicy().hasHeightForWidth());
        btnShift->setSizePolicy(sizePolicy1);
        btnShift->setMinimumSize(QSize(0, 0));
        btnShift->setMaximumSize(QSize(1000, 16777215));
        QFont font2;
        font2.setPointSize(10);
        btnShift->setFont(font2);
        btnShift->setCheckable(true);

        gridLayout_10->addWidget(btnShift, 0, 0, 1, 1);


        gridLayout_6->addWidget(widget_3, 0, 0, 1, 1);

        x = new ItemKey(wNumber_4);
        x->setObjectName(QString::fromUtf8("x"));
        x->setMinimumSize(QSize(0, 0));
        x->setMaximumSize(QSize(1000, 16777215));

        gridLayout_6->addWidget(x, 0, 4, 1, 1);

        v = new ItemKey(wNumber_4);
        v->setObjectName(QString::fromUtf8("v"));
        v->setMinimumSize(QSize(0, 0));
        v->setMaximumSize(QSize(1000, 16777215));

        gridLayout_6->addWidget(v, 0, 6, 1, 1);

        n = new ItemKey(wNumber_4);
        n->setObjectName(QString::fromUtf8("n"));
        n->setMinimumSize(QSize(0, 0));
        n->setMaximumSize(QSize(1000, 16777215));

        gridLayout_6->addWidget(n, 0, 8, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(15, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        m = new ItemKey(wNumber_4);
        m->setObjectName(QString::fromUtf8("m"));
        m->setMinimumSize(QSize(0, 0));
        m->setMaximumSize(QSize(1000, 16777215));

        gridLayout_6->addWidget(m, 0, 10, 1, 1);

        c = new ItemKey(wNumber_4);
        c->setObjectName(QString::fromUtf8("c"));
        c->setMinimumSize(QSize(0, 0));
        c->setMaximumSize(QSize(1000, 16777215));

        gridLayout_6->addWidget(c, 0, 5, 1, 1);

        b = new ItemKey(wNumber_4);
        b->setObjectName(QString::fromUtf8("b"));
        b->setMinimumSize(QSize(0, 0));
        b->setMaximumSize(QSize(1000, 16777215));

        gridLayout_6->addWidget(b, 0, 7, 1, 1);

        z = new ItemKey(wNumber_4);
        z->setObjectName(QString::fromUtf8("z"));
        z->setMinimumSize(QSize(0, 0));
        z->setMaximumSize(QSize(1000, 16777215));

        gridLayout_6->addWidget(z, 0, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(15, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 0, 11, 1, 1);

        back = new ItemKey(wNumber_4);
        back->setObjectName(QString::fromUtf8("back"));
        back->setMinimumSize(QSize(0, 0));
        back->setMaximumSize(QSize(1000, 16777215));

        gridLayout_6->addWidget(back, 0, 12, 1, 1);


        gridLayout_8->addWidget(wNumber_4, 3, 0, 1, 1);

        wNumber_5 = new QWidget(widget_2);
        wNumber_5->setObjectName(QString::fromUtf8("wNumber_5"));
        wNumber_5->setMinimumSize(QSize(0, 0));
        wNumber_5->setMaximumSize(QSize(16777215, 10000));
        gridLayout_7 = new QGridLayout(wNumber_5);
        gridLayout_7->setSpacing(5);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(10, 5, 10, 5);
        widget_4 = new QWidget(wNumber_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(0, 0));
        gridLayout_11 = new QGridLayout(widget_4);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(10, 5, 10, 5);
        btnClose = new QPushButton(widget_4);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        sizePolicy1.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy1);
        btnClose->setMinimumSize(QSize(0, 0));
        btnClose->setMaximumSize(QSize(1000, 16777215));
        btnClose->setFont(font2);

        gridLayout_11->addWidget(btnClose, 0, 0, 1, 1);


        gridLayout_7->addWidget(widget_4, 0, 1, 1, 1);

        space = new ItemKey(wNumber_5);
        space->setObjectName(QString::fromUtf8("space"));
        space->setMinimumSize(QSize(0, 0));
        space->setMaximumSize(QSize(1000, 16777215));

        gridLayout_7->addWidget(space, 0, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_8, 0, 5, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        widget_5 = new QWidget(wNumber_5);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMinimumSize(QSize(0, 0));
        gridLayout_12 = new QGridLayout(widget_5);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(10, 0, 10, 0);
        btnEnter = new QPushButton(widget_5);
        btnEnter->setObjectName(QString::fromUtf8("btnEnter"));
        sizePolicy1.setHeightForWidth(btnEnter->sizePolicy().hasHeightForWidth());
        btnEnter->setSizePolicy(sizePolicy1);
        btnEnter->setMinimumSize(QSize(0, 0));
        btnEnter->setMaximumSize(QSize(1000, 16777215));
        btnEnter->setFont(font2);

        gridLayout_12->addWidget(btnEnter, 0, 0, 1, 1);


        gridLayout_7->addWidget(widget_5, 0, 4, 1, 1);

        end2 = new QWidget(wNumber_5);
        end2->setObjectName(QString::fromUtf8("end2"));
        gridLayout_13 = new QGridLayout(end2);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(10, 2, 10, 1);
        end = new ItemKey(end2);
        end->setObjectName(QString::fromUtf8("end"));
        sizePolicy1.setHeightForWidth(end->sizePolicy().hasHeightForWidth());
        end->setSizePolicy(sizePolicy1);

        gridLayout_13->addWidget(end, 0, 0, 1, 1);


        gridLayout_7->addWidget(end2, 0, 3, 1, 1);

        gridLayout_7->setColumnStretch(0, 1);
        gridLayout_7->setColumnStretch(1, 2);
        gridLayout_7->setColumnStretch(2, 5);
        gridLayout_7->setColumnStretch(3, 2);
        gridLayout_7->setColumnStretch(4, 2);
        gridLayout_7->setColumnStretch(5, 1);

        gridLayout_8->addWidget(wNumber_5, 4, 0, 1, 1);

        gridLayout_8->setRowStretch(0, 1);
        gridLayout_8->setRowStretch(1, 1);
        gridLayout_8->setRowStretch(2, 1);
        gridLayout_8->setRowStretch(3, 1);
        gridLayout_8->setRowStretch(4, 1);

        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);


        gridLayout->addWidget(wBg, 0, 0, 1, 1);


        retranslateUi(Vkeybord);

        QMetaObject::connectSlotsByName(Vkeybord);
    } // setupUi

    void retranslateUi(QWidget *Vkeybord)
    {
        Vkeybord->setWindowTitle(QApplication::translate("Vkeybord", "Form", 0, QApplication::UnicodeUTF8));
        btnShift->setText(QApplication::translate("Vkeybord", "shift", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("Vkeybord", "close", 0, QApplication::UnicodeUTF8));
        btnEnter->setText(QApplication::translate("Vkeybord", "enter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Vkeybord: public Ui_Vkeybord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VKEYBORD_H
