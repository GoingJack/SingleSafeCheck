#include "mainview.h"
#include "ui_mainview.h"
#include "softwareinfowg.h"

MainView::MainView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainView)
{
    ui->setupUi(this);

    managerSignal();

    //去边框
    this->setWindowFlags(Qt::FramelessWindowHint | windowFlags());


}

MainView::~MainView()
{
    delete ui;
}

void MainView::managerSignal()
{
    //关闭按钮
    connect(ui->SoftwareInfo,&SoftwareInfowg::CloseMainWindow,
            [=]
            {
                this->close();
            }
            );
    //最小化按钮
    connect(ui->SoftwareInfo,&SoftwareInfowg::MinMainWindow,
            [=]
            {
                this->showMinimized();
            }
            );
    //系统检查界面
    connect(ui->Ftitle_wg,&FirstTitle::show1_check,[=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->check);
    });
    connect(ui->Ftitle_wg,&FirstTitle::show2_internet,[=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->internet);
    });
    connect(ui->Ftitle_wg,&FirstTitle::show3_folder,[=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->folder);
    });
    connect(ui->Ftitle_wg,&FirstTitle::show4_usb,[=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->usb);
    });
    connect(ui->Ftitle_wg,&FirstTitle::show5_picture,[=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->picture);
    });
    connect(ui->Ftitle_wg,&FirstTitle::show6_virtual,[=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->virtual_m);
    });
    connect(ui->Ftitle_wg,&FirstTitle::show7_restore,[=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->restore);
    });
    connect(ui->Ftitle_wg,&FirstTitle::show8_report,[=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->report);
    });
}
