/********************************************************************************
** Form generated from reading UI file 'firsttitle.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTTITLE_H
#define UI_FIRSTTITLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstTitle
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *check;
    QToolButton *internet;
    QToolButton *folder;
    QToolButton *usb;
    QToolButton *picture;
    QToolButton *virtul;
    QToolButton *restore;
    QToolButton *report;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *L0;
    QLabel *L1;
    QLabel *L2;
    QLabel *L3;
    QLabel *L4;
    QLabel *L5;
    QLabel *L6;
    QLabel *L7;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *FirstTitle)
    {
        if (FirstTitle->objectName().isEmpty())
            FirstTitle->setObjectName(QString::fromUtf8("FirstTitle"));
        FirstTitle->resize(1670, 167);
        FirstTitle->setMinimumSize(QSize(1670, 150));
        FirstTitle->setMaximumSize(QSize(1670, 167));
        horizontalLayout_3 = new QHBoxLayout(FirstTitle);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(FirstTitle);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        check = new QToolButton(widget);
        check->setObjectName(QString::fromUtf8("check"));
        check->setMinimumSize(QSize(90, 90));
        check->setMaximumSize(QSize(90, 90));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/1_check.png"), QSize(), QIcon::Normal, QIcon::Off);
        check->setIcon(icon);
        check->setIconSize(QSize(90, 90));
        check->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        check->setAutoRaise(true);

        horizontalLayout->addWidget(check);

        internet = new QToolButton(widget);
        internet->setObjectName(QString::fromUtf8("internet"));
        internet->setMinimumSize(QSize(90, 90));
        internet->setMaximumSize(QSize(90, 90));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/2_internet.png"), QSize(), QIcon::Normal, QIcon::Off);
        internet->setIcon(icon1);
        internet->setIconSize(QSize(90, 90));
        internet->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        internet->setAutoRaise(true);

        horizontalLayout->addWidget(internet);

        folder = new QToolButton(widget);
        folder->setObjectName(QString::fromUtf8("folder"));
        folder->setMinimumSize(QSize(90, 90));
        folder->setMaximumSize(QSize(90, 90));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/3_folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        folder->setIcon(icon2);
        folder->setIconSize(QSize(90, 90));
        folder->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        folder->setAutoRaise(true);

        horizontalLayout->addWidget(folder);

        usb = new QToolButton(widget);
        usb->setObjectName(QString::fromUtf8("usb"));
        usb->setMinimumSize(QSize(90, 90));
        usb->setMaximumSize(QSize(90, 90));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/4_USB.png"), QSize(), QIcon::Normal, QIcon::Off);
        usb->setIcon(icon3);
        usb->setIconSize(QSize(90, 90));
        usb->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        usb->setAutoRaise(true);

        horizontalLayout->addWidget(usb);

        picture = new QToolButton(widget);
        picture->setObjectName(QString::fromUtf8("picture"));
        picture->setMinimumSize(QSize(90, 90));
        picture->setMaximumSize(QSize(90, 90));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/5_picture.png"), QSize(), QIcon::Normal, QIcon::Off);
        picture->setIcon(icon4);
        picture->setIconSize(QSize(90, 90));
        picture->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        picture->setAutoRaise(true);

        horizontalLayout->addWidget(picture);

        virtul = new QToolButton(widget);
        virtul->setObjectName(QString::fromUtf8("virtul"));
        virtul->setMinimumSize(QSize(90, 90));
        virtul->setMaximumSize(QSize(90, 90));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/res/6_virtul.png"), QSize(), QIcon::Normal, QIcon::Off);
        virtul->setIcon(icon5);
        virtul->setIconSize(QSize(90, 90));
        virtul->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        virtul->setAutoRaise(true);

        horizontalLayout->addWidget(virtul);

        restore = new QToolButton(widget);
        restore->setObjectName(QString::fromUtf8("restore"));
        restore->setMinimumSize(QSize(90, 90));
        restore->setMaximumSize(QSize(90, 90));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/res/7_restore.png"), QSize(), QIcon::Normal, QIcon::Off);
        restore->setIcon(icon6);
        restore->setIconSize(QSize(90, 90));
        restore->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        restore->setAutoRaise(true);

        horizontalLayout->addWidget(restore);

        report = new QToolButton(widget);
        report->setObjectName(QString::fromUtf8("report"));
        report->setMinimumSize(QSize(90, 90));
        report->setMaximumSize(QSize(90, 90));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/res/8_report.png"), QSize(), QIcon::Normal, QIcon::Off);
        report->setIcon(icon7);
        report->setIconSize(QSize(90, 90));
        report->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        report->setAutoRaise(true);

        horizontalLayout->addWidget(report);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        L0 = new QLabel(FirstTitle);
        L0->setObjectName(QString::fromUtf8("L0"));
        L0->setMinimumSize(QSize(90, 0));
        L0->setMaximumSize(QSize(90, 16777215));
        L0->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(L0);

        L1 = new QLabel(FirstTitle);
        L1->setObjectName(QString::fromUtf8("L1"));
        L1->setMinimumSize(QSize(90, 0));
        L1->setMaximumSize(QSize(90, 16777215));
        L1->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(L1);

        L2 = new QLabel(FirstTitle);
        L2->setObjectName(QString::fromUtf8("L2"));
        L2->setMinimumSize(QSize(90, 0));
        L2->setMaximumSize(QSize(90, 16777215));
        L2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(L2);

        L3 = new QLabel(FirstTitle);
        L3->setObjectName(QString::fromUtf8("L3"));
        L3->setMinimumSize(QSize(90, 0));
        L3->setMaximumSize(QSize(90, 16777215));
        L3->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(L3);

        L4 = new QLabel(FirstTitle);
        L4->setObjectName(QString::fromUtf8("L4"));
        L4->setMinimumSize(QSize(90, 0));
        L4->setMaximumSize(QSize(90, 16777215));
        L4->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(L4);

        L5 = new QLabel(FirstTitle);
        L5->setObjectName(QString::fromUtf8("L5"));
        L5->setMinimumSize(QSize(90, 0));
        L5->setMaximumSize(QSize(90, 16777215));
        L5->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(L5);

        L6 = new QLabel(FirstTitle);
        L6->setObjectName(QString::fromUtf8("L6"));
        L6->setMinimumSize(QSize(90, 0));
        L6->setMaximumSize(QSize(90, 16777215));
        L6->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(L6);

        L7 = new QLabel(FirstTitle);
        L7->setObjectName(QString::fromUtf8("L7"));
        L7->setMinimumSize(QSize(90, 0));
        L7->setMaximumSize(QSize(90, 16777215));
        L7->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(L7);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(417, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

#ifndef QT_NO_SHORTCUT
        L0->setBuddy(check);
        L1->setBuddy(internet);
        L2->setBuddy(folder);
        L3->setBuddy(usb);
        L4->setBuddy(picture);
        L5->setBuddy(virtul);
        L6->setBuddy(restore);
        L7->setBuddy(report);
#endif // QT_NO_SHORTCUT

        retranslateUi(FirstTitle);

        QMetaObject::connectSlotsByName(FirstTitle);
    } // setupUi

    void retranslateUi(QWidget *FirstTitle)
    {
        FirstTitle->setWindowTitle(QApplication::translate("FirstTitle", "Form", nullptr));
        check->setText(QApplication::translate("FirstTitle", "FF1", nullptr));
        internet->setText(QApplication::translate("FirstTitle", "FF2", nullptr));
        folder->setText(QApplication::translate("FirstTitle", "FF3", nullptr));
        usb->setText(QApplication::translate("FirstTitle", "FF4", nullptr));
        picture->setText(QApplication::translate("FirstTitle", "FF5", nullptr));
        virtul->setText(QApplication::translate("FirstTitle", "FF6", nullptr));
        restore->setText(QApplication::translate("FirstTitle", "FF7", nullptr));
        report->setText(QApplication::translate("FirstTitle", "F", nullptr));
        L0->setText(QApplication::translate("FirstTitle", "\347\263\273\347\273\237\346\243\200\346\237\245", nullptr));
        L1->setText(QApplication::translate("FirstTitle", "\344\270\212\347\275\221\346\243\200\346\237\245", nullptr));
        L2->setText(QApplication::translate("FirstTitle", "\346\226\207\344\273\266\346\243\200\346\237\245", nullptr));
        L3->setText(QApplication::translate("FirstTitle", "\347\247\273\345\212\250\346\243\200\346\237\245", nullptr));
        L4->setText(QApplication::translate("FirstTitle", "\345\233\276\345\203\217\346\243\200\346\237\245", nullptr));
        L5->setText(QApplication::translate("FirstTitle", "\350\231\232\346\213\237\346\243\200\346\237\245", nullptr));
        L6->setText(QApplication::translate("FirstTitle", "\346\226\207\344\273\266\346\201\242\345\244\215", nullptr));
        L7->setText(QApplication::translate("FirstTitle", "\346\212\245\345\221\212\347\224\237\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstTitle: public Ui_FirstTitle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTTITLE_H
