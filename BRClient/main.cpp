#include <QApplication>
#include "widget.h"
#include "Global.h"
#include "QDesktopWidget"
#include <QTranslator>

void changeLanguage(QString sLanguage)
{
    QString m_sNowLanguage=sLanguage;
    QString sPath="qrc:/language/translations/"+m_sNowLanguage.toLower()+".qm";
    QTranslator qtTranslator;
    qtTranslator.load(sPath);
    QApplication::installTranslator(&qtTranslator);

        qDebug()<<"sPath "<<sPath;
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // GLOBAL().m_SizeWindow=a.desktop()->size();

    //changeLanguage("En");
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
