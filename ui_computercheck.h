/********************************************************************************
** Form generated from reading UI file 'computercheck.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPUTERCHECK_H
#define UI_COMPUTERCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComputerCheck
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_6;
    QWidget *tab_7;
    QWidget *tab_8;
    QWidget *tab_9;

    void setupUi(QWidget *ComputerCheck)
    {
        if (ComputerCheck->objectName().isEmpty())
            ComputerCheck->setObjectName(QString::fromUtf8("ComputerCheck"));
        ComputerCheck->resize(1670, 755);
        ComputerCheck->setMinimumSize(QSize(1670, 755));
        ComputerCheck->setMaximumSize(QSize(1670, 755));
        horizontalLayout = new QHBoxLayout(ComputerCheck);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(ComputerCheck);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tableWidget = new QTableWidget(tab);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        horizontalLayout_2->addWidget(tableWidget);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        tabWidget->addTab(tab_9, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(ComputerCheck);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ComputerCheck);
    } // setupUi

    void retranslateUi(QWidget *ComputerCheck)
    {
        ComputerCheck->setWindowTitle(QApplication::translate("ComputerCheck", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ComputerCheck", "\345\237\272\347\241\200\344\277\241\346\201\257", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ComputerCheck", "\347\263\273\347\273\237\345\256\211\345\205\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ComputerCheck", "\351\200\232\350\256\257\350\256\276\345\244\207", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ComputerCheck", "\350\241\245\344\270\201\344\277\241\346\201\257", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("ComputerCheck", "\350\275\257\344\273\266\345\210\227\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("ComputerCheck", "\346\234\215\345\212\241\345\210\227\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("ComputerCheck", "\347\253\257\345\217\243\345\210\227\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("ComputerCheck", "\345\274\200\345\205\263\346\234\272\344\277\241\346\201\257", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("ComputerCheck", "\347\263\273\347\273\237\346\227\245\345\277\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComputerCheck: public Ui_ComputerCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTERCHECK_H
