﻿#ifndef STAGEBARCODE_H
#define STAGEBARCODE_H

#include <QWidget>
#include <QDebug>
#include "Global.h"
#include <QKeyEvent>
#include <QLabel>
#include <QPushButton>
#if EMBEDDED_LINUX
#include <QSound>
#endif
#include "Vinput.h"
#include "ItemBarcode.h"
#include "ListenKeyEvent.h"
namespace Ui {
class StageBarcode;
}

class StageBarcode : public QWidget
{
    Q_OBJECT

public:
    explicit StageBarcode(QWidget *parent = 0);
    ~StageBarcode();
    QPushButton *m_btnSub0;

private:
    Ui::StageBarcode *ui;
    ListenKeyEvent *m_listenKey;
    QString m_sBarcodeString;

//    QList<Vinput*> m_listProduct;
//    QList<Vinput*> m_listMember;
    QList<ItemBarcode*> m_listItemBarcode;


    void setUi();

    void showEvent(QShowEvent *);
    bool m_bIsLock;
    //void loadBarcode(QString st);
signals:
    void clicked(int,QString);
private slots:
    void slotClicked();
    void slotGetKey(int iDev, QString sKey);
    void slotToTcp(int iIdx);

};

#endif // STAGEBARCODE_H
