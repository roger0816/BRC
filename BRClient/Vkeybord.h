#ifndef VKEYBORD_H
#define VKEYBORD_H

#include <QWidget>
#include <QDebug>
#include <QLabel>
#include "ItemKey.h"
#include <QPropertyAnimation>
#include <QEventLoop>

namespace Ui {
class Vkeybord;
}

class Vkeybord : public QWidget
{
    Q_OBJECT

public:
    explicit Vkeybord(QWidget *parent = 0);
    ~Vkeybord();

private:
    Ui::Vkeybord *ui;
    QList<ItemKey*> m_listNumWord;
    QList<ItemKey*> m_listEnWord;
    QList<ItemKey*> m_listSpecailWord;
    QLabel *m_lbWaitKeyIn;
    QPropertyAnimation *m_ani;
private slots:
    void slotInput();
    void slotEnter();
    void slotChangeUpper(bool);
public slots:
    void slotOpenKeyBord(QLabel *lb);
};

#endif // VKEYBORD_H
