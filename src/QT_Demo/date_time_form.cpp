#include "date_time_form.h"
#include "ui_date_time_form.h"

#include "qdatetime.h"

date_time_form::date_time_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::date_time_form)
{
    ui->setupUi(this);
}

date_time_form::~date_time_form()
{
    delete ui;
}

void date_time_form::on_btnCurrentDateTime_clicked()
{
    //获取当前日期时间，为三个专用编辑器设置日期时间数据，并转换为字符串
    QDateTime currDateTime = QDateTime::currentDateTime();

    // 设置日期时间控件的显示值
    ui->timeEdit->setTime(currDateTime.time());
    ui->dateEdit->setDate(currDateTime.date());
    ui->dateTimeEdit->setDateTime(currDateTime);

    // 字符串显示
    ui->lineTimeEdit->setText(currDateTime.toString("hh:mm:ssll"));
    ui->lineDateEdit->setText(currDateTime.toString("yyyy-MM-dd"));
    ui->lineTimeDateEdit->setText(currDateTime.toString("yyyy-MM-dd hh:mm:ss"));
}

void date_time_form::on_calendarWidget_selectionChanged()
{
    //在日历上选择日期, 更新edit日期
    QDate date = ui->calendarWidget->selectedDate();
    QString str = date.toString("yyyy-MM-dd");
    ui->lineditSelected->setText(str);
}
