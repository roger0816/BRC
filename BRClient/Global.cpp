#include "Global.h"

Global *Global::m_pInstance = 0;
Global::Global()
{

    qDebug()<<"global class ok";


    readConfig(m_config);
}


Global& Global::Instance()
{
    if(m_pInstance==0)
        m_pInstance=new Global();
    return *m_pInstance;

}

int Global::readConfig(ConfigFile::Ini &ini)
{
    qDebug()<<"reading config";
    int iRe=-1;
    QSettings settings(CONFIG_PATH, QSettings::IniFormat);
    settings.setIniCodec("UTF-8");
    settings.beginGroup("BRClient");
    ini.sMachineId=settings.value(CONFIG_MACHINE_ID,"A001").toString();
    ini.sIp=settings.value(CONFIG_IP,"127.0.0.1").toString();
    ini.sPort=settings.value(CONFIG_PORT,"60000").toString();
    ini.sLanguage=settings.value(CONFIG_LANGUAGE,"EN").toString();
    iRe=0;

    QString sPath=":/language/translations/";//cn.qm";
    m_sNowTransPath=sPath+ini.sLanguage.toLower()+".qm";
    return iRe;
}

int Global::writeConfig(QString sKey,QString sValue)
{
    qDebug()<<"write config";

    int iRe=0;

    QSettings settings(CONFIG_PATH, QSettings::IniFormat);
    settings.setIniCodec("UTF-8");
    settings.beginGroup("BRClient");

    if(sKey==CONFIG_MACHINE_ID)
    {
        m_config.sMachineId=sValue;
    }
    else if(sKey==CONFIG_IP)
    {
        m_config.sIp=sValue;
    }
    else if(sKey==CONFIG_PORT)
    {
        m_config.sPort=sValue;
    }
    else if(sKey==CONFIG_LANGUAGE)
    {
        m_config.sLanguage=sValue;
    }
    else
        iRe=-1;

    if(iRe==0)
    {
        settings.setValue(sKey,sValue);
    }

    return iRe;
}

int Global::tcpSend(QString sId,QString sNum)
{
    int iRe=9999;
    TcpData input;
    input.iAction=3001;
    input.iType=1;
    input.listValue.append(sId);
    input.listValue.append(sNum);

    TcpData output;
    iRe=m_tcp.blockTcpSend(input,output,m_config.sIp,m_config.sPort.toInt(),2000);

    QElapsedTimer timer;
    timer.start();

    if(timer.elapsed()<3000 && iRe==9999)
    {
        QCoreApplication::processEvents();
    }
    return iRe;
}

Global::~Global()
{


}

void Global::callKeybord(QLabel *lb)
{
    emit signalOpenKeybord(lb);
}

