#ifndef LISTENKEYEVENT_H
#define LISTENKEYEVENT_H

#include <QObject>
#include "CThread.h"

class ListenKeyEvent : public QObject
{
    Q_OBJECT
public:
    explicit ListenKeyEvent(QObject *parent = 0);
     QList<CThread*> m_listThread;
    ~ListenKeyEvent();

signals:
    void signalKey(int, QString);
public slots:
};

#endif // LISTENKEYEVENT_H
