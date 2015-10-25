#ifndef ITEMBARCODE_H
#define ITEMBARCODE_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
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
    QLabel *m_lb0;
    QLabel *m_lb1;

private:
    Ui::ItemBarcode *ui;
};

#endif // ITEMBARCODE_H
