#include "widget.h"
#include <QApplication>

#include "entry_form.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //定义并创建应用程序
    entry_form entry; //定义并创建窗口
    entry.show(); //显示窗口

    return a.exec(); //应用程序运行，开始应用程序的消息循环和事件处理。
}
