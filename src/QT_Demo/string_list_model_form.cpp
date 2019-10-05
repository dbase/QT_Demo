#include "string_list_model_form.h"
#include "ui_string_list_model_form.h"

#include "QLabel"

string_list_model_form::string_list_model_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::string_list_model_form)
{
    ui->setupUi(this);

    //保存初始 StringList
    QStringList theStringList;
    theStringList << "beijing" << "shanghai" << "shandong" << "sichuan" << "chongqing";

    theModel = new QStringListModel(this); //创建数据模型
    theModel->setStringList(theStringList); //为模型设置StringList，会导入StringList的内容

    ui->listView->setModel(theModel); //为listView设置数据模型
    // 设置Listview可编辑，以及如何进入编辑状态
    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);

}

string_list_model_form::~string_list_model_form()
{
    delete ui;
}

void string_list_model_form::on_btnAppendItem_clicked()
{
    // 在尾部添加一行
    theModel->insertRow(theModel->rowCount());

    QModelIndex index = theModel->index(theModel->rowCount() - 1, 0);//获取最后一行
    theModel->setData(index, "new item", Qt::DisplayRole);//设置显示文字
    ui->listView->setCurrentIndex(index);//设置当前选中的行
}

void string_list_model_form::on_btnInsertItem_clicked()
{
    // 插入一行
    QModelIndex index = ui->listView->currentIndex();//当前 modelIndex
    theModel->insertRow(index.row());//在当前行的前面插入一行
    theModel->setData(index, "new item", Qt::DisplayRole);//设置显示文字
    theModel->setData(index,Qt::AlignRight,Qt::TextAlignmentRole); //设置对齐方式，不起作用
    ui->listView->setCurrentIndex(index);//设置当前选中的行
}

void string_list_model_form::on_btnDeleteCurrentItem_clicked()
{
    // 删除当前行
    QModelIndex index = ui->listView->currentIndex();//获取当前 modelIndex
    theModel->removeRow(index.row());//删除当前行
}

void string_list_model_form::on_listView_clicked(const QModelIndex &index)
{
    //显示QModelIndex的行、列号

    ui->labelInfo->setText(QString::asprintf("Current:row=%d, column=%d", index.row(), index.column()));
}

void string_list_model_form::on_btnClearList_clicked()
{
    //清除ListView的所有项
    theModel->removeRows(0, theModel->rowCount());
}

void string_list_model_form::on_btnShowStringList_clicked()
{
    // 显示数据模型的StringList
    QStringList tmpList = theModel->stringList();//获取数据模型的StringList
    ui->plainTextEdit->clear();//文本框清空
    for (int i = 0; i < tmpList.count(); ++i) {
        ui->plainTextEdit->appendPlainText(tmpList.at(i));//显示数据模型的StringList()返回的内容
    }
}

void string_list_model_form::on_btnCleartText_clicked()
{
     ui->plainTextEdit->clear();//文本框清空
}


