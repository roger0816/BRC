#ifndef VINPUT_H
#define VINPUT_H

#include <QWidget>
#include <QMouseEvent>
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
private:
    Ui::Vinput *ui;
    void mouseReleaseEvent(QMouseEvent *);
public slots:
    void setText(const QString &text);
};

#endif // VINPUT_H
