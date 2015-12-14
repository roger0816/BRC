#include "StageSetting.h"
#include "ui_StageSetting.h"

StageSetting::StageSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageSetting)
{
    ui->setupUi(this);
    setObjectName("StageSettiong");
    ui->btnEn->connect(ui->btnEn,SIGNAL(released()),this,SLOT(slotLanguageClicked()));

    ui->btnTw->connect(ui->btnTw,SIGNAL(released()),this,SLOT(slotLanguageClicked()));

    ui->btnCn->connect(ui->btnCn,SIGNAL(released()),this,SLOT(slotLanguageClicked()));

    m_sNowLanguage=LANGUAGE_CN;


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
    //set language
    QString sLanguage=GLOBAL().m_config.sLanguage;
    QString sPath=":/language/translations/";//cn.qm";
    sPath=sPath+sLanguage.toLower()+".qm";
    QTranslator qtTranslator;
    qtTranslator.load(sPath);
    QApplication::installTranslator(&qtTranslator);
    GLOBAL().m_sNowTransPath=sPath;
    ui->retranslateUi(this);

    //set label
    ui->lbM->setText(GLOBAL().m_config.sMachineId);
    qDebug()<<"machineidAA : "<<GLOBAL().m_config.sMachineId;
    ui->txtIp->setText(GLOBAL().m_config.sIp);
    ui->txtPort->setText(GLOBAL().m_config.sPort);
    ui->txtUpdateIp->setText(GLOBAL().m_config.sUpdateIp);
    ui->txtUpdatePort->setText(GLOBAL().m_config.sUpdatePort);
    ui->txtUpdateUser->setText(GLOBAL().m_config.sUpdateUser);
    ui->txtUpdatePass->setText(GLOBAL().m_config.sUpdatePass);
    ui->txtUpdatePath->setText(GLOBAL().m_config.sUpdatePath);

    //set button select
    ui->btnCn->setChecked(false);
    ui->btnEn->setChecked(false);
    ui->btnTw->setChecked(false);
    if(sLanguage==LANGUAGE_EN)
    {
        ui->btnEn->setChecked(true);
    }
    else if(sLanguage==LANGUAGE_CN)
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
    QString sLanguage=LANGUAGE_TW;
    if(ui->btnCn->isChecked())
        sLanguage=LANGUAGE_CN;
    else if(ui->btnEn->isChecked())
        sLanguage=LANGUAGE_EN;

    if(sLanguage!=m_sNowLanguage)
    {
        qDebug()<<"change "<<sLanguage;
        m_sNowLanguage=sLanguage;
        QString sPath=":/language/translations/";//cn.qm";
        sPath=sPath+m_sNowLanguage.toLower()+".qm";
        QTranslator qtTranslator;
        qtTranslator.load(sPath);
        QApplication::installTranslator(&qtTranslator);
        GLOBAL().m_sNowTransPath=sPath;
        ui->retranslateUi(this);

    }



    GLOBAL().writeConfig(CONFIG_MACHINE_ID,ui->lbM->text());
    GLOBAL().writeConfig(CONFIG_IP,ui->txtIp->text());
    GLOBAL().writeConfig(CONFIG_PORT,ui->txtPort->text());
    GLOBAL().writeConfig(CONFIG_LANGUAGE,sLanguage);
    GLOBAL().writeConfig(CONFIG_UPDATE_IP,ui->txtUpdateIp->text());
    GLOBAL().writeConfig(CONFIG_UPDATE_PORT,ui->txtUpdatePort->text());
    GLOBAL().writeConfig(CONFIG_UPDATE_USER,ui->txtUpdateUser->text());
    GLOBAL().writeConfig(CONFIG_UPDATE_PASS,ui->txtUpdatePass->text());
    GLOBAL().writeConfig(CONFIG_UPDATE_PATH,ui->txtUpdatePath->text());

    clicked(StageIdx::_barcode);
}


