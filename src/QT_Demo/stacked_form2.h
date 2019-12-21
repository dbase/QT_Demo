#ifndef STACKED_FORM2_H
#define STACKED_FORM2_H

#include <QWidget>

namespace Ui {
class stacked_form2;
}

class stacked_form2 : public QWidget
{
    Q_OBJECT

public:
    explicit stacked_form2(QWidget *parent = nullptr);
    ~stacked_form2();

private:
    Ui::stacked_form2 *ui;
};

#endif // STACKED_FORM2_H
