#ifndef GLOBAL_H
#define GLOBAL_H

#include <QObject>
#include <QDebug>
#include <QLabel>
#include <QSettings>
#include <QApplication>
#include <CTcpClient.h>

#define EMBEDDED_LINUX 1

#define GLOBAL Global::Instance

#define CONFIG_PATH QApplication::applicationDirPath()+"/config.ini"

#define CONFIG_SYSTEM_PASSWORD "system_passsword"

#define CONFIG_MACHINE_ID "machine_id"
#define CONFIG_IP "ip"
#define CONFIG_PORT "port"
#define CONFIG_LANGUAGE "language"
#define CONFIG_UPDATE_IP "update_ip"
#define CONFIG_UPDATE_PORT "update_port"
#define CONFIG_UPDATE_USER "ftp_user"
#define CONFIG_UPDATE_PASS "ftp_pass"
#define CONFIG_UPDATE_PATH "ftp_path"


#define LANGUAGE_EN "en"
#define LANGUAGE_CN "cn"
#define LANGUAGE_TW "tw"

#include <QElapsedTimer>
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
       QString sUpdateIp;
       QString sUpdatePort;
       QString sUpdateUser;
       QString sUpdatePass;
       QString sUpdatePath;
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

    QString m_sVer;

    QString m_sSystemPassword;

    int tcpSend(int iBarcodeIdx, QString sId, QString sNum, QString &sOut);

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
