#include "stacked_form2.h"
#include "ui_stacked_form2.h"

stacked_form2::stacked_form2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stacked_form2)
{
    ui->setupUi(this);
}

stacked_form2::~stacked_form2()
{
    delete ui;
}
