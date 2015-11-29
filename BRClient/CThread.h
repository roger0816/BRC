#ifndef CTHREAD_H
#define CTHREAD_H
#if Q_OS_LINU
#include <linux/input.h>
#endif
#include<fcntl.h>
#include <unistd.h>
#include <QDir>
#include <QObject>
#include <QThread>
#include <QDebug>

class CThread :public QThread
{
    Q_OBJECT
public:
    explicit  CThread(QObject *parent = 0);
    ~CThread();

    int m_iIndex;

    int m_iDevNumber;

    QString m_sPath;

    QStringList m_devList;

    QString eventCodeToString(int code);

    int openDev(QString dev_name);

    void readDevEvent(int fd, int index, QString *text);

    void setIndex(int index);

    void setDev(int index);

    int getDevList();

    void setDevNumber(int dev_num);

    void run();

signals:
    void signalKey(int, QString);
};





#endif // CTHREAD_H
