#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimerEvent>
#include "CUsbDetect.h"
#include <QProcess>
#include <QApplication>

#define BRC_PATH QApplication::applicationDirPath()+"/../bin/BRC"

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

    int m_iSec;

    CUsbDetect m_cUsb;

    QProcess m_brc;

    void timerEvent(QTimerEvent *);
private slots:
    void on_btn_clicked();
    void slotDetectBarcode(bool bHas);
};

#endif // WIDGET_H
