#ifndef COMBOBOX_PLAINTEXTEDIT_FORM_H
#define COMBOBOX_PLAINTEXTEDIT_FORM_H

#include <QWidget>

namespace Ui {
class combobox_plaintextedit_form;
}

class combobox_plaintextedit_form : public QWidget
{
    Q_OBJECT

public:
    explicit combobox_plaintextedit_form(QWidget *parent = nullptr);
    ~combobox_plaintextedit_form();

private slots:
    void on_btnPlainText2Combo_clicked();

    void on_btnClearPlaintText_clicked();

private:
    Ui::combobox_plaintextedit_form *ui;
};

#endif // COMBOBOX_PLAINTEXTEDIT_FORM_H
