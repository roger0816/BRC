#ifndef STAGEBARCODE_H
#define STAGEBARCODE_H

#include <QWidget>
#include <QDebug>
#include <QKeyEvent>
#include <QLabel>
#include <QPushButton>
#include "Vinput.h"
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

    QList<Vinput*> m_listProduct;
    QList<Vinput*> m_listMember;

    void setUi();
    void keyPressEvent(QKeyEvent *e);

    void showEvent(QShowEvent *);
    bool m_bIsLock;
    //void loadBarcode(QString st);
signals:
    void clicked(int,QString);
private slots:
    void slotClicked();
    void slotGetKey(int iDev, QString sKey);
    void slotToTcp();

};

#endif // STAGEBARCODE_H
