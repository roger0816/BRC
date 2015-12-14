#ifndef STAGESETTING_H
#define STAGESETTING_H

#include <QWidget>
#include <QButtonGroup>
#include "Global.h"
#include <QPushButton>
#include <QTranslator>
#include <QApplication>


namespace Ui {
class StageSetting;
}

class StageSetting : public QWidget
{
    Q_OBJECT

public:
    explicit StageSetting(QWidget *parent = 0);
    ~StageSetting();

private:
    Ui::StageSetting *ui;
    QList<QPushButton*> m_listBtn;
    QString m_sNowLanguage;
signals:
    void clicked(int iStageIdx,QString st="");
private slots:

    void slotLanguageClicked();
    void showEvent(QShowEvent *);
    void resizeEvent(QResizeEvent *);
    void on_btnCancel_released();
    void on_btnCheck_released();

};

#endif // STAGESETTING_H
