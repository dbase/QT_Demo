#ifndef TOOLBUTTON_ACTION_FORM_H
#define TOOLBUTTON_ACTION_FORM_H

#include <QWidget>

namespace Ui {
class toolbutton_action_form;
}

class toolbutton_action_form : public QWidget
{
    Q_OBJECT

public:
    explicit toolbutton_action_form(QWidget *parent = nullptr);
    ~toolbutton_action_form();

    void listwidgetsInit();
    void setActionsForButton();

private slots:
    void on_btnInsert_clicked();

    void on_btnDelete_clicked();

    void on_btnCircle_clicked();

private:
    Ui::toolbutton_action_form *ui;
};

#endif // TOOLBUTTON_ACTION_FORM_H
