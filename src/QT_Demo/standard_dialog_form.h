#ifndef STANDARD_DIALOG_FORM_H
#define STANDARD_DIALOG_FORM_H

#include <QWidget>

namespace Ui {
class standard_dialog_form;
}

class standard_dialog_form : public QWidget
{
    Q_OBJECT

public:
    explicit standard_dialog_form(QWidget *parent = nullptr);
    ~standard_dialog_form();

private slots:
    void on_btnOpenOneFile_clicked();

    void on_btnOpenMulti_clicked();

    void on_btnExistingDirectory_clicked();

    void on_btnSave_clicked();

    void on_btnColor_clicked();

    void on_btnFont_clicked();

    void on_btnInputString_clicked();

    void on_btnInputInt_clicked();

    void on_btnInputFloat_clicked();

    void on_btnInputItem_clicked();

    void on_btnMsgQuestion_clicked();

    void on_btnMsgInformation_clicked();

    void on_btnMsgWarning_clicked();

    void on_btnMsgCritical_clicked();

    void on_btnMsgAbout_clicked();

    void on_btnMsgAboutQt_clicked();

private:
    Ui::standard_dialog_form *ui;
};

#endif // STANDARD_DIALOG_FORM_H
