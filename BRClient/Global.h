#ifndef GLOBAL_H
#define GLOBAL_H

#include <QObject>
#include <QDebug>
#include <QSettings>
#include <QApplication>
#define GLOBAL Global::Instance

#define CONFIG_PATH QApplication::applicationDirPath()+"/config.ini"

#define CONFIG_MACHINE_ID "machine id"
#define CONFIG_IP "ip"
#define CONFIG_PORT "port"
#define CONFIG_LANGUAGE "language"

#define LANGUAGE_EN "EN"
#define LANGUAGE_CN "CN"
#define LANGUAGE_TW "TW"

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

    QSize m_SizeWindow;
private:
    Global();

    static Global* m_pInstance;

signals:

public slots:

};

#endif // GLOBAL_H
