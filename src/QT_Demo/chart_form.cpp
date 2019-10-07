#include "chart_form.h"
#include "ui_chart_form.h"



//#include <QtCharts/QChartView>
//#include <QtCharts/QPieSeries>
//#include <QtCharts/QPieSlice>
//#include <QtCharts/QAbstractBarSeries>
//#include <QtCharts/QPercentBarSeries>
//#include <QtCharts/QStackedBarSeries>
//#include <QtCharts/QBarSeries>
//#include <QtCharts/QBarSet>
//#include <QtCharts/QLineSeries>
//#include <QtCharts/QSplineSeries>
//#include <QtCharts/QScatterSeries>
//#include <QtCharts/QAreaSeries>
//#include <QtCharts/QLegend>
//#include <QtWidgets/QGridLayout>
//#include <QtWidgets/QFormLayout>
//#include <QtWidgets/QComboBox>
//#include <QtWidgets/QSpinBox>
//#include <QtWidgets/QCheckBox>
//#include <QtWidgets/QGroupBox>
//#include <QtWidgets/QLabel>
//#include <QtCore/QRandomGenerator>
//#include <QtCharts/QBarCategoryAxis>
//#include <QtWidgets/QApplication>
//#include <QtCharts/QValueAxis>

chart_form::chart_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chart_form)
{
    ui->setupUi(this);

    populateThemeBox();

    chartView = new QChartView(createLineChart());
    ui->gridLayout->addWidget(chartView, 1, 0);
    updateUI();
}

chart_form::~chart_form()
{
    delete ui;
}

void chart_form::populateThemeBox()
{
    // add items to theme combobox
    ui->themeComboBox->addItem("Light", QChart::ChartThemeLight);
    ui->themeComboBox->addItem("Blue Cerulean", QChart::ChartThemeBlueCerulean);
    ui->themeComboBox->addItem("Dark", QChart::ChartThemeDark);
    ui->themeComboBox->addItem("Brown Sand", QChart::ChartThemeBrownSand);
    ui->themeComboBox->addItem("Blue NCS", QChart::ChartThemeBlueNcs);
    ui->themeComboBox->addItem("High Contrast", QChart::ChartThemeHighContrast);
    ui->themeComboBox->addItem("Blue Icy", QChart::ChartThemeBlueIcy);
    ui->themeComboBox->addItem("Qt", QChart::ChartThemeQt);
}

QChart *chart_form::createLineChart() const
{
    //![1]
        QChart *chart = new QChart();
        chart->setTitle("Line chart");
        //![1]

        //![2]
        QString name("Series ");
        // 第1条线
        auto lines = new QLineSeries();
        lines->append(5, 5);
        lines->append(10, 38);
        lines->append(35, 60);
        lines->append(50, 20);
        lines->append(80, 90);
        lines->append(100, 70);

        chart->addSeries(lines);

        // 第2条线
        auto lines2 = new QLineSeries();
        lines2->append(5, 8);
        lines2->append(10, 28);
        lines2->append(35, 50);
        lines2->append(50, 30);
        lines2->append(80, 80);
        lines2->append(100, 75);

        chart->addSeries(lines2);

        //![2]

        //![3]
        chart->createDefaultAxes();
        chart->axes(Qt::Horizontal).first()->setRange(0, 150);
        chart->axes(Qt::Vertical).first()->setRange(0, 100);
        //![3]
        //![4]
        // Add space to label to add space between labels and axis
        QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
        Q_ASSERT(axisY);
        axisY->setLabelFormat("%.1f  ");
        //![4]

        return chart;
}

void chart_form::updateUI()
{
    QChart::ChartTheme theme = static_cast<QChart::ChartTheme>(
                    ui->themeComboBox->itemData(ui->themeComboBox->currentIndex()).toInt());

    if(chartView->chart()->theme() != theme)
    {
        chartView->chart()->setTheme(theme);
    }

}
