#include "firsttitle.h"
#include "ui_firsttitle.h"
#include <QToolButton>
#include <QPainter>
#include <QDebug>

FirstTitle::FirstTitle(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FirstTitle)
{
    ui->setupUi(this);

    m_mapper = new QSignalMapper(this);
    m_curBtn = ui->check;
    m_curBtn->setStyleSheet("background-color: rgb(255, 255, 255);");

    //key:value == 按钮显示内容:按钮指针
    m_btns.insert(ui->check->text(),ui->check);
    m_btns.insert(ui->internet->text(),ui->internet);
    m_btns.insert(ui->folder->text(),ui->folder);
    m_btns.insert(ui->usb->text(),ui->usb);
    m_btns.insert(ui->picture->text(),ui->picture);
    m_btns.insert(ui->virtul->text(),ui->virtul);
    m_btns.insert(ui->restore->text(),ui->restore);
    m_btns.insert(ui->report->text(),ui->report);

    m_pages.insert(Page::CHECK,ui->check->text());
    m_pages.insert(Page::INTERNET,ui->internet->text());
    m_pages.insert(Page::FOLDER,ui->folder->text());
    m_pages.insert(Page::USB,ui->usb->text());
    m_pages.insert(Page::PICTURE,ui->picture->text());
    m_pages.insert(Page::VIRTULAL_M,ui->virtul->text());
    m_pages.insert(Page::RESTORY,ui->restore->text());
    m_pages.insert(Page::REPORT,ui->report->text());

    //设置按钮信号映射
    QMap<QString,QToolButton*>::iterator it=m_btns.begin();
    for(;it!=m_btns.end();it++)
    {
        m_mapper->setMapping(it.value(), it.value()->text());
        connect(it.value(), SIGNAL(clicked(bool)), m_mapper, SLOT(map()));
    }
    connect(m_mapper, SIGNAL(mapped(QString)), this, SLOT(slotButtonClick(QString)));
}

FirstTitle::~FirstTitle()
{
    delete ui;
}

void FirstTitle::slotButtonClick(Page cur)
{
    QString text = m_pages[cur];
    slotButtonClick(text);
}

void FirstTitle::slotButtonClick(QString text)
{
    qDebug() << "+++++++++++++++" <<text;
    QToolButton* btn = m_btns[text];
    if(btn == m_curBtn)
    {
        return;
    }
    m_curBtn->setStyleSheet("color:black");
    btn->setStyleSheet("background-color: rgb(255, 255, 255);");//设置按钮背景色为白色
    //btn->setStyleSheet("color:red");
    m_curBtn = btn;
    //发信号
    if(text == ui->check->text())
    {
        emit show1_check();
    }

    else if(text ==  ui->internet->text())
    {
        emit show2_internet();
    }
    else if(text == ui->folder->text())
    {
        emit show3_folder();
    }
    else if(text == ui->usb->text())
    {
       emit show4_usb();
    }
    else if(text == ui->picture->text())
    {
        emit show5_picture();
    }
    else if(text == ui->virtul->text())
    {
        emit show6_virtual();
    }
    else if(text == ui->restore->text())
    {
        emit show7_restore();
    }
    else if(text == ui->report->text())
    {
        emit show8_report();
    }
}

void FirstTitle::setParent(QWidget *parent)
{

}

void FirstTitle::paintEvent(QPaintEvent *)
{
    //给窗口画背景图
    QPainter p(this);
    QPixmap pixmap(":/res/background.png");
    p.drawPixmap(0,0,this->width(),this->height(),pixmap);
}
