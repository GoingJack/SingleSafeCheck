/********************************************************************************
** Form generated from reading UI file 'report_tab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_TAB_H
#define UI_REPORT_TAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_report_tab
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *report_tab)
    {
        if (report_tab->objectName().isEmpty())
            report_tab->setObjectName(QString::fromUtf8("report_tab"));
        report_tab->resize(1670, 755);
        report_tab->setMinimumSize(QSize(1670, 755));
        report_tab->setMaximumSize(QSize(1670, 755));
        horizontalLayout = new QHBoxLayout(report_tab);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(report_tab);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(report_tab);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(report_tab);
    } // setupUi

    void retranslateUi(QWidget *report_tab)
    {
        report_tab->setWindowTitle(QApplication::translate("report_tab", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("report_tab", "\346\212\245\345\221\212\345\257\274\345\207\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("report_tab", "\346\234\254\346\234\272\346\212\245\345\221\212", nullptr));
    } // retranslateUi

};

namespace Ui {
    class report_tab: public Ui_report_tab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_TAB_H
