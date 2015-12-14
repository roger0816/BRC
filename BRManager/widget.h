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


#define CONFIG_UPDATE_IP "update_ip"
#define CONFIG_UPDATE_PORT "update_port"
#define CONFIG_UPDATE_USER "ftp_user"
#define CONFIG_UPDATE_PASS "ftp_pass"
#define CONFIG_UPDATE_PATH "ftp_path"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void checkFtpAndUpdate();

    void checkBarcode();

private:
    Ui::Widget *ui;

    int m_iSec;

    CUsbDetect m_cUsb;

    QProcess m_brc;

    QString m_sBRclient;



    void timerEvent(QTimerEvent *);
public slots:

    void slotDetectBarcode(bool bHas);

};

#endif // WIDGET_H
