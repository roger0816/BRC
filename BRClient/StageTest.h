#ifndef STAGETEST_H
#define STAGETEST_H

#include <QWidget>
#include <QKeyEvent>
#include <QDebug>
#include "Global.h"
namespace Ui {
class StageTest;
}

class StageTest : public QWidget
{
    Q_OBJECT

public:
    explicit StageTest(QWidget *parent = 0);
    ~StageTest();
    void keyPressEvent(QKeyEvent *e);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::StageTest *ui;
};

#endif // STAGETEST_H
