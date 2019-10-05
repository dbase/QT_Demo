#include "entry_form.h"
#include "ui_entry_form.h"

#include "widget.h"
#include "spinbox_form.h"
#include "slider_scrollbar_form.h"
#include "date_time_form.h"
#include "timer_form.h"
#include "combobox_plaintextedit_form.h"
#include "listwidgets_form.h"
#include "toolbutton_action_form.h"
#include "string_list_model_form.h"

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

void entry_form::on_btn5_clicked()
{
    // 显示定时器控件学习的对话框
    timer_form* form = new timer_form();
    form->show();
}

void entry_form::on_btn6_clicked()
{
    // 显示PlainText Combobox控件学习的对话框
    combobox_plaintextedit_form* form = new combobox_plaintextedit_form();
    form->show();
}

void entry_form::on_btn7_clicked()
{
    // 显示ListWidgets控件学习的对话框
    listwidgets_form* form = new listwidgets_form();
    form->show();
}

void entry_form::on_btn8_clicked()
{
    // 显示QToolButton 和 Action 控件学习的对话框
    toolbutton_action_form* form = new toolbutton_action_form();
    form->show();
}

void entry_form::on_btn9_clicked()
{
    // 显示QStringListModel 和 Model view 控件学习的对话框
    string_list_model_form* form = new string_list_model_form();
    form->show();
}
