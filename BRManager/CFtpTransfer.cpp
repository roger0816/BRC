#include "CFtpTransfer.h"

CFtpTransfer::CFtpTransfer(QObject *parent) :
    QObject(parent)
{

    m_flagProcessOk=false;
    m_flagFtpOk=false;

    QString sFtpIp="ftp://";
    m_url.setUrl(sFtpIp);


    connect(&m_ftp,SIGNAL(done(bool)),this,SLOT(slotFtpDone(bool)));
    connect(&m_ftp,SIGNAL(listInfo(const QUrlInfo&)),this,SLOT(slotListInfo(const QUrlInfo&)));

}



bool CFtpTransfer::downLoad(const QString sFilePath,const QString sLocalDir)
{
    qDebug()<<"download";
    m_flagFtpOk=false;

    QUrl tmpUrl(sFilePath);
    QString sFileName=QFileInfo(tmpUrl.path()).fileName();

    if(!m_url.isValid())
    {
        std::cerr<<"Error: Invalid URL"<<std::endl;
        return false;
    }

    if(m_url.scheme() != "ftp")
    {
        std::cerr<<"Error: URL must start with 'ftp' ";
        return false;
    }



    QString tmp(sLocalDir);
    tmp.append(sFileName);
    m_file.setFileName(sLocalDir+sFileName);
    qDebug()<<"file Name:  "<<m_file.fileName();
    if(!m_file.open(QIODevice::ReadWrite))
    {
        std::cerr<<"error : cannot write file ";
        return false;
    }

    m_ftp.connectToHost(m_url.host(),m_url.port(21));
    m_ftp.login(m_url.userName(),m_url.password());
    m_ftp.get(tmpUrl.path(),&m_file);
    cTimeOut(10000,m_flagFtpOk);
    m_ftp.close();


    return true;
}


bool CFtpTransfer::upLoad(const QString sFilePath,const QString sFtpDir)
{
    qDebug()<<"upload";
    m_flagFtpOk=false;
    //先切出檔案名
    QUrl tmpUrl(sFilePath);
    QString sFileName=QFileInfo(tmpUrl.path()).fileName();
    qDebug()<<"sFIle  "<<sFilePath;
    //讀取檔源
    m_file.setFileName(sFilePath);

    if(!m_file.open(QIODevice::ReadWrite))
    {
        std::cerr<<"error : cannot write file ";
        return false;
    }
    //連線FTP
    m_ftp.connectToHost(m_url.host(),m_url.port(21));
    m_ftp.login(m_url.userName(),m_url.password());
    //上傳與指定檔名
    m_ftp.put(&m_file,sFtpDir+sFileName);
    cTimeOut(10000,m_flagFtpOk);
    m_file.close();
    m_ftp.close();
    return true;

}




int CFtpTransfer::cTimeOut(int iMilliseconds,bool &bIsReturn)
{
    QElapsedTimer t;
    t.start();
    int iTmp=0;

    while (t.elapsed()<iMilliseconds && !bIsReturn)
        //  while (t.elapsed()<iMilliseconds && !g_thread2->m_bIsReturn)
    {
        if((t.elapsed()+1)/1000!=iTmp)
        {
            iTmp=(t.elapsed()+1)/1000;

            qDebug()<<"wait time out : "<<iTmp<<"  /  "<<iMilliseconds/1000;

        }
        QCoreApplication::processEvents();
    }


    if(t.elapsed()>= iMilliseconds )
        return -1;
    return 0;
}

bool CFtpTransfer::setUrl(QString sIp, QString sUserName, QString sPassword)
{
    QString sFtpIp="ftp://"+sIp;
    m_url.setUrl(sFtpIp);
    m_url.setUserName(sUserName);
    m_url.setPassword(sPassword);
    return true;
}


QString CFtpTransfer::getDate(bool bIsNowDay)
{
    QString sRe;
    QString sNowDay;
    QString sPreDay;

    QDateTime dt;
    QDate date;
    dt.setDate(date.currentDate());
    sNowDay=dt.toString("yyyyMMdd");
    sPreDay=dt.addDays(-1).toString("yyyyMMdd");

    if(bIsNowDay)
        sRe=sNowDay;
    else
        sRe=sPreDay;
    return sRe;
}

void CFtpTransfer::downloadDir(QString sDir, QString sSaveRoot)
{
    if(sSaveRoot=="")
        sSaveRoot=QApplication::applicationDirPath();
    m_listFile.clear();
    m_flagProcessOk=false;
    m_ftp.connectToHost(m_url.host(),m_url.port(21));
    m_ftp.login(m_url.userName(),m_url.password());
    // m_ftp.cd(sDirPath);
    m_ftp.cd(sDir);
    m_ftp.list();
    int iRe=cTimeOut(5000,m_flagProcessOk);
    m_ftp.close();
    if(iRe!=0)
    {
        qDebug()<<"connect false or dir no data";
        return;
    }

    QDir dir;
    if(!dir.exists(sSaveRoot))
    {
        dir.mkdir(sSaveRoot);
    }

//    if(!dir.exists(sSaveRoot+"/"+sDir))
//    {
//        dir.mkdir(sSaveRoot+"/"+sDir);
//    }

//    QString sSavePath=sSaveRoot+"/"+sDir;


    for(int i=0;i<m_listFile.length();i++)
    {
        QString sFile="/"+sDir+"/"+m_listFile.at(i);
        qDebug()<<"down file : "<<sFile;
        qDebug()<<"sava path: "<<sSaveRoot;
      //  sFile="aa/BRClient/20151130_2";

        downLoad(sFile,sSaveRoot+"/");

    }

}
