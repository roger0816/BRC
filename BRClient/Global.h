#ifndef GLOBAL_H
#define GLOBAL_H

#include <QObject>
#include <QDebug>
#include <QLabel>
#include <QSettings>
#include <QApplication>
#include <CTcpClient.h>

#define GLOBAL Global::Instance

#define CONFIG_PATH QApplication::applicationDirPath()+"/config.ini"

#define CONFIG_MACHINE_ID "machine id"
#define CONFIG_IP "ip"
#define CONFIG_PORT "port"
#define CONFIG_LANGUAGE "language"

#define LANGUAGE_EN "en"
#define LANGUAGE_CN "cn"
#define LANGUAGE_TW "tw"

namespace StageIdx
{
enum
{
    _test=0,
    _setting,
    _barcode
};
}

namespace ConfigFile
{
   struct Ini
   {
       QString sMachineId;
       QString sIp;
       QString sPort;
       QString sLanguage;
   };
}

using namespace ConfigFile;

class Global :public QObject
{
    Q_OBJECT
public:
    ~Global();

    static Global& Instance();

    int readConfig(ConfigFile::Ini &ini);

    int writeConfig(QString sKey, QString sValue);

    Ini m_config;

    int tcpSend(QString sId, QString sNum);

    QSize m_SizeWindow;

    void callKeybord(QLabel *lb);

    QString m_sNowTransPath ;
private:
    Global();
    CTcpClient m_tcp;
    static Global* m_pInstance;

signals:
    void signalOpenKeybord(QLabel *lb);
public slots:

};

#endif // GLOBAL_H
