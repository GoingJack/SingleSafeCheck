/********************************************************************************
** Form generated from reading UI file 'internet_tab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERNET_TAB_H
#define UI_INTERNET_TAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Internet_Tab
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;

    void setupUi(QWidget *Internet_Tab)
    {
        if (Internet_Tab->objectName().isEmpty())
            Internet_Tab->setObjectName(QString::fromUtf8("Internet_Tab"));
        Internet_Tab->resize(1670, 755);
        Internet_Tab->setMinimumSize(QSize(1670, 755));
        Internet_Tab->setMaximumSize(QSize(1670, 755));
        horizontalLayout = new QHBoxLayout(Internet_Tab);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(Internet_Tab);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(Internet_Tab);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Internet_Tab);
    } // setupUi

    void retranslateUi(QWidget *Internet_Tab)
    {
        Internet_Tab->setWindowTitle(QApplication::translate("Internet_Tab", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Internet_Tab", "\345\270\270\350\247\204\344\270\212\347\275\221", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Internet_Tab", "\346\267\261\345\272\246\344\270\212\347\275\221", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Internet_Tab", "\350\231\232\346\213\237\346\234\272\344\270\212\347\275\221\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Internet_Tab: public Ui_Internet_Tab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERNET_TAB_H
