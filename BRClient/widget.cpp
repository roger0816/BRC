#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    qDebug()<<"BRC1 start ";
    GLOBAL();
    ui->setupUi(this);

    //ui->vTest->setFocus();
    ui->vSetting->connect(ui->vSetting,SIGNAL(clicked(int,QString)),this,SLOT(slotSetting(int,QString)));
   // setWindowState(Qt::WindowFullScreen);
    ui->vBarcode->connect(ui->vBarcode,SIGNAL(clicked(int,QString)),this,SLOT(slotSetting(int,QString)));

    ui->stackedWidget->move(0,0);
    ui->stackedWidget->resize(GLOBAL().m_SizeWindow);

    m_keybord=new Vkeybord(this);
    m_keybord->setGeometry(0,0,GLOBAL().m_SizeWindow.width(),GLOBAL().m_SizeWindow.height());
    connect(&GLOBAL(),SIGNAL(signalOpenKeybord(QLabel*)),m_keybord,SLOT(slotOpenKeyBord(QLabel*)));
    m_keybord->hide();

    ui->stackedWidget->setCurrentIndex(StageIdx::_barcode);

    QString m_sPath=":/language/translations/tw.qm";

   // ui->stackedWidget->setCurrentIndex(StageIdx::_test);


}

Widget::~Widget()
{
    delete ui;
}



void Widget::slotSetting(int iPageIdx,QString)
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


