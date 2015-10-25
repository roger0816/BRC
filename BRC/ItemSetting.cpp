#include "ItemSetting.h"
#include "ui_ItemSetting.h"

ItemSetting::ItemSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ItemSetting)
{
    ui->setupUi(this);
    m_btn=ui->btn0;
}

ItemSetting::~ItemSetting()
{
    delete ui;
}

void ItemSetting::setLbTitle(QString sBtnTitle, QString sLb0, QString sLb1)
{
    ui->btn0->setText(sBtnTitle);

    if(sLb0!="-1")
        ui->lb0->setText(sLb0);

    if(sLb1!="-1")
        ui->lb1->setText(sLb1);
}
