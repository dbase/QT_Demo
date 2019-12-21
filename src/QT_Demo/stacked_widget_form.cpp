#include "stacked_widget_form.h"
#include "ui_stacked_widget_form.h"

#include <QtWidgets>
#include <QPushButton>

#include "stacked_form1.h"
#include "stacked_form2.h"
#include "stacked_form3.h"

stacked_widget_form::stacked_widget_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stacked_widget_form)
{
    ui->setupUi(this);
    setWindowTitle("Stacked Widget Form");

    QPushButton* pButton = new QPushButton(this);
    m_pStackedWidget = new QStackedWidget(this);

    pButton->setText("switch");
    stacked_form1* form1 = new stacked_form1(this);
    stacked_form2* form2 = new stacked_form2(this);
    stacked_form3* form3 = new stacked_form3(this);

    m_pStackedWidget->addWidget(form1);
    m_pStackedWidget->addWidget(form2);
    m_pStackedWidget->addWidget(form3);

    m_pStackedWidget->move(10, 50);
    m_pStackedWidget->resize(200, 200);

    connect(pButton, &QPushButton::clicked, this, &stacked_widget_form::switchForm);
}

stacked_widget_form::~stacked_widget_form()
{
    delete ui;
}

void stacked_widget_form::switchForm()
{
    int count = m_pStackedWidget->count();
    int index = m_pStackedWidget->currentIndex();
    ++index;
    qDebug() << "index :" << index ;
    if(index >= count)
    {
        index = 0;
    }
    m_pStackedWidget->setCurrentIndex(index);
}
