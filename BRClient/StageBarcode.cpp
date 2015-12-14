#include "StageBarcode.h"
#include "ui_StageBarcode.h"


StageBarcode::StageBarcode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageBarcode)
{
    ui->setupUi(this);

    setObjectName("StageBarcode");

    m_sBarcodeString="";

    m_bIsLock=false;

    setUi();

}

StageBarcode::~StageBarcode()
{
    delete ui;
}

void StageBarcode::setUi()
{

    connect(ui->btnSub0,SIGNAL(released()),this,SLOT(slotClicked()));

    connect(ui->vBarcode0->m_btn,SIGNAL(released()),this,SLOT(slotClicked()));

    connect(ui->vBarcode1->m_btn,SIGNAL(released()),this,SLOT(slotClicked()));

   // connect(ui->vBarcode2->m_btn,SIGNAL(released()),this,SLOT(slotClicked()));

    m_listItemBarcode.append(ui->vBarcode0);

    m_listItemBarcode.append(ui->vBarcode1);


    m_listenKey=new ListenKeyEvent(this);

    connect(m_listenKey,SIGNAL(signalKey(int,QString)),this,SLOT(slotGetKey(int,QString)));

}

void StageBarcode::slotClicked()
{

    QPushButton *btn=dynamic_cast<QPushButton*>(sender());

    if(btn==ui->btnSub0)
        emit clicked(StageIdx::_setting,btn->objectName());
    else if(btn==ui->vBarcode0->m_btn)
        slotToTcp(m_listItemBarcode.indexOf(ui->vBarcode0));
    else if(btn==ui->vBarcode1->m_btn)
        slotToTcp(m_listItemBarcode.indexOf(ui->vBarcode1));

}

void StageBarcode::slotToTcp(int iIdx)
{

    QString sOut;

    int iTcpRe=GLOBAL().tcpSend(iIdx,m_listItemBarcode[iIdx]->m_lb0->text(),m_listItemBarcode[iIdx]->m_lb1->text(),sOut);

#if EMBEDDED_LINUX
    QSound::play(":/res/sound/NOTIFY.wav");
    qDebug()<<"end play";
#endif

    if(iTcpRe==0 && sOut.left(1).toLower()=="0")
    {
        m_listItemBarcode[iIdx]->m_btn->setText("PASS");
        m_listItemBarcode[iIdx]->m_lb2->setText(sOut);
    }
    else
    {
        m_listItemBarcode[iIdx]->m_btn->setText("ERROR");
        m_listItemBarcode[iIdx]->m_lb2->setText(sOut);
    }

   // ui->label->setText(sOut);
}

void StageBarcode::showEvent(QShowEvent *)
{

    QTranslator qtTranslator;

    qtTranslator.load(GLOBAL().m_sNowTransPath);

    QApplication::installTranslator(&qtTranslator);

    ui->retranslateUi(this);

    ui->lbVersion->setText(GLOBAL().m_sVer);

}

void StageBarcode::slotGetKey(int iDev, QString sKey)
{
    qDebug()<<"get type: "+QString::number(iDev)+" ,Key : "+sKey;

    qBound(0,iDev,m_listItemBarcode.length()-1);

    if(sKey.length()==10)
    {

        qDebug()<<"barcode is member";
        m_listItemBarcode[iDev]->m_lb0->setText(sKey);

    }
    else if(sKey.length()>10)
    {

        qDebug()<<"barcode is product";
        m_listItemBarcode[iDev]->m_lb1->setText(sKey);

        slotToTcp(iDev);

    }
    else
    {
        qDebug()<<"barcode error ";
    }

}
