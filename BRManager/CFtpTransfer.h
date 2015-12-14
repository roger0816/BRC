#ifndef CFTPTRANSFER_H
#define CFTPTRANSFER_H
#include <QFtp>
#include <QFile>
#include <QUrl>
#include <QDir>
#include <QObject>
#include <iostream>
#include <QFileInfo>
#include <QFileInfoList>
#include <QFileInfoListIterator>
#include <QDebug>
#include <QElapsedTimer>
#include <QCoreApplication>
#include <QApplication>
#include <QDate>
#include <QDebug>



class CFtpTransfer : public QObject
{
    Q_OBJECT
public:
    explicit CFtpTransfer(QObject *parent = 0);

    //--------------------------------------------------------------------------------
    /**
     * @brief cTimeOut 設time out 防止連不上
     * @param iMilliseconds
     * @param bIsReturn
     * @return
     */
    int cTimeOut(int iMilliseconds,bool &bIsReturn);

    //
    bool setUrl(QString sIp, QString sPort, QString sUserName, QString sPassword);
    //--------------------------------------------------------------------------------
    /**
     * @brief downLoad
     * @param sFilePath 路徑檔源，從FTP ROOT 下開始算
     * @param sLocalDir 執行檔的相對位置 如 "TEST/"，但並不會自動建資料夾
     * @return
     */
    bool downLoad(const QString sFilePath,const QString sLocalDir="");

    //--------------------------------------------------------------------------------
    /**
     * @brief upLoad
     * @param sFilePath local檔案源(路徑與檔名)
     * @param sFtpDir   存放ftp的資料夾層級(路徑層級)
     * @return
     */
    bool upLoad(const QString sFilePath,const QString sFtpDir="");

    QString getDate(bool bIsNowDay=true);

    void downloadDir(QString sDir="out/",QString sSaveRoot="");

    void downloadFile(QString sFile,QString sSaveRoot="");



private:
    QFtp m_ftp;
    QFile m_file;
    QUrl m_url;
    QList<QString> m_listFile;
    bool m_flagFtpOk;
    bool m_flagProcessOk;

signals:
    void done();
public slots:
    void slotFtpDone(bool bError)
    {
        qDebug()<<"FTP Done";
        if(bError)
        {
            std::cerr<<"Error : "<<qPrintable(m_ftp.errorString())<<std::endl;
        }

        m_file.close();

        emit done();
        m_flagFtpOk=true;
    }

    void slotListInfo(const QUrlInfo &urlInfo)
    {

        m_listFile.append(urlInfo.name());
        m_flagProcessOk=true;
    }

};

#endif // CFTPTRANSFER_H
