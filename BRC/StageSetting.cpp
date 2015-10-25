#include "StageSetting.h"
#include "ui_StageSetting.h"

StageSetting::StageSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageSetting)
{
    ui->setupUi(this);

    ui->vNetSetting0->m_btn->setObjectName("0");
    ui->vNetSetting1->m_btn->setObjectName("1");
    ui->vNetSetting2->m_btn->setObjectName("2");
    ui->vNetSetting3->m_btn->setObjectName("3");
    connect(ui->vNetSetting0->m_btn,SIGNAL(released()),this,SLOT(slotClicked()));
    connect(ui->vNetSetting1->m_btn,SIGNAL(released()),this,SLOT(slotClicked()));
    connect(ui->vNetSetting2->m_btn,SIGNAL(released()),this,SLOT(slotClicked()));
    connect(ui->vNetSetting3->m_btn,SIGNAL(released()),this,SLOT(slotClicked()));


}

StageSetting::~StageSetting()
{
    delete ui;
}

void StageSetting::slotClicked()
{
    QPushButton *btn=dynamic_cast<QPushButton*>(sender());
    emit clicked(ui->stackedWidget->currentIndex(),btn->objectName());
}
