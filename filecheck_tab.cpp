#include "filecheck_tab.h"
#include "ui_filecheck_tab.h"

filecheck_tab::filecheck_tab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::filecheck_tab)
{
    ui->setupUi(this);
}

filecheck_tab::~filecheck_tab()
{
    delete ui;
}
