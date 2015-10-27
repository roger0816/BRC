#include "Vkeybord.h"
#include "ui_Vkeybord.h"

Vkeybord::Vkeybord(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Vkeybord)
{
    ui->setupUi(this);

    m_listNumWord<<ui->btn1<<ui->btn2<<ui->btn3<<ui->btn4<<ui->btn5<<ui->btn6<<ui->btn7<<ui->btn8<<ui->btn9<<ui->btn0;

    m_listEnWord<<ui->a<<ui->b<<ui->c<<ui->d<<ui->e<<ui->f<<ui->g<<ui->h<<ui->i<<ui->j<<ui->k<<ui->l<<ui->m
               <<ui->n<<ui->o<<ui->p<<ui->q<<ui->r<<ui->s<<ui->t<<ui->u<<ui->v<<ui->w<<ui->x<<ui->y<<ui->z;

    m_listSpecailWord<<ui->space<<ui->back;

    for(int i=0;i<m_listEnWord.length();i++)
    {
        QString sUpper;
        QString sLower;
        sLower=m_listEnWord[i]->objectName();
        sUpper=m_listEnWord[i]->objectName().toUpper();
        //        QStringList listText;
        //        listText<<sLower<<sUpper;
        //        m_listEnWord[i]->setListText(listText);
        m_listEnWord[i]->setText(sLower);
        connect(m_listEnWord[i],SIGNAL(clicked()),this,SLOT(slotInput()));
    }

    for(int j=0;j<m_listNumWord.length();j++)
    {
        int iNum=j+1;
        if(iNum>9)
            iNum=0;
        QString st=QString::number(iNum);
        qDebug()<<iNum<<" , "<<st;
        m_listNumWord[j]->setListText(QStringList(st));
        connect(m_listNumWord[j],SIGNAL(clicked()),this,SLOT(slotInput()));
    }

    for(int k=0;k<m_listSpecailWord.length();k++)
    {
        connect(m_listEnWord[k],SIGNAL(clicked()),this,SLOT(slotInput()));
    }
    ui->back->setText("back");

    connect(ui->btnClose,SIGNAL(released()),this,SLOT(hide()));
    connect(ui->btnShift,SIGNAL(clicked(bool)),this,SLOT(slotChangeUpper(bool)));

}

Vkeybord::~Vkeybord()
{
    delete ui;
}

void Vkeybord::slotInput()
{
    ItemKey *key=dynamic_cast<ItemKey*>(sender());

    QString sOld=ui->lineEdit->text();

    QString sInput=key->text();


    if(sInput.toLower()=="space" || sInput==" ")
        sInput=" ";

    if(sInput.toLower()=="back")
    {
        ui->lineEdit->setText(sOld.left(sOld.length()-1));
    }
    else
    {
        ui->lineEdit->setText(sOld+sInput);
    }
}

void Vkeybord::slotChangeUpper(bool)
{
    bool bEnable=ui->btnShift->isChecked();
    for(int i=0;i<m_listEnWord.length();i++)
    {
        QString sText=m_listEnWord[i]->text();

        if(bEnable)
            sText=sText.toUpper();
        else
            sText=sText.toLower();

        m_listEnWord[i]->setText(sText);
    }
}
