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
#if EMBEDDED_LINUX
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
    case KEY_LEFTSHIFT :
    case KEY_RIGHTSHIFT :
        return "shift";
    case KEY_ENTER :
        return "enter";
#endif
    default:
        return " ";
    }
}
int CThread::openDev(QString dev_name)
{
    return open(qPrintable(dev_name), O_RDONLY|O_NONBLOCK);
}

void CThread::readDevEvent(int fd, int index, QString *text)
{
#if EMBEDDED_LINUX
    //this->thread()->msleep(5);
    struct input_event ev;
    read(fd, &ev, sizeof (struct input_event));
    //qDebug() << "ev.value=" << ev.value << "ev.type=" << ev.type;
    if (ev.value != ' ' && ev.value == 1 && ev.type == 1) {
        qDebug() << "key=" << eventCodeToString(ev.code) << ", code=" << ev.code;
        if (eventCodeToString(ev.code) != "enter") {
            if (eventCodeToString(ev.code) != "shift") {
                if (ev.code <= 2 && ev.code >= 11 &&
                        eventCodeToString(ev.code) == "")
                {
                    m_bUpperCase = false;
                }
                if (m_bUpperCase == true) {
                    *text += eventCodeToString(ev.code).toUpper();
                } else {
                    *text += eventCodeToString(ev.code);
                }
            } else {
                m_bUpperCase = true;
            }
        }
        if (eventCodeToString(ev.code) == "enter") {
            emit signalKey(index, *text);
            qDebug() << qPrintable(*text);
            *text = "";
        }
    }
#endif
}

void CThread::setIndex(int index)
{
    m_iIndex = index;
}

int CThread::getDevList()
{
    m_devList.clear();
    QDir dir(INPUT_DEV_DIR);
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

int CThread::getScannerList()
{
    QDir dir(SCANNER_LINK_DIR);
    if (!dir.exists()) {
        QDir().mkdir(SCANNER_LINK_DIR);
        return 0;
    }
    QFileInfoList dev_list = dir.entryInfoList();
    int idx = 0;

    m_scannerList.clear();
    dir.setFilter(QDir::Dirs);
    do {
        QFileInfo file_info = dev_list.at(idx);
        if (file_info.fileName().endsWith("kbd")) {
            m_scannerList << dev_list.at(idx).fileName();
            //qDebug() << qPrintable(file_info.fileName());
        }
        idx++;
    } while (idx < dev_list.size());

    return m_scannerList.length();
}

void CThread::createScannerLink()
{
    bool scannerAlreadyRegistered;
    int scannerNumber = m_scannerList.length();

    for (int i = 0;i < m_devList.length();i++) {
        //qDebug() << "m_devList.at(" << i << ")=" << m_devList.at(i) << ", isBarcodeScanner=" << isBarcodeScanner(INPUT_DEV_DIR+m_devList.at(i));
        if (isBarcodeScanner(INPUT_DEV_DIR+m_devList.at(i))) {
            scannerAlreadyRegistered = false;
            for (int j = 0;j < m_scannerList.length();j++) {
                //qDebug() << "m_devList.at(" << i << ")=" << m_devList.at(i) << ", m_scannerList.at(" << j << ").mid(2)=" << m_scannerList.at(j).mid(2);
                if (m_devList.at(i) == m_scannerList.at(j).mid(2)) {
                    scannerAlreadyRegistered = true;
                    //break;
                }
            }
            //Create a link to /tmp/bacode-scanner/<link_name> with the device name
            if (scannerAlreadyRegistered == false) {
                // ln -s /tmp/bacode-scanner/<link_name> /dev/input/by-path/<dev_name>
                QFile::link(INPUT_DEV_DIR+m_devList.at(i), SCANNER_LINK_DIR+(QString::number(scannerNumber)+"-"+m_devList.at(i)));
                scannerNumber++;
            }
        }
    }

}

bool CThread::isBarcodeScanner(QString devName)
{
#if EMBEDDED_LINUX
    int fd;
    char name[256] = "";

    fd = openDev(devName);
    ioctl(fd,EVIOCGNAME (sizeof(name)),name);
    close(fd);
    //qDebug()<< "name=" << name;
    if (QString(name).contains("Barcode")) {
        return true;
    } else {
        return false;
    }
#endif
}

void CThread::removeOldScannerLink()
{
    system("rm -rf /tmp/barcode-scanner");
    qDebug() << "rm -rf /tmp/barcode-scanner";
}

void CThread::setDevNumber(int dev_num)
{
    m_iDevNumber = dev_num;
}

void CThread::setDev(int index)
{
    for (int i=0;i<m_scannerList.length();i++) {
        if (index == m_scannerList.at(i).mid(0,1).toInt()) {
            m_sPath = SCANNER_LINK_DIR+m_scannerList.at(i);
            return;
        }
    }
    m_sPath = "";
}

void CThread::run()
{
    if (m_iIndex == 99) {
        while (1) {
            getDevList();
            getScannerList();
            createScannerLink();
            this->msleep(1000);
        }
    }

    //qDebug()<<"run go ";
    int fd;
    QString text = "";
    m_bUpperCase = false;

    fd = openDev(m_sPath);
#if 0
    if (fd == -1) {
        emit signalKey(m_iIndex, "N/A");
    } else {
        emit signalKey(m_iIndex, "Please scan!");
    }
#endif
    qDebug()<< "m_iIndex=" << m_iIndex << ", m_sPath=" << m_sPath << ", fd=" << fd;

    while(1) {

        getScannerList();

        if (m_scannerList.length() != m_iDevNumber) {
            //  qDebug()<<"AA: "<<m_devList.length()<<" , "<<m_iDevNumber;
            this->msleep(3000);
            setDev(m_iIndex);
            fd = openDev(m_sPath);

#if 0
            if (fd == -1) {
                emit signalKey(m_iIndex, "N/A");
            } else {
                emit signalKey(m_iIndex, "Please scan!");
            }
#endif
            qDebug()<< "m_iIndex=" << m_iIndex << ", m_sPath=" << m_sPath << ", fd=" << fd;
        }
        m_iDevNumber = m_scannerList.length();
        emit signalDevNum(m_iDevNumber);
        //QFileInfo device(m_sPath);
        //read device event
        if (fd != -1) {
            readDevEvent(fd, m_iIndex, &text);
        }
    }
}



