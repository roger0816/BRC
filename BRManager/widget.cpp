#include "widget.h"
#include "ui_widget.h"



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_iSec=-1;

    m_sBRclient=BRC_PATH;
    //  QObject::startTimer(1000);
    m_cUsb.connect(&m_cUsb,SIGNAL(singalDetectBarcode(bool)),this,SLOT(slotDetectBarcode(bool)));
    m_cUsb.start();

    this->on_btn_clicked();

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

void Widget::on_btn_clicked()
{



    QSettings settings(CONFIG_PATH, QSettings::IniFormat);
    settings.setIniCodec("UTF-8");
    settings.beginGroup("BRClient");
    QString sIp=settings.value(CONFIG_UPDATE_IP,"127.0.0.1").toString();
    QString sPort=settings.value(CONFIG_UPDATE_PORT,"60000").toString();

    CFtpTransfer *ftpTransfer=new CFtpTransfer(this);
    ftpTransfer->setUrl(sIp,"brc",sPort);
    ftpTransfer->downloadDir("");

    QSettings settingsVersion(VERSION_PATH, QSettings::IniFormat);
    settingsVersion.setIniCodec("UTF-8");
    settingsVersion.beginGroup("VERSION");
    QString sVer=settingsVersion.value("version","").toString();
    m_sBRclient=BRC_PATH+sVer;

    settings.setValue("version","v"+sVer);


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
