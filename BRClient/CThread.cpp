#include "CThread.h"

CThread::CThread(QObject *parent) :QThread(parent)
{

}

CThread::~CThread()
{
    qDebug()<<"Destory thread ";
   if (thread()->isRunning())
   {
       thread()->wait(200);
       thread()->quit();
   }
}


QString CThread::eventCodeToString(int code)
{
    switch (code)
    {
    case KEY_0 :
        return "0";
    case KEY_1 :
        return "1";
    case KEY_2 :
        return "2";
    case KEY_3 :
        return "3";
    case KEY_4 :
        return "4";
    case KEY_5 :
        return "5";
    case KEY_6 :
        return "6";
    case KEY_7 :
        return "7";
    case KEY_8 :
        return "8";
    case KEY_9 :
        return "9";
    case KEY_A :
        return "a";
    case KEY_B :
        return "b";
    case KEY_C :
        return "c";
    case KEY_D :
        return "d";
    case KEY_E :
        return "e";
    case KEY_F :
        return "f";
    case KEY_G :
        return "g";
    case KEY_H :
        return "h";
    case KEY_I :
        return "i";
    case KEY_J :
        return "j";
    case KEY_K :
        return "k";
    case KEY_L :
        return "l";
    case KEY_M :
        return "m";
    case KEY_N :
        return "n";
    case KEY_O :
        return "o";
    case KEY_P :
        return "p";
    case KEY_Q :
        return "q";
    case KEY_R :
        return "r";
    case KEY_S :
        return "s";
    case KEY_T :
        return "t";
    case KEY_U :
        return "u";
    case KEY_V :
        return "v";
    case KEY_W :
        return "w";
    case KEY_X :
        return "x";
    case KEY_Y :
        return "y";
    case KEY_Z :
        return "z";
    default:
        return "-";
    }
}
int CThread::openDev(QString dev_name)
{
    return open(qPrintable(dev_name), O_RDONLY|O_NONBLOCK);
}

void CThread::readDevEvent(int fd, int index, QString *text)
{
    //this->thread()->msleep(5);
    struct input_event ev;
    read(fd, &ev, sizeof (struct input_event));
    //qDebug() << "ev.value=" << ev.value << "ev.type=" << ev.type;
    if (ev.value != ' ' && ev.value == 1 && ev.type == 1) {
        if (eventCodeToString(ev.code) != "-") {
            *text += eventCodeToString(ev.code);
        }
        if (eventCodeToString(ev.code) == "-") {
            emit signalKey(index, *text);
            qDebug() << qPrintable(*text);
            *text = "";
        }
    }
}

void CThread::setIndex(int index)
{
    m_iIndex = index;
}

int CThread::getDevList()
{
    m_devList.clear();
    QDir dir("/dev/input/by-path/");
    QFileInfoList dev_list = dir.entryInfoList();
    int idx = 0;

    // Get all keyboard device name
    dir.setFilter(QDir::Dirs);
    do {
        QFileInfo file_info = dev_list.at(idx);
        if (file_info.fileName().endsWith("kbd")) {
            m_devList << file_info.fileName();
            //qDebug() << qPrintable(file_info.fileName());
        }
        idx++;
    } while (idx < dev_list.size());

    return m_devList.length();
}

void CThread::setDevNumber(int dev_num)
{
    m_iDevNumber = dev_num;
}

void CThread::setDev(int index)
{
    //qDebug()<<"index : "<<index<<"  ,list len : "<<kbd_list.length();
    //index=        qBound(0,index,kbd_list.length()-1);

    if (index <= m_devList.length()-1) {
        m_sPath = "/dev/input/by-path/"+m_devList.at(index);
        //qDebug() << m_sPath;
    } else {
        m_sPath = "";
    }
}

void CThread::run()
{
    //qDebug()<<"run go ";
    int fd;
    QString text = "";

    fd = openDev(m_sPath);
    if (fd == -1) {
        emit signalKey(m_iIndex, "N/A");
    } else {
        emit signalKey(m_iIndex, "Please scan!");
    }
    qDebug()<< "m_iIndex" << m_iIndex << ", m_sPath=" << m_sPath;

    while(1) {
        getDevList();
        if (m_devList.length() != m_iDevNumber)
        {
            setDev(m_iIndex);
            fd = openDev(m_sPath);
            if (fd == -1) {
                emit signalKey(m_iIndex, "N/A");
            } else {
                emit signalKey(m_iIndex, "Please scan!");
            }
            m_iDevNumber = m_devList.length();
            qDebug()<< "m_iIndex" << m_iIndex << ", m_sPath=" << m_sPath;
        }
        QFileInfo device(m_sPath);
        //read device event
        readDevEvent(fd, m_iIndex, &text);
    }
}
