#ifndef DATE_TIME_FORM_H
#define DATE_TIME_FORM_H

#include <QWidget>

namespace Ui {
class date_time_form;
}

class date_time_form : public QWidget
{
    Q_OBJECT

public:
    explicit date_time_form(QWidget *parent = nullptr);
    ~date_time_form();

private slots:
    void on_btnCurrentDateTime_clicked();

    void on_calendarWidget_selectionChanged();

private:
    Ui::date_time_form *ui;
};

#endif // DATE_TIME_FORM_H
