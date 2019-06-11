#include "picture_tab.h"
#include "ui_picture_tab.h"

picture_tab::picture_tab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::picture_tab)
{
    ui->setupUi(this);
}

picture_tab::~picture_tab()
{
    delete ui;
}
