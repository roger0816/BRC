#include "Global.h"

Global *Global::m_pInstance = 0;
Global::Global()
{
    qDebug()<<"global class ok";
    readConfig();
}


Global& Global::Instance()
{
    if(m_pInstance==0)
        m_pInstance=new Global();
    return *m_pInstance;

}

void Global::readConfig()
{
    qDebug()<<"reading config";
    QString sPath=QApplication::applicationDirPath();
    QSettings settings(CONFIG_PATH);
    settings.beginGroup("BRC");
    qDebug()<<"IP : "<<settings.value("ip").toString();
}

Global::~Global()
{

}

