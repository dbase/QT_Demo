#include "entry_form.h"
#include "ui_entry_form.h"

#include "widget.h"
#include "spinbox_form.h"
#include "slider_scrollbar_form.h"
#include "date_time_form.h"

entry_form::entry_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::entry_form)
{
    ui->setupUi(this);
}

entry_form::~entry_form()
{
    delete ui;
}

void entry_form::on_btn1_clicked()
{
    // 显示设置edit框文本颜色和样式的对话框
    Widget *w = new Widget();
    w->show();
}

void entry_form::on_btn2_clicked()
{
    // 显示spinbox控件学习的对话框
    spinbox_form* form = new spinbox_form();
    form->show();
}

void entry_form::on_btn3_clicked()
{
    // 显示slider控件学习的对话框
    slider_scrollbar_form* form = new slider_scrollbar_form();
    form->show();
}

void entry_form::on_btn4_clicked()
{
    // 显示DateTime控件学习的对话框
    date_time_form* form = new date_time_form();
    form->show();
}
