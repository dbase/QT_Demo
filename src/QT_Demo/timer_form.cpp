#include "timer_form.h"
#include "ui_timer_form.h"

timer_form::timer_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::timer_form)
{
    ui->setupUi(this);

    fTimer = new QTimer(this);
    fTimer->stop();
    fTimer->setInterval(1000); //设置定时周期，单位：毫秒
    connect(fTimer, SIGNAL(timeout()), this, SLOT(on_timer_timeout()));
}

timer_form::~timer_form()
{
    delete ui;
}

void timer_form::on_timer_timeout()
{
    //定时器中断响
    QTime curtime = QTime::currentTime();       //获取当前时间
    ui->lcdHour->display(curtime.hour());       //显示小时
    ui->lcdMinute->display(curtime.minute());   //显示分钟
    ui->lcdSecond->display(curtime.second());   //显示秒

    int value = ui->progressBar->value();
    value++;
    if(value > 100) {
        value = 0;
    }
    ui->progressBar->setValue(value);
}

void timer_form::on_btnStart_clicked()
{
    int interval = ui->spinBoxInterval->value();
    fTimer->setInterval(interval);

    fTimer->start();        //定时器开始工作
    fTimeCounter.start();   //计时器开始工作

    ui->labelElapsTime->setText("流逝时间：");
    ui->btnStart->setEnabled(false);
    ui->btnStop->setEnabled(true);
    ui->btnInterval->setEnabled(false);
}

void timer_form::on_btnStop_clicked()
{
    fTimer->stop();

    int tmMsec = fTimeCounter.elapsed();
    int ms = tmMsec % 1000;
    int sec = tmMsec / 1000;

    QString str = QString::asprintf("流逝时间： %d s  %d ms", sec, ms);

    ui->labelElapsTime->setText(str);
    ui->btnStart->setEnabled(true);
    ui->btnStop->setEnabled(false);
    ui->btnInterval->setEnabled(true);

}

void timer_form::on_btnInterval_clicked()
{

}
