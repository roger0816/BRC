#ifndef STAGESETTING_H
#define STAGESETTING_H

#include <QWidget>

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
signals:
    void clicked(int,QString);
private slots:
    void slotClicked();


};

#endif // STAGESETTING_H
