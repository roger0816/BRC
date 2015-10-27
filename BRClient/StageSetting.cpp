#include "StageSetting.h"
#include "ui_StageSetting.h"

StageSetting::StageSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageSetting)
{
    ui->setupUi(this);
    ui->btnEn->connect(ui->btnEn,SIGNAL(released()),this,SLOT(slotLanguageClicked()));
    ui->btnTw->connect(ui->btnTw,SIGNAL(released()),this,SLOT(slotLanguageClicked()));
    ui->btnCn->connect(ui->btnCn,SIGNAL(released()),this,SLOT(slotLanguageClicked()));

}

StageSetting::~StageSetting()
{
    delete ui;
}

void StageSetting::slotLanguageClicked()
{
    QPushButton *btn=dynamic_cast<QPushButton*>(sender());
    ui->btnCn->setChecked(false);
    ui->btnEn->setChecked(false);
    ui->btnTw->setChecked(false);
    btn->setChecked(true);
}

void StageSetting::showEvent(QShowEvent *)
{

    ui->txtMachineId->setText(GLOBAL().m_config.sMachineId);
    ui->txtIp->setText(GLOBAL().m_config.sIp);
    ui->txtPort->setText(GLOBAL().m_config.sPort);

    QString sLanguage=GLOBAL().m_config.sLanguage;

    ui->btnCn->setChecked(false);
    ui->btnEn->setChecked(false);
    ui->btnTw->setChecked(false);

    if(sLanguage=="En")
    {
        ui->btnEn->setChecked(true);
    }
    else if(sLanguage=="Cn")
    {
        ui->btnCn->setChecked(true);
    }
    else
    {
        ui->btnTw->setChecked(true);
    }

}

void StageSetting::resizeEvent(QResizeEvent *)
{



}


void StageSetting::on_btnCancel_released()
{
    clicked(StageIdx::_barcode);
}

void StageSetting::on_btnCheck_released()
{
    clicked(StageIdx::_barcode);
}
