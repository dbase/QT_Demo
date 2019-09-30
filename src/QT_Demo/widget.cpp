#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 手动添加的3个Radio按钮的点击响应，需要手动添加connect事件关联
    connect(ui->radioButtonBlack,   SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    connect(ui->radioButtonRed,     SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    connect(ui->radioButtonBlue,    SIGNAL(clicked()), this, SLOT(setTextFontColor()));

}

Widget::~Widget()
{
    delete ui;
}

// 函数框架是QT向导生成；  函数体需要手动添加。
void Widget::on_checkBoxUnder_clicked(bool checked)
{
    QFont font = ui->txtEdit->font();
    font.setUnderline(checked);
    ui->txtEdit->setFont(font);
}

void Widget::on_checkBoxItalic_clicked(bool checked)
{
    QFont font = ui->txtEdit->font();
    font.setItalic(checked);
    ui->txtEdit->setFont(font);
}

void Widget::on_checkBoxBold_clicked(bool checked)
{
    QFont font = ui->txtEdit->font();
    font.setBold(checked);
    ui->txtEdit->setFont(font);
}

// 3个Radion的Click事件，没有使用向导生成。手动生成一个，让它们3个公用。
void Widget::setTextFontColor()
{
    QPalette plet = ui->txtEdit->palette();
    if(ui->radioButtonBlack->isChecked())  {
        plet.setColor(QPalette::Text, Qt::black);
    } else if (ui->radioButtonRed->isChecked()) {
        plet.setColor(QPalette::Text, Qt::red);
    } else if (ui->radioButtonBlue->isChecked()) {
        plet.setColor(QPalette::Text, Qt::blue);
    }
    ui->txtEdit->setPalette(plet);
}
