#ifndef SLIDER_SCROLLBAR_FORM_H
#define SLIDER_SCROLLBAR_FORM_H

#include <QWidget>

namespace Ui {
class slider_scrollbar_form;
}

class slider_scrollbar_form : public QWidget
{
    Q_OBJECT

public:
    explicit slider_scrollbar_form(QWidget *parent = nullptr);
    ~slider_scrollbar_form();

private slots:
    void on_sliderRed_valueChanged(int value);

private:
    Ui::slider_scrollbar_form *ui;
};

#endif // SLIDER_SCROLLBAR_FORM_H
