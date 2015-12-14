#ifndef ITEMBARCODE_H
#define ITEMBARCODE_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QTranslator>
#include "Global.h"
#include "Vinput.h"

namespace Ui {
class ItemBarcode;
}

class ItemBarcode : public QWidget
{
    Q_OBJECT

public:
    explicit ItemBarcode(QWidget *parent = 0);
    ~ItemBarcode();
    QPushButton *m_btn;
    void setLbTitle(QString sBtnTitle, QString sLb0, QString sLb1);
    Vinput *m_lb0;
    Vinput *m_lb1;
    QLabel *m_lb2;

private:
    Ui::ItemBarcode *ui;
    void showEvent(QShowEvent *);
};

#endif // ITEMBARCODE_H
