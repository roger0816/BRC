#include <QApplication>
#include "widget.h"
#include "Global.h"
#include "QDesktopWidget"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // GLOBAL().m_SizeWindow=a.desktop()->size();
    GLOBAL().m_SizeWindow=QSize(800,480);
    Widget w;
    w.setMaximumSize(GLOBAL().m_SizeWindow);
    w.setMinimumSize(GLOBAL().m_SizeWindow);
//    w.setWindowOpacity(1);
//    w.setWindowFlags(Qt::FramelessWindowHint);
//    w.setAttribute(Qt::WA_TranslucentBackground);

    w.show();
    
    return a.exec();
}
