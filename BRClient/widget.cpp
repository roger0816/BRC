#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    qDebug()<<"BRC1 start ";
    GLOBAL();
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(StageIdx::_barcode);
    //ui->vTest->setFocus();
    ui->vSetting->connect(ui->vSetting,SIGNAL(clicked(int,QString)),this,SLOT(slotSetting(int,QString)));
   // setWindowState(Qt::WindowFullScreen);
    ui->vBarcode->connect(ui->vBarcode,SIGNAL(clicked(int,QString)),this,SLOT(slotSetting(int,QString)));
}

Widget::~Widget()
{
    delete ui;
}



void Widget::slotSetting(int iPageIdx,QString sObjName)
{
    QWidget *w=dynamic_cast<QWidget*>(sender());

    if(w==ui->vSetting)
    {

        ui->stackedWidget->setCurrentIndex(StageIdx::_barcode);

    }

    else if(w==ui->vBarcode)
    {
        if(iPageIdx==-1)
        {
            ui->stackedWidget->setCurrentIndex(StageIdx::_setting);
        }
    }


    ui->stackedWidget->currentWidget()->setFocus();



}


