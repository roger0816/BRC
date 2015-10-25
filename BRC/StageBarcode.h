#ifndef STAGEBARCODE_H
#define STAGEBARCODE_H

#include <QWidget>
#include <QDebug>
#include <QKeyEvent>
#include <QPushButton>
namespace Ui {
class StageBarcode;
}

class StageBarcode : public QWidget
{
    Q_OBJECT

public:
    explicit StageBarcode(QWidget *parent = 0);
    ~StageBarcode();
    QPushButton *m_btnSub0;

private:
    Ui::StageBarcode *ui;
    QString m_sBarcodeString;
    void setUi();
    void keyPressEvent(QKeyEvent *e);

    void loadBarcode(QString st);
signals:
    void clicked(int,QString);
private slots:
    void slotClicked();
};

#endif // STAGEBARCODE_H
