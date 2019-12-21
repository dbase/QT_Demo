#ifndef STACKED_WIDGET_FORM_H
#define STACKED_WIDGET_FORM_H

#include <QWidget>

namespace Ui {
class stacked_widget_form;
}


class QStackedWidget;

class stacked_widget_form : public QWidget
{
    Q_OBJECT

public:
    explicit stacked_widget_form(QWidget *parent = nullptr);
    ~stacked_widget_form();

    void switchForm();

private:
    Ui::stacked_widget_form *ui;

    QStackedWidget* m_pStackedWidget;
};

#endif // STACKED_WIDGET_FORM_H
