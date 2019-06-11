#include "usb_tab.h"
#include "ui_usb_tab.h"

usb_tab::usb_tab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::usb_tab)
{
    ui->setupUi(this);
}

usb_tab::~usb_tab()
{
    delete ui;
}
