#include "spinbox_form.h"
#include "ui_spinbox_form.h"

spinbox_form::spinbox_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::spinbox_form)
{
    ui->setupUi(this);
}

spinbox_form::~spinbox_form()
{
    delete ui;
}

void spinbox_form::on_btnCalculate_clicked()
{
    // 计算
    int num = ui->spinNumber->value();
    float price = ui->spinPrice->value();
    float total = num * price;
    ui->spinTotal->setValue(total);
}
