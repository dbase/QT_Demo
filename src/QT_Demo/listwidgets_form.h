#ifndef LISTWIDGETS_FORM_H
#define LISTWIDGETS_FORM_H

#include <QWidget>

namespace Ui {
class listwidgets_form;
}

class listwidgets_form : public QWidget
{
    Q_OBJECT

public:
    explicit listwidgets_form(QWidget *parent = nullptr);
    ~listwidgets_form();

private slots:
    void on_btnInsert_clicked();

    void on_btnDelete_clicked();

    void on_btnCircle_clicked();

private:
    void listwidgetsInit();

    Ui::listwidgets_form *ui;
};

#endif // LISTWIDGETS_FORM_H
