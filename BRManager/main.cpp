#include <QApplication>
#include "widget.h"
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug()<<"BR manager start";
    Widget w;
    w.resize(a.desktop()->size());
   // w.show();
    
    return a.exec();
}
