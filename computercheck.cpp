#include "computercheck.h"
#include "ui_computercheck.h"

#include <QHostAddress>
#include <QNetworkInterface>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QSysInfo>
#include "QSettings"
#include "QDebug"
#include <QDesktopWidget>
#include <QFileInfoList>
#include <QDir>
#include <QLibrary>
#include <QTimer>
#include <QHostInfo>
#include <QDebug>
#include <QProcess>
#include <QStorageInfo>
#include <QList>

ComputerCheck::ComputerCheck(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ComputerCheck)
{
    ui->setupUi(this);
    ui->tabWidget->setCurrentWidget(ui->tab);

    ui->tableWidget->setColumnCount(8);
    ui->tableWidget->setColumnWidth(0,130);
    ui->tableWidget->setColumnWidth(1,130);
    ui->tableWidget->setColumnWidth(2,315);
    ui->tableWidget->setColumnWidth(3,210);
    ui->tableWidget->setColumnWidth(4,215);
    ui->tableWidget->setColumnWidth(5,110);
    ui->tableWidget->setColumnWidth(6,110);
    ui->tableWidget->setColumnWidth(7,450);

    ui->tableWidget->verticalHeader()->setVisible(false);   //隐藏列表头
    ui->tableWidget->horizontalHeader()->setVisible(false); //隐藏行表头

    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//禁止编辑


    ui->tableWidget->setRowCount(100);

    //系统信息
    SetBasicInfo();

    //分区信息
    SetPartitionInfo();
    //设置硬盘信息

    //分区信息

    //从盘信息


}

ComputerCheck::~ComputerCheck()
{
    delete ui;
}

//QString osVersion()
//{
//    QString sysBit;
//    if(getComputerbit())
//        sysBit = "64bit";
//    else
//        sysBit = "32bit";

//    QString m_osDescirbe = QSysInfo::prettyProductName() + " " + sysBit;
//    return m_osDescirbe;
//}

void ComputerCheck::SetBasicInfo()
{
    //设置系统信息

    ui->tableWidget->setItem(0,0,new QTableWidgetItem("系统信息"));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem("名称"));
    ui->tableWidget->setItem(1,1,new QTableWidgetItem("计算机的名称."));
    ui->tableWidget->setItem(2,1,new QTableWidgetItem("操作系统"));
    ui->tableWidget->setItem(3,1,new QTableWidgetItem("系统安装时间"));
    ui->tableWidget->setItem(4,1,new QTableWidgetItem("主机的序列号"));
    ui->tableWidget->setItem(5,1,new QTableWidgetItem("物理内存"));
    //1.计算机名称
    QString machineName = QHostInfo::localHostName();
    ui->tableWidget->setItem(1,2,new QTableWidgetItem(machineName));
    //2.操作系统
    QString OSWordSize;
    if(QSysInfo::WordSize == 64)
    {
        OSWordSize = "64";
    }
    else
    {
        OSWordSize = "32";
    }
    QString os_version = QSysInfo::prettyProductName() + " " + OSWordSize;
    ui->tableWidget->setItem(2,2,new QTableWidgetItem(os_version));
    //3.系统安装时间
    //system("systeminfo | find \"日期\"");
    QProcess p(0);
    p.start("cmd", QStringList()<<"/c"<<"systeminfo");
    p.waitForStarted();
    p.waitForFinished();
    QString SaveSysInfo=QString::fromLocal8Bit(p.readAllStandardOutput());
    //getSysInfo(SaveSysInfo,"初始安装日期:");
    ui->tableWidget->setItem(3,2,new QTableWidgetItem(getSysInfo(SaveSysInfo,"初始安装日期:")));
    //4.主机序列号
    ui->tableWidget->setItem(4,2,new QTableWidgetItem(getSysInfo(SaveSysInfo,"产品 ID:")));
    //5.主机的物理内存
    ui->tableWidget->setItem(5,2,new QTableWidgetItem(getSysInfo(SaveSysInfo,"物理内存总量:")));

    //设置当前行为5
    currentRowNum = 5;
}

void ComputerCheck::SetPartitionInfo()
{
    ui->tableWidget->setItem(++currentRowNum,0,new QTableWidgetItem("分区信息"));
    ui->tableWidget->setItem(currentRowNum,1,new QTableWidgetItem("分区"));
    ui->tableWidget->setItem(currentRowNum,2,new QTableWidgetItem("文件系统"));
    ui->tableWidget->setItem(currentRowNum,3,new QTableWidgetItem("总容量"));
    ui->tableWidget->setItem(currentRowNum,4,new QTableWidgetItem("剩余空间"));
    QList<QStorageInfo> list = QStorageInfo::mountedVolumes();
    for(QStorageInfo& si : list)
    {
        ui->tableWidget->setItem(++currentRowNum,1,new QTableWidgetItem((QString)si.displayName()));
        ui->tableWidget->setItem(currentRowNum,2,new QTableWidgetItem((QString)si.fileSystemType()));
        int convertGB = si.bytesTotal()/1024/1024/1024;
        QString tmp = QString("%1GB").arg(convertGB);
        ui->tableWidget->setItem(currentRowNum,3,new QTableWidgetItem(tmp));
        convertGB = si.bytesFree()/1024/1024/1024;
        tmp = QString("%1GB").arg(convertGB);
        ui->tableWidget->setItem(currentRowNum,4,new QTableWidgetItem(tmp));
    }

    QString name = qgetenv("USERNAME");
    qDebug() << "User Name:" << name;
    //QHostInfo类作用，获取主机名，也可以通过主机名来查找IP地址，或者通过IP地址来反向查找主机名。
    QString localHostName = QHostInfo::localHostName();
    qDebug() << "LocalHostName:" << localHostName;

    //获取IP地址
    QHostInfo info = QHostInfo::fromName(localHostName);
    qDebug() << "IP Address:" << info.addresses();

    foreach(QHostAddress address, info.addresses())
    {
        if (address.protocol() == QAbstractSocket::IPv4Protocol)
            qDebug() << "IPv4 Address:" << address.toString();
    }

    foreach (QHostAddress address, QNetworkInterface::allAddresses())
    {
        qDebug() << "Address:" << address;
    }
    foreach (QNetworkInterface netInterface, QNetworkInterface::allInterfaces())
    {
        //设备名
        qDebug() << "Device:" << netInterface.name();

        //MAC地址
        qDebug() << "HardwareAddress:" << netInterface.hardwareAddress();
    }
}
/*
 * 参数 SaveSysInfo:执行systeminfo 之后的返回的结果
 * KeyValue:需要提取的关键字的Key
 * 例如: 初始安装日期:     2019/5/19, 20:27:59   前者为Key
 * 返回的结果就是：2019/5/19, 20:27:59
*/
QString ComputerCheck::getSysInfo(QString SaveSysInfo, QString KeyValue)
{
    QString strTemp = SaveSysInfo;
    int position = strTemp.indexOf(KeyValue);//初始安装日期:
    strTemp = strTemp.mid(position);
    position = strTemp.indexOf("\r\n");
    QString Temp = strTemp.mid(position);
    strTemp.replace(Temp,"");
    strTemp.replace(KeyValue,"");
    strTemp = strTemp.trimmed();
    return strTemp;
}

