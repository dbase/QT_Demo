#include "slider_scrollbar_form.h"
#include "ui_slider_scrollbar_form.h"

slider_scrollbar_form::slider_scrollbar_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::slider_scrollbar_form)
{
    ui->setupUi(this);

    connect(ui->sliderGreen, SIGNAL(valueChanged(int)), this, SLOT(on_sliderRed_valueChanged(int)));
    connect(ui->sliderBlue,  SIGNAL(valueChanged(int)), this, SLOT(on_sliderRed_valueChanged(int)));
    connect(ui->sliderAlpha, SIGNAL(valueChanged(int)), this, SLOT(on_sliderRed_valueChanged(int)));
}

slider_scrollbar_form::~slider_scrollbar_form()
{
    delete ui;
}

void slider_scrollbar_form::on_sliderRed_valueChanged(int value)
{
    //拖动Red、Green、Blue颜色滑动条时设置textEdit的底色
    Q_UNUSED(value);
    QColor color;
    int r = ui->sliderRed->value();
    int g = ui->sliderGreen->value();
    int b = ui->sliderBlue->value();
    int a = ui->sliderAlpha->value();

    color.setRgb(r, g, b, a);

    QPalette pal = ui->textEdit->palette();
    pal.setColor(QPalette::Base, color); //设置底色
    ui->textEdit->setPalette(pal);
}
