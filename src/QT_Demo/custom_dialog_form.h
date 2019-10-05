#ifndef CUSTOM_DIALOG_FORM_H
#define CUSTOM_DIALOG_FORM_H

#include <QWidget>
#include "QWDialogHeaders.h"

namespace Ui {
class custom_dialog_form;
}

class custom_dialog_form : public QWidget
{
    Q_OBJECT

public:
    explicit custom_dialog_form(QWidget *parent = nullptr);
    ~custom_dialog_form();

private slots:
    void on_toolbtnSetSize_clicked();

    void on_toolbtnSetHeader_clicked();

    void on_toolbtnLocationCell_clicked();

private:
    Ui::custom_dialog_form *ui;

    // 自定义对话框
    QWDialogHeaders* dlgSetHeaders;
};

#endif // CUSTOM_DIALOG_FORM_H
