#include "StageBarcode.h"
#include "ui_StageBarcode.h"

StageBarcode::StageBarcode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageBarcode)
{
    ui->setupUi(this);
    m_sBarcodeString="";
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
    connect(ui->vBarcode2->m_btn,SIGNAL(released()),this,SLOT(slotClicked()));
    connect(ui->vBarcode3->m_btn,SIGNAL(released()),this,SLOT(slotClicked()));

}

void StageBarcode::keyPressEvent(QKeyEvent *e)
{
  //  qDebug()<<"barcode : "<<e->key();

    QChar c(e->key());
    QString st(c);

    qDebug()<<" char : "<<st<<" ,key : "<<e->key();

    if(e->key()!=16777251 && e->key()!=16777220)
    {
        QChar c(e->key());
        QString st(c);

        qDebug()<<" char : "<<st<<" ,key : "<<e->key();
        m_sBarcodeString.append(st);

    }
    else if(e->key()==16777220)
    {
        //   qDebug()<<" string : "<<m_sBarcodeString<<" ,key : "<<e->key();
        loadBarcode(m_sBarcodeString);
        m_sBarcodeString.clear();
    }
    // ui->vBarcode0->m_lb0->setText(ui->vBarcode0->m_lb0->text()+st);
}

void StageBarcode::loadBarcode(QString st)
{
    qDebug()<<"get barcode : "<<st<<" ,length: "<<st.length();
    //  st=st.replace(" ","");
    if(st.length()==10)
    {
        qDebug()<<"barcode is member";
        ui->vBarcode0->m_lb0->setText(st);
    }
    else if(st.length()>10)
    {
        qDebug()<<"barcode is product";
        ui->vBarcode0->m_lb1->setText(st);
    }
    else
    {
        qDebug()<<"barcode error ";
    }

    qDebug()<<" barcode finish ";
}

void StageBarcode::slotClicked()
{
    QPushButton *btn=dynamic_cast<QPushButton*>(sender());
    if(btn==ui->btnSub0)
        emit clicked(-1,btn->objectName());
    emit clicked(ui->stackedWidget->currentIndex(),btn->objectName());
}

