#ifndef VINPUT_H
#define VINPUT_H

#include <QWidget>
#include <QMouseEvent>
#include "Global.h"
namespace Ui {
class Vinput;
}

class Vinput : public QWidget
{
    Q_OBJECT

public:
    explicit Vinput(QWidget *parent = 0);
    ~Vinput();
    void setAlignment(Qt::Alignment alignment);
    QString text();
    QLabel* label();
private:
    Ui::Vinput *ui;
    void mouseReleaseEvent(QMouseEvent *);
public slots:
    void setText(const QString &text);
};

#endif // VINPUT_H
