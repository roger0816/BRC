#ifndef VKEYBORD_H
#define VKEYBORD_H

#include <QWidget>
#include <QDebug>
#include "ItemKey.h"

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
private slots:
    void slotInput();
    void slotChangeUpper(bool);
};

#endif // VKEYBORD_H
