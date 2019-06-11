/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <softwareinfowg.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    SoftwareInfowg *SoftwareInfo;
    QWidget *Ftitle_wg;
    QWidget *Stitle_wg;
    QStackedWidget *stackedWidget;
    QWidget *check;
    QWidget *internet;
    QWidget *folder;
    QWidget *usb;
    QWidget *picture;
    QWidget *virtual_machine;
    QWidget *restore;
    QWidget *report;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1670, 870);
        MainWindow->setMinimumSize(QSize(1670, 870));
        MainWindow->setMaximumSize(QSize(1670, 870));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SoftwareInfo = new SoftwareInfowg(centralWidget);
        SoftwareInfo->setObjectName(QString::fromUtf8("SoftwareInfo"));

        verticalLayout->addWidget(SoftwareInfo);

        Ftitle_wg = new QWidget(centralWidget);
        Ftitle_wg->setObjectName(QString::fromUtf8("Ftitle_wg"));

        verticalLayout->addWidget(Ftitle_wg);

        Stitle_wg = new QWidget(centralWidget);
        Stitle_wg->setObjectName(QString::fromUtf8("Stitle_wg"));

        verticalLayout->addWidget(Stitle_wg);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        check = new QWidget();
        check->setObjectName(QString::fromUtf8("check"));
        stackedWidget->addWidget(check);
        internet = new QWidget();
        internet->setObjectName(QString::fromUtf8("internet"));
        stackedWidget->addWidget(internet);
        folder = new QWidget();
        folder->setObjectName(QString::fromUtf8("folder"));
        stackedWidget->addWidget(folder);
        usb = new QWidget();
        usb->setObjectName(QString::fromUtf8("usb"));
        stackedWidget->addWidget(usb);
        picture = new QWidget();
        picture->setObjectName(QString::fromUtf8("picture"));
        stackedWidget->addWidget(picture);
        virtual_machine = new QWidget();
        virtual_machine->setObjectName(QString::fromUtf8("virtual_machine"));
        stackedWidget->addWidget(virtual_machine);
        restore = new QWidget();
        restore->setObjectName(QString::fromUtf8("restore"));
        stackedWidget->addWidget(restore);
        report = new QWidget();
        report->setObjectName(QString::fromUtf8("report"));
        stackedWidget->addWidget(report);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
