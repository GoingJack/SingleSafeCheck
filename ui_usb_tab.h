/********************************************************************************
** Form generated from reading UI file 'usb_tab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USB_TAB_H
#define UI_USB_TAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usb_tab
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *usb_tab)
    {
        if (usb_tab->objectName().isEmpty())
            usb_tab->setObjectName(QString::fromUtf8("usb_tab"));
        usb_tab->resize(1670, 755);
        usb_tab->setMinimumSize(QSize(1670, 755));
        usb_tab->setMaximumSize(QSize(1670, 755));
        horizontalLayout = new QHBoxLayout(usb_tab);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(usb_tab);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(usb_tab);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(usb_tab);
    } // setupUi

    void retranslateUi(QWidget *usb_tab)
    {
        usb_tab->setWindowTitle(QApplication::translate("usb_tab", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("usb_tab", "USB\345\270\270\350\247\204\344\273\213\350\264\250\346\243\200\346\237\245", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("usb_tab", "USB\346\267\261\345\272\246\344\273\213\350\264\250\346\243\200\346\237\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class usb_tab: public Ui_usb_tab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USB_TAB_H
