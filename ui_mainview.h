/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <computercheck.h>
#include <filecheck_tab.h>
#include <firsttitle.h>
#include <internet_tab.h>
#include <picture_tab.h>
#include <report_tab.h>
#include <softwareinfowg.h>
#include <usb_tab.h>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QVBoxLayout *verticalLayout;
    SoftwareInfowg *SoftwareInfo;
    FirstTitle *Ftitle_wg;
    QWidget *Stitle_wg;
    QStackedWidget *stackedWidget;
    ComputerCheck *check;
    Internet_Tab *internet;
    filecheck_tab *folder;
    usb_tab *usb;
    picture_tab *picture;
    QWidget *virtual_m;
    QWidget *restore;
    report_tab *report;

    void setupUi(QWidget *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QString::fromUtf8("MainView"));
        MainView->resize(1670, 870);
        MainView->setMinimumSize(QSize(1670, 870));
        MainView->setMaximumSize(QSize(1670, 870));
        verticalLayout = new QVBoxLayout(MainView);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        SoftwareInfo = new SoftwareInfowg(MainView);
        SoftwareInfo->setObjectName(QString::fromUtf8("SoftwareInfo"));

        verticalLayout->addWidget(SoftwareInfo);

        Ftitle_wg = new FirstTitle(MainView);
        Ftitle_wg->setObjectName(QString::fromUtf8("Ftitle_wg"));

        verticalLayout->addWidget(Ftitle_wg);

        Stitle_wg = new QWidget(MainView);
        Stitle_wg->setObjectName(QString::fromUtf8("Stitle_wg"));

        verticalLayout->addWidget(Stitle_wg);

        stackedWidget = new QStackedWidget(MainView);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        check = new ComputerCheck();
        check->setObjectName(QString::fromUtf8("check"));
        stackedWidget->addWidget(check);
        internet = new Internet_Tab();
        internet->setObjectName(QString::fromUtf8("internet"));
        stackedWidget->addWidget(internet);
        folder = new filecheck_tab();
        folder->setObjectName(QString::fromUtf8("folder"));
        stackedWidget->addWidget(folder);
        usb = new usb_tab();
        usb->setObjectName(QString::fromUtf8("usb"));
        stackedWidget->addWidget(usb);
        picture = new picture_tab();
        picture->setObjectName(QString::fromUtf8("picture"));
        stackedWidget->addWidget(picture);
        virtual_m = new QWidget();
        virtual_m->setObjectName(QString::fromUtf8("virtual_m"));
        stackedWidget->addWidget(virtual_m);
        restore = new QWidget();
        restore->setObjectName(QString::fromUtf8("restore"));
        stackedWidget->addWidget(restore);
        report = new report_tab();
        report->setObjectName(QString::fromUtf8("report"));
        stackedWidget->addWidget(report);

        verticalLayout->addWidget(stackedWidget);

        stackedWidget->raise();
        SoftwareInfo->raise();
        Ftitle_wg->raise();
        Stitle_wg->raise();

        retranslateUi(MainView);

        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QWidget *MainView)
    {
        MainView->setWindowTitle(QApplication::translate("MainView", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
