/********************************************************************************
** Form generated from reading UI file 'picture_tab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURE_TAB_H
#define UI_PICTURE_TAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_picture_tab
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *picture_tab)
    {
        if (picture_tab->objectName().isEmpty())
            picture_tab->setObjectName(QString::fromUtf8("picture_tab"));
        picture_tab->resize(1670, 755);
        picture_tab->setMinimumSize(QSize(1670, 755));
        picture_tab->setMaximumSize(QSize(1670, 755));
        horizontalLayout = new QHBoxLayout(picture_tab);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(picture_tab);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(picture_tab);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(picture_tab);
    } // setupUi

    void retranslateUi(QWidget *picture_tab)
    {
        picture_tab->setWindowTitle(QApplication::translate("picture_tab", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("picture_tab", "\346\226\207\345\255\227\350\257\206\345\210\253", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("picture_tab", "\345\233\276\347\211\207\346\265\217\350\247\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class picture_tab: public Ui_picture_tab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURE_TAB_H
