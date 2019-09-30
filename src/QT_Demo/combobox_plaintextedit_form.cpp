#include "combobox_plaintextedit_form.h"
#include "ui_combobox_plaintextedit_form.h"

#include "QTextBlock"

combobox_plaintextedit_form::combobox_plaintextedit_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::combobox_plaintextedit_form)
{
    ui->setupUi(this);
    ui->plainTextEdit->appendPlainText("C++");
    ui->plainTextEdit->appendPlainText("C#");
    ui->plainTextEdit->appendPlainText("Java");
}

combobox_plaintextedit_form::~combobox_plaintextedit_form()
{
    delete ui;
}

void combobox_plaintextedit_form::on_btnPlainText2Combo_clicked()
{
    QTextDocument* doc = ui->plainTextEdit->document();
    int cnt = doc->blockCount();
    ui->comboBox->clear();
    //QPlainTextEdit 的文字内容以 QTextDocument 类型存储，函数 document() 返回这个文档对象的指针。
    //QTextDocument 是内存中的文本对象，以文本块的方式存储，一个文本块就是一个段落，每个段落以回车符结束。
    //QTextDocument 提供一些函数实现对文本内容的存取.

    for (int i = 0; i < cnt; ++i) {
        QTextBlock textLine = doc->findBlockByNumber(i);
        QString str = textLine.text();
        ui->comboBox->addItem(str);
    }
}

void combobox_plaintextedit_form::on_btnClearPlaintText_clicked()
{
    ui->plainTextEdit->clear();
}
