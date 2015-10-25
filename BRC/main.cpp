#include <QApplication>
#include "widget.h"
#include "QDesktopWidget"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.resize(a.desktop()->size());
    w.setWindowOpacity(1);
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.setAttribute(Qt::WA_TranslucentBackground);
    w.show();
    
    return a.exec();
}
