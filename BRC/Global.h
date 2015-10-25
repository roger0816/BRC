#ifndef GLOBAL_H
#define GLOBAL_H

#include <QObject>
#include <QDebug>
#include <QSettings>
#include <QApplication>
#define GLOBAL Global::Instance

#define CONFIG_PATH "/home/pi/brc_project/bin/config.ini"

namespace ConfigFile
{
   struct Ini
   {
       QString sMechineId;
       QString sIp;
       QString sPort;

   };
}


class Global :public QObject
{
    Q_OBJECT
public:
    ~Global();

    static Global& Instance();

    void readConfig();
private:
    Global();

    static Global* m_pInstance;

signals:

public slots:

};

#endif // GLOBAL_H
