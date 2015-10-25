#ifndef ITEMSETTING_H
#define ITEMSETTING_H

#include <QWidget>
#include <QPushButton>
namespace Ui {
class ItemSetting;
}

class ItemSetting : public QWidget
{
    Q_OBJECT

public:
    explicit ItemSetting(QWidget *parent = 0);
    ~ItemSetting();
    void setLbTitle(QString sBtnTitle,QString sLb0="-1",QString sLb1="-1");
    QPushButton *m_btn;

private:
    Ui::ItemSetting *ui;
};

#endif // ITEMSETTING_H
