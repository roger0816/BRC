#ifndef STAGETEST_H
#define STAGETEST_H

#include <QWidget>
#include <QKeyEvent>
#include <QDebug>
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
private:
    Ui::StageTest *ui;
};

#endif // STAGETEST_H
