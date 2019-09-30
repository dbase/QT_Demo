#ifndef SPINBOX_FORM_H
#define SPINBOX_FORM_H

#include <QWidget>

namespace Ui {
class spinbox_form;
}

class spinbox_form : public QWidget
{
    Q_OBJECT

public:
    explicit spinbox_form(QWidget *parent = nullptr);
    ~spinbox_form();

private slots:
    void on_btnCalculate_clicked();

private:
    Ui::spinbox_form *ui;
};

#endif // SPINBOX_FORM_H
