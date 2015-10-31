#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStackedWidget>
#include "Global.h"
#include <QDebug>
#include "Vkeybord.h"
#include <QTranslator>

namespace Ui {
class Widget;
}



class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();




private:
    Ui::Widget *ui;
    Vkeybord *m_keybord;

private slots:

    void slotSetting(int, QString);

};

#endif // WIDGET_H
