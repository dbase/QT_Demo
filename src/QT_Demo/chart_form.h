#ifndef CHART_FORM_H
#define CHART_FORM_H

#include <QWidget>

#include <QtCharts>
using namespace QtCharts;

namespace Ui {
class chart_form;
class QChartView;
class QChart;
}


class chart_form : public QWidget
{
    Q_OBJECT

public:
    explicit chart_form(QWidget *parent = nullptr);
    ~chart_form();

    void populateThemeBox();

    QChart *createLineChart() const;

    void updateUI();

private:
    Ui::chart_form *ui;

    QChartView *chartView;
};

#endif // CHART_FORM_H
