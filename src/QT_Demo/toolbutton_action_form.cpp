#include "toolbutton_action_form.h"
#include "ui_toolbutton_action_form.h"

#include "QListWidgetItem"

static bool can_check = false; //是否可编辑

toolbutton_action_form::toolbutton_action_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::toolbutton_action_form)
{
    ui->setupUi(this);
    listwidgetsInit();
}

toolbutton_action_form::~toolbutton_action_form()
{
    delete ui;
}

void toolbutton_action_form::listwidgetsInit()
{
    //初始化项
    QListWidgetItem* item; //每一行是一个QListWidgetItem
    QIcon icon;
    icon.addFile("/res/1.ico"); //设置ICON的图标

    //bool can_check = false; //是否可编辑

    //ui->listWidget->clear(); //清除项

    for (int i = 0; i < 10; ++i) {
        QString str = QString::asprintf("Item %d", i);

        item = new QListWidgetItem(); //新建一个项
        item->setText(str); //设置文字标签
        item->setIcon(icon); //设置图标
        item->setCheckState(Qt::Checked); //设置为选中状态

        if(can_check) { //可编辑, 设置flags
            item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
        } else { //不可编辑, 设置flags
            item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
        }

        ui->listWidget->addItem(item); //增加一个项
    }
}

void toolbutton_action_form::setActionsForButton()
{
    //为 QToolButton 按钮设置 Action
    //ui->actListInsert->setDefaultAction(ui->actListInsert);

}

void toolbutton_action_form::on_btnInsert_clicked()
{
    // 在当前项之上，插入一项
    QListWidgetItem* item = new QListWidgetItem("New Inserted Item"); //新建一个项
    item->setCheckState(Qt::Checked); //设置为选中状态

    if(can_check) { //可编辑, 设置flags
        item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    } else { //不可编辑, 设置flags
        item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    }

    ui->listWidget->insertItem(ui->listWidget->currentRow(), item); //增加一个项
}

void toolbutton_action_form::on_btnDelete_clicked()
{
    // 删除当前项
    int row = ui->listWidget->currentRow(); // 当前行
    QListWidgetItem* item = ui->listWidget->takeItem(row); // 移除当前行，但没有在内存中删除
    delete item; // 需要用delete从内存中删除
}

void toolbutton_action_form::on_btnCircle_clicked()
{
    // 遍历全部项，追加文本到每项

        int cnt = ui->listWidget->count();
        for (int i = 0; i < cnt; ++i) {
            QListWidgetItem* item = ui->listWidget->item(i);
            QString ori_text = item->text();
            QString str = QString::asprintf("  %d", i);

            item->setText(ori_text + str);
        }
}
