#include "firsttitlewg.h"
#include "ui_firsttitlewg.h"

FirstTitleWg::FirstTitleWg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FirstTitleWg)
{
    ui->setupUi(this);
}

FirstTitleWg::~FirstTitleWg()
{
    delete ui;
}
