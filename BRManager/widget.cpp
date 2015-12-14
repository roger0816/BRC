#include "widget.h"
#include "ui_widget.h"



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_iSec=-1;
    m_sBRclient=BRC_PATH;
    ui->dialogUpdate->show();

}

Widget::~Widget()
{
    delete ui;
    if(m_brc.isOpen())
        m_brc.close();

    m_cUsb.quit();
    m_cUsb.wait();
}



void Widget::timerEvent(QTimerEvent *)
{
    m_iSec+=1000;

}

void Widget::checkFtpAndUpdate()
{
    //get ftp ip
    QSettings settings(CONFIG_PATH, QSettings::IniFormat);
    settings.setIniCodec("UTF-8");
    settings.beginGroup("BRClient");
    QString sIp=settings.value(CONFIG_UPDATE_IP,"127.0.0.1").toString();
    QString sPort=settings.value(CONFIG_UPDATE_PORT,"60000").toString();
    QString sUser=settings.value(CONFIG_UPDATE_USER,"").toString();
    QString sPassword=settings.value(CONFIG_UPDATE_PASS,"").toString();
    QString sPath=settings.value(CONFIG_UPDATE_PATH,"").toString();
    QString sOldVer=settings.value("version","").toString();
    //done ftp
    CFtpTransfer *ftpTransfer=new CFtpTransfer(this);
    ftpTransfer->setUrl(sIp,sPort,sUser,sPassword);
    ftpTransfer->downloadFile(sPath+"/version.ini");

    //get version.ini
    QSettings settingsVersion(VERSION_PATH, QSettings::IniFormat);
    settingsVersion.setIniCodec("UTF-8");
    settingsVersion.beginGroup("VERSION");
    QString sVer=settingsVersion.value("version","").toString();
    m_sBRclient=BRC_PATH+sVer;

    if(sVer!=sOldVer)
    {
        settings.setValue("version",sVer);
        ftpTransfer->downloadDir(sPath);
    }
    ui->lbVersion->setText("v"+sVer);

    ui->dialogUpdate->hide();

}

void Widget::checkBarcode()
{
    m_cUsb.connect(&m_cUsb,SIGNAL(singalDetectBarcode(bool)),this,SLOT(slotDetectBarcode(bool)));
    m_cUsb.start();
}

void Widget::slotDetectBarcode(bool bHas)
{
    QString st=" none ";
    if(bHas)
        st="has ";
    qDebug()<<"barcode reader : "+st;

    if(bHas)
    {
        if(m_brc.isOpen())
            m_brc.close();

        m_brc.startDetached("sudo chmod +x "+m_sBRclient);
        QElapsedTimer timer;
        timer.start();
        while(timer.elapsed()<1000)
        {

        }
        m_brc.close();
        m_brc.start(m_sBRclient);
    }
    else
    {
        if(m_brc.isOpen())
            m_brc.close();
    }
}
