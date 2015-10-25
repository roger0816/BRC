#include "widget.h"
#include "ui_widget.h"



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_iSec=-1;

  //  QObject::startTimer(1000);
    m_cUsb.connect(&m_cUsb,SIGNAL(singalDetectBarcode(bool)),this,SLOT(slotDetectBarcode(bool)));
    m_cUsb.start();

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
    qDebug()<<"AA: "<<m_brc.isOpen();

    if(!m_brc.isOpen())
    {
        m_brc.start(BRC_PATH);

    }
    else
    {
        m_brc.close();
    }




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
        m_brc.start(BRC_PATH);
    }
    else
    {
        if(m_brc.isOpen())
            m_brc.close();
    }
}
