#include "StageTest.h"
#include "ui_StageTest.h"

StageTest::StageTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageTest)
{
    ui->setupUi(this);
}

StageTest::~StageTest()
{
    delete ui;
}

void StageTest::keyPressEvent(QKeyEvent *e)
{
    qDebug()<<"AA"<<e->key();
}
