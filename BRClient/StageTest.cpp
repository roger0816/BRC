#include "StageTest.h"
#include "ui_StageTest.h"

StageTest::StageTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageTest)
{
    ui->setupUi(this);
    setObjectName("setgeTest");
}

StageTest::~StageTest()
{
    delete ui;
}

void StageTest::keyPressEvent(QKeyEvent *e)
{
    qDebug()<<"AA"<<e->key();
}

void StageTest::on_pushButton_clicked()
{
   //QSound::play(":/sound/res/sound/REMINDER.wav");
}

void StageTest::on_pushButton_2_clicked()
{

   // QSound::play(":/sound/res/sound/surprise.mp3");
}

void StageTest::on_pushButton_3_clicked()
{
    GLOBAL().tcpSend("AAA","BBB");
}
