#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_checkBoxUnder_clicked(bool checked);

    void on_checkBoxItalic_clicked(bool checked);

    void on_checkBoxBold_clicked(bool checked);

    void setTextFontColor();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
