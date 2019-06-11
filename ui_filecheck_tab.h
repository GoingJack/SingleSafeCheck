/********************************************************************************
** Form generated from reading UI file 'filecheck_tab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECHECK_TAB_H
#define UI_FILECHECK_TAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filecheck_tab
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_6;

    void setupUi(QWidget *filecheck_tab)
    {
        if (filecheck_tab->objectName().isEmpty())
            filecheck_tab->setObjectName(QString::fromUtf8("filecheck_tab"));
        filecheck_tab->resize(1670, 755);
        filecheck_tab->setMinimumSize(QSize(1670, 755));
        filecheck_tab->setMaximumSize(QSize(1670, 755));
        horizontalLayout = new QHBoxLayout(filecheck_tab);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(filecheck_tab);
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
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget->addTab(tab_6, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(filecheck_tab);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(filecheck_tab);
    } // setupUi

    void retranslateUi(QWidget *filecheck_tab)
    {
        filecheck_tab->setWindowTitle(QApplication::translate("filecheck_tab", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("filecheck_tab", "\350\277\221\346\234\237\346\226\207\346\241\243", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("filecheck_tab", "\346\226\207\344\273\266\345\220\215\346\220\234\347\264\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("filecheck_tab", "\346\226\207\344\273\266\345\206\205\345\256\271\346\220\234\347\264\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("filecheck_tab", "\345\212\240\345\257\206\346\226\207\344\273\266\346\220\234\347\264\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("filecheck_tab", "\346\226\207\344\273\266\347\242\216\347\211\207\346\220\234\347\264\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("filecheck_tab", "\351\202\256\344\273\266\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class filecheck_tab: public Ui_filecheck_tab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECHECK_TAB_H
