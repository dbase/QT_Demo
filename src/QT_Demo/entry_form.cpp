#include "entry_form.h"
#include "ui_entry_form.h"

#include "widget.h"

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
    Widget *w = new Widget();
    w->show();
}
