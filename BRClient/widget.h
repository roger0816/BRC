#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStackedWidget>
#include "Global.h"
#include <QDebug>



namespace Ui {
class Widget;
}

namespace StageIdx
{
enum
{
    _test=0,
    _setting,
    _barcode
};
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();




private:
    Ui::Widget *ui;

private slots:

    void slotSetting(int, QString sObjName);

};

#endif // WIDGET_H
