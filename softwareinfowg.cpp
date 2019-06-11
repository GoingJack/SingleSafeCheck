#include "softwareinfowg.h"
#include "ui_softwareinfowg.h"
#include <QPainter>
#include <QMouseEvent>

SoftwareInfowg::SoftwareInfowg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SoftwareInfowg)
{
    ui->setupUi(this);
    //去掉边框属性
    //this->setWindowFlags(Qt::FramelessWindowHint | windowFlags());

    m_parent = parent;

    connect(ui->about,&QToolButton::clicked,
            [=]
            {
               emit ShowSoftWareInfo();
            }
            );

    connect(ui->close,&QToolButton::clicked,
            [=]
            {
               emit CloseMainWindow();
            }
            );

    connect(ui->min,&QToolButton::clicked,
            [=]
            {
               emit MinMainWindow();
            }
            );


}

SoftwareInfowg::~SoftwareInfowg()
{
    delete ui;
}

void SoftwareInfowg::paintEvent(QPaintEvent *)
{
    //给窗口画背景图
    QPainter p(this);
    QPixmap pixmap(":/res/background.png");
    p.drawPixmap(0,0,this->width(),this->height(),pixmap);
}

void SoftwareInfowg::mouseMoveEvent(QMouseEvent *event)
{
    //设置只允许左键拖动
    if(event->buttons() & Qt::LeftButton)
    {
        //窗口跟随鼠标移动
        //左上角的点  等于 鼠标当前位置  -  差值
       m_parent->move(event->globalPos() - m_pt);
    }
}

void SoftwareInfowg::mousePressEvent(QMouseEvent *ev)
{
    //如果鼠标左键按下
    if(ev->button() == Qt::LeftButton)
    {
        m_pt = ev->globalPos()  - m_parent->geometry().topLeft();
    }
}

void SoftwareInfowg::on_about_clicked()
{

}

void SoftwareInfowg::on_min_clicked()
{

}

void SoftwareInfowg::on_close_clicked()
{

}
