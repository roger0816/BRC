#ifndef CTHREAD_H
#define CTHREAD_H


#include "Global.h"
#if EMBEDDED_LINUX
#include <linux/input.h>
#endif

#include<fcntl.h>
#include <unistd.h>
#include <QDir>
#include <QObject>
#include <QThread>
#include <QDebug>

#define INPUT_DEV_DIR "/dev/input/by-path/"
#define SCANNER_LINK_DIR "/tmp/barcode-scanner/"

class CThread :public QThread
{
    Q_OBJECT
public:
    explicit  CThread(QObject *parent = 0);
    ~CThread();

    int m_iIndex;

    int m_iDevNumber;

    bool m_bUpperCase;

    QString m_sPath;

    QStringList m_devList;

    QStringList m_scannerList;

    QStringList m_allScannerList;

    QString eventCodeToString(int code);

    int openDev(QString dev_name);

    void readDevEvent(int fd, int index, QString *text);

    void setIndex(int index);

    void setDev(int index);

    int getDevList();

    int getScannerList();

    void createScannerLink();

    bool isBarcodeScanner(QString devName);

    void removeOldScannerLink();

    void setDevNumber(int dev_num);

    void run();

signals:
    void signalKey(int, QString);
    void signalDevNum(int);
};





#endif // CTHREAD_H
