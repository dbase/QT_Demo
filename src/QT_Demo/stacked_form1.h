#ifndef STACKED_FORM1_H
#define STACKED_FORM1_H

#include <QWidget>

namespace Ui {
class stacked_form1;
}

class stacked_form1 : public QWidget
{
    Q_OBJECT

public:
    explicit stacked_form1(QWidget *parent = nullptr);
    ~stacked_form1();

private:
    Ui::stacked_form1 *ui;
};

#endif // STACKED_FORM1_H
