#ifndef TIMER_FORM_H
#define TIMER_FORM_H

#include <QWidget>

#include "QTimer"
#include "QTime"

namespace Ui {
class timer_form;
}

class timer_form : public QWidget
{
    Q_OBJECT

public:
    explicit timer_form(QWidget *parent = nullptr);
    ~timer_form();

private slots:
    void on_timer_timeout();
    void on_btnStart_clicked();

    void on_btnStop_clicked();

    void on_btnInterval_clicked();

private:
    Ui::timer_form *ui;

    QTimer* fTimer;       // 定时器
    QTime   fTimeCounter; // 计时器
};

#endif // TIMER_FORM_H
