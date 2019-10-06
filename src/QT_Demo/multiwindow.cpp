#include "multiwindow.h"
#include "ui_multiwindow.h"
#include "custom_dialog_form.h"

MultiWindow::MultiWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MultiWindow)
{
    ui->setupUi(this);

    ui->tabWidget->setVisible(false);
    ui->tabWidget->clear();
    ui->tabWidget->setTabsClosable(true);

    //this->setCentralWidget(ui->tabWidget);
    //this->setWindowState(Qt::WindowMaximized);
    this->setAutoFillBackground(true);
}

MultiWindow::~MultiWindow()
{
    delete ui;
}

void MultiWindow::on_btn1_clicked()
{
    custom_dialog_form* form = new custom_dialog_form(this);//指定父窗口
    form->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    int cur = ui->tabWidget->addTab(form, QString::asprintf("window %d", ui->tabWidget->count()));

    ui->tabWidget->setCurrentIndex(cur);
    ui->tabWidget->setVisible(true);
}

void MultiWindow::on_btn2_clicked()
{
    custom_dialog_form *formDoc = new custom_dialog_form(); //不指定父窗口，用show()显示
    formDoc->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
    formDoc->setWindowTitle("基于QWidget的窗体，无父窗口，关闭时删除");
    formDoc->setWindowFlag(Qt::Window,true);
    formDoc->setWindowOpacity(0.9);
    formDoc->show(); //在单独的窗口中显示
}

void MultiWindow::on_tabWidget_tabCloseRequested(int index)
{
    // 关闭tab
    if(index < 0)
    {
        return;
    }

    QWidget* form = ui->tabWidget->widget(index);
    form->close();
}

void MultiWindow::on_tabWidget_currentChanged(int index)
{
    Q_UNUSED(index);
    bool en = ui->tabWidget->count() > 0;//再无页面时，actions禁用
    ui->tabWidget->setVisible(en);
}
