#include "stacked_form1.h"
#include "ui_stacked_form1.h"

stacked_form1::stacked_form1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stacked_form1)
{
    ui->setupUi(this);

}

stacked_form1::~stacked_form1()
{
    delete ui;
}
