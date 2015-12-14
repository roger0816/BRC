#include "Global.h"

Global *Global::m_pInstance = 0;
Global::Global()
{

    qDebug()<<"global class ok";

    m_sVer="";
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
    m_sSystemPassword=settings.value(CONFIG_SYSTEM_PASSWORD,"00000").toString();
    ini.sMachineId=settings.value(CONFIG_MACHINE_ID,"A0000").toString();
    ini.sIp=settings.value(CONFIG_IP,"127.0.0.1").toString();
    ini.sPort=settings.value(CONFIG_PORT,"60000").toString();
    ini.sLanguage=settings.value(CONFIG_LANGUAGE,"EN").toString();
    ini.sUpdateIp=settings.value(CONFIG_UPDATE_IP,"127.0.0.1").toString();
    ini.sUpdatePort=settings.value(CONFIG_UPDATE_PORT,"60000").toString();
    ini.sUpdateUser=settings.value(CONFIG_UPDATE_USER,"").toString();
    ini.sUpdatePass=settings.value(CONFIG_UPDATE_PASS,"").toString();
    ini.sUpdatePath=settings.value(CONFIG_UPDATE_PATH,"").toString();


    m_sVer=settings.value("version","ver ").toString();
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
    else if(sKey==CONFIG_UPDATE_IP)
    {
        m_config.sUpdateIp=sValue;
    }
    else if(sKey==CONFIG_UPDATE_PORT)
    {
        m_config.sUpdatePort=sValue;
    }
    else if(sKey==CONFIG_UPDATE_USER)
    {
        m_config.sUpdateUser=sValue;
    }
    else if(sKey==CONFIG_UPDATE_PASS)
    {
        m_config.sUpdatePass=sValue;
    }
    else if(sKey==CONFIG_UPDATE_PATH)
    {
        m_config.sUpdatePath=sValue;
    }
    else
        iRe=-1;

    if(iRe==0)
    {
        settings.setValue(sKey,sValue);
    }

    return iRe;
}

int Global::tcpSend(int iBarcodeIdx,QString sId,QString sNum,QString &sOut)
{
    int iRe=9999;
    TcpData input;
    input.iAction=3001;
    input.iType=iBarcodeIdx;
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

    sOut=output.sOldCode;
    return iRe;
}

Global::~Global()
{


}

void Global::callKeybord(QLabel *lb)
{
    emit signalOpenKeybord(lb);
}

