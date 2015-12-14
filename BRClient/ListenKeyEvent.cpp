#include "ListenKeyEvent.h"
using namespace  std;
ListenKeyEvent::ListenKeyEvent(QObject *parent) : QObject(parent)
{
#if EMBEDDED_LINUX
    CThread *thread=new CThread(this);
    thread->setIndex(99);
    thread->removeOldScannerLink();
    thread->start();
    m_listThread.append(thread);

    for(int i=0;i<4;i++)
    {
        CThread *thread=new CThread(this);

        thread->setIndex(i);
        thread->setDevNumber(thread->getScannerList());
        thread->setDev(i);
        connect(thread,SIGNAL(signalKey(int,QString)),this,SIGNAL(signalKey(int,QString)));
        connect(thread,SIGNAL(signalDevNum(int)),this,SIGNAL(signalDevNum(int)));

        thread->start();

        m_listThread.append(thread);
    }


#endif

    // Thread
    //    thread t[kbd_list.size()];
    //    for (int i = 0;i < kbd_list.size();i++) {
    //        cout << qPrintable(dir.absolutePath()+"/"+kbd_list.at(i)) << endl;
    //        t[i] = thread(multi_kbd, dir.absolutePath()+"/"+kbd_list.at(i), i+1);
    //    }
}

ListenKeyEvent::~ListenKeyEvent()
{
    //        for(int i=0;i<m_listThread.length();i++)
    //        {
    //            if(m_listThread[i]->isRunning())
    //            {
    //                m_listThread[i]->disconnect();
    //                //m_listThread[i]->wait(300);
    //                m_listThread[i]->quit();
    ////                if(!m_listThread[i]->wait(300)) //Wait until it actually has terminated (max. 3 sec)
    ////                {
    ////                    m_listThread[i]->terminate(); //Thread didn't exit in time, probably deadlocked, terminate it!
    ////                    //m_listThread[i]->wait(); //We have to wait again here!
    ////                }
    //            }
    //        }
}

