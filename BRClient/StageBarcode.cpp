﻿#include "StageBarcode.h"
#include "ui_StageBarcode.h"


StageBarcode::StageBarcode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageBarcode)
{
    ui->setupUi(this);
    setObjectName("StageBarcode");
    m_sBarcodeString="";
    setUi();
    m_bIsLock=false;

//    m_listMember.append(ui->vBarcode0->m_lb0);
//    m_listMember.append(ui->vBarcode1->m_lb0);
//    m_listMember.append(ui->vBarcode2->m_lb0);
// //   m_listMember.append(ui->vBarcode3->m_lb0);

//    m_listProduct.append(ui->vBarcode0->m_lb1);
//    m_listProduct.append(ui->vBarcode1->m_lb1);
//    m_listProduct.append(ui->vBarcode2->m_lb1);
//   // m_listProduct.append(ui->vBarcode3->m_lb1);

    m_listItemBarcode.append(ui->vBarcode0);
    m_listItemBarcode.append(ui->vBarcode1);


    m_listenKey=new ListenKeyEvent(this);

    connect(m_listenKey,SIGNAL(signalKey(int,QString)),this,SLOT(slotGetKey(int,QString)));



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
    connect(ui->vBarcode2->m_btn,SIGNAL(released()),this,SLOT(slotClicked()));
   // connect(ui->vBarcode3->m_btn,SIGNAL(released()),this,SLOT(slotClicked()));



}

void StageBarcode::keyPressEvent(QKeyEvent *e)
{
  //  qDebug()<<"barcode : "<<e->key();

//    if(m_bIsLock)
//        return;

//    m_bIsLock=true;

//    QChar c(e->key());
//    QString st(c);

//    qDebug()<<" char : "<<st<<" ,key : "<<e->key();

//    if(e->key()!=16777251 && e->key()!=16777220)
//    {
//        QChar c(e->key());
//        QString st(c);

//        qDebug()<<" char : "<<st<<" ,key : "<<e->key();
//        m_sBarcodeString.append(st);

//    }
//    else if(e->key()==16777220)
//    {
//        //   qDebug()<<" string : "<<m_sBarcodeString<<" ,key : "<<e->key();
//        loadBarcode(m_sBarcodeString);
//        m_sBarcodeString.clear();
//    }
//      m_bIsLock=false;

}

//void StageBarcode::loadBarcode(QString st)
//{
//    qDebug()<<"get barcode : "<<st<<" ,length: "<<st.length();
//    //  st=st.replace(" ","");
//    if(st.length()==10)
//    {
//        qDebug()<<"barcode is member";
//        ui->vBarcode0->m_lb0->setText(st);
//    }
//    else if(st.length()>10)
//    {
//        qDebug()<<"barcode is product";
//        ui->vBarcode0->m_lb1->setText(st);
//        slotToTcp();
//    }
//    else
//    {
//        qDebug()<<"barcode error ";
//    }

//    qDebug()<<" barcode finish ";

//}

void StageBarcode::slotClicked()
{
    QPushButton *btn=dynamic_cast<QPushButton*>(sender());
    if(btn==ui->btnSub0)
        emit clicked(StageIdx::_setting,btn->objectName());
   // emit clicked(ui->stackedWidget->currentIndex(),btn->objectName());
    else if(btn==ui->vBarcode0->m_btn)
        slotToTcp(m_listItemBarcode.indexOf(ui->vBarcode0));
    else if(btn==ui->vBarcode1->m_btn)
        slotToTcp(m_listItemBarcode.indexOf(ui->vBarcode1));
    else if(btn==ui->vBarcode2->m_btn)
        slotToTcp(m_listItemBarcode.indexOf(ui->vBarcode2));

}

void StageBarcode::slotToTcp(int iIdx)
{
    QString sOut;
    int iTcpRe=GLOBAL().tcpSend(m_listItemBarcode[iIdx]->m_lb0->text(),m_listItemBarcode[iIdx]->m_lb1->text(),sOut);

    QSound::play(":/res/sound/NOTIFY.wav");
    qDebug()<<"end play";

    if(iTcpRe==0 && sOut.left(2).toLower()=="ok")
    {
        m_listItemBarcode[iIdx]->m_btn->setText("OK");
    }
    else
    {
        m_listItemBarcode[iIdx]->m_btn->setText("ERROR");
    }
    ui->label->setText(sOut);
}

void StageBarcode::showEvent(QShowEvent *)
{
    QTranslator qtTranslator;
    qtTranslator.load(GLOBAL().m_sNowTransPath);
    QApplication::installTranslator(&qtTranslator);
    ui->lbVersion->setText(GLOBAL().m_sVer);
    ui->retranslateUi(this);

}

void StageBarcode::slotGetKey(int iDev, QString sKey)
{
    qDebug()<<"get type: "+QString::number(iDev)+" ,Key : "+sKey;

    qBound(0,iDev,m_listItemBarcode.length());

    if(sKey.length()==10)
    {
        qDebug()<<"barcode is member";
       // m_listMember[iDev]->setText(sKey);
        m_listItemBarcode[iDev]->m_lb0->setText(sKey);
    }
    else if(sKey.length()>10)
    {
        qDebug()<<"barcode is product";
       // m_listProduct[iDev]->setText(sKey);
        m_listItemBarcode[iDev]->m_lb1->setText(sKey);
        slotToTcp(iDev);
    }
    else
    {
        qDebug()<<"barcode error ";
    }

}
