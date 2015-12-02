#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimerEvent>
#include "CUsbDetect.h"
#include <QDebug>
#include <QSettings>
#include <QProcess>
#include <QApplication>
#include "CFtpTransfer.h"

#define BRC_PATH QApplication::applicationDirPath()+"/../bin/BRClient"
#define CONFIG_PATH QApplication::applicationDirPath()+"/../bin/config.ini"
#define VERSION_PATH QApplication::applicationDirPath()+"/../bin/version.ini"


#define CONFIG_UPDATE_IP "update ip"
#define CONFIG_UPDATE_PORT "update port"
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

    QString m_sBRclient;


    void timerEvent(QTimerEvent *);
private slots:
    void on_btn_clicked();
    void slotDetectBarcode(bool bHas);
};

#endif // WIDGET_H
