#ifndef STACKED_FORM3_H
#define STACKED_FORM3_H

#include <QWidget>

namespace Ui {
class stacked_form3;
}

class stacked_form3 : public QWidget
{
    Q_OBJECT

public:
    explicit stacked_form3(QWidget *parent = nullptr);
    ~stacked_form3();

private:
    Ui::stacked_form3 *ui;
};

#endif // STACKED_FORM3_H
