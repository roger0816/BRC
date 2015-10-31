#include "Vinput.h"
#include "ui_Vinput.h"

Vinput::Vinput(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Vinput)
{
    ui->setupUi(this);
    setObjectName("Vinput");

}

Vinput::~Vinput()
{
    delete ui;
}

void Vinput::setAlignment(Qt::Alignment alignment)
{
    ui->label->setAlignment(alignment);
}

QString Vinput::text()
{
    return ui->label->text();
}

void Vinput::mouseReleaseEvent(QMouseEvent *)
{
    GLOBAL().signalOpenKeybord(ui->label);
}

void Vinput::setText(const QString &text)
{
    ui->label->setText(text);
}

QLabel* Vinput::label()
{
    return ui->label;
}
