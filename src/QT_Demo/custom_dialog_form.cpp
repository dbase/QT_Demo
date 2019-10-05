#include "custom_dialog_form.h"
#include "ui_custom_dialog_form.h"
#include "qwdialogsize.h"

custom_dialog_form::custom_dialog_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::custom_dialog_form)
{
    ui->setupUi(this);
    dlgSetHeaders = nullptr;
}

custom_dialog_form::~custom_dialog_form()
{
    delete ui;
}

void custom_dialog_form::on_toolbtnSetSize_clicked()
{
    //模态对话框，动态创建，用过后删除
    QWDialogSize* dlg = new QWDialogSize(this);

    Qt::WindowFlags flags=dlg->windowFlags();
    dlg->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint);

    int ret = dlg->exec();// 以模态方式显示对话框
    if(ret == QDialog::Accepted)
    {
        //OK按钮被按下，获取对话框上的输入，设置行数和列数
        int cols = dlg->columnCount();
        int rows = dlg->rowCount();
        QString str_cols = QString::asprintf("cols : %d", cols);
        QString str_rows = QString::asprintf("rows : %d", rows);
        ui->plainTextEdit->appendPlainText(str_cols);
        ui->plainTextEdit->appendPlainText(str_rows);
    }

    delete dlg;
}

void custom_dialog_form::on_toolbtnSetHeader_clicked()
{
    // 对话框以模态方式显示，关闭后只是隐藏，并不删除对象，下次再调用时只是打开己创建的对话框对象。

    //如果对象没有被创建过，就创建对象
    if(dlgSetHeaders == nullptr)
    {
        dlgSetHeaders = new QWDialogHeaders(this);
    }

    //保存初始 StringList
    QStringList theStringList;
    theStringList << "beijing" << "shanghai" << "shandong" << "sichuan" << "chongqing";

    dlgSetHeaders->setHeaderList(theStringList); //用于对话框初始化显示

    int ret = dlgSetHeaders->exec();// 以模态方式显示对话框
    if(ret == QDialog::Accepted)//OK键被按下
    {
        QStringList strList = dlgSetHeaders->headerLilst();//获取对话框上修改后的StringList

        for (int i = 0; i < strList.count(); ++i)
        {
            ui->plainTextEdit->appendPlainText(strList.at(i));
        }
    }
}

void custom_dialog_form::on_toolbtnLocationCell_clicked()
{
    // 非模态方式调用

}
