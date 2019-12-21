#include "stacked_form3.h"
#include "ui_stacked_form3.h"

stacked_form3::stacked_form3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stacked_form3)
{
    ui->setupUi(this);
}

stacked_form3::~stacked_form3()
{
    delete ui;
}
