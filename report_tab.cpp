#include "report_tab.h"
#include "ui_report_tab.h"

report_tab::report_tab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::report_tab)
{
    ui->setupUi(this);
}

report_tab::~report_tab()
{
    delete ui;
}
