#include "internet_tab.h"
#include "ui_internet_tab.h"

Internet_Tab::Internet_Tab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Internet_Tab)
{
    ui->setupUi(this);
}

Internet_Tab::~Internet_Tab()
{
    delete ui;
}
