#include "ItemBarcode.h"
#include "ui_ItemBarcode.h"

ItemBarcode::ItemBarcode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ItemBarcode)
{
    ui->setupUi(this);
    m_btn=ui->btn0;
    m_lb0=ui->lb0;
    m_lb1=ui->lb1;
}

ItemBarcode::~ItemBarcode()
{
    delete ui;
}

void ItemBarcode::setLbTitle(QString sBtnTitle, QString sLb0, QString sLb1)
{
    ui->btn0->setText(sBtnTitle);

    if(sLb0!="-1")
        ui->lb0->setText(sLb0);

    if(sLb1!="-1")
        ui->lb1->setText(sLb1);
}
