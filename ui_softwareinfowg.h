/********************************************************************************
** Form generated from reading UI file 'softwareinfowg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOFTWAREINFOWG_H
#define UI_SOFTWAREINFOWG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SoftwareInfowg
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QLabel *maininfo;
    QSpacerItem *horizontalSpacer;
    QToolButton *about;
    QToolButton *min;
    QToolButton *close;

    void setupUi(QWidget *SoftwareInfowg)
    {
        if (SoftwareInfowg->objectName().isEmpty())
            SoftwareInfowg->setObjectName(QString::fromUtf8("SoftwareInfowg"));
        SoftwareInfowg->resize(1670, 40);
        SoftwareInfowg->setMinimumSize(QSize(1670, 40));
        SoftwareInfowg->setMaximumSize(QSize(1670, 42));
        horizontalLayout = new QHBoxLayout(SoftwareInfowg);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        logo = new QLabel(SoftwareInfowg);
        logo->setObjectName(QString::fromUtf8("logo"));

        horizontalLayout->addWidget(logo);

        maininfo = new QLabel(SoftwareInfowg);
        maininfo->setObjectName(QString::fromUtf8("maininfo"));
        maininfo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 9pt \"\346\226\260\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(maininfo);

        horizontalSpacer = new QSpacerItem(1145, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        about = new QToolButton(SoftwareInfowg);
        about->setObjectName(QString::fromUtf8("about"));
        about->setMinimumSize(QSize(20, 20));
        about->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        about->setIcon(icon);
        about->setAutoRaise(true);

        horizontalLayout->addWidget(about);

        min = new QToolButton(SoftwareInfowg);
        min->setObjectName(QString::fromUtf8("min"));
        min->setMinimumSize(QSize(20, 20));
        min->setMaximumSize(QSize(20, 20));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/min.png"), QSize(), QIcon::Normal, QIcon::Off);
        min->setIcon(icon1);
        min->setAutoRaise(true);

        horizontalLayout->addWidget(min);

        close = new QToolButton(SoftwareInfowg);
        close->setObjectName(QString::fromUtf8("close"));
        close->setMinimumSize(QSize(20, 20));
        close->setMaximumSize(QSize(20, 20));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon2);
        close->setAutoRaise(true);

        horizontalLayout->addWidget(close);


        retranslateUi(SoftwareInfowg);

        QMetaObject::connectSlotsByName(SoftwareInfowg);
    } // setupUi

    void retranslateUi(QWidget *SoftwareInfowg)
    {
        SoftwareInfowg->setWindowTitle(QApplication::translate("SoftwareInfowg", "Form", nullptr));
        logo->setText(QApplication::translate("SoftwareInfowg", "TextLabel", nullptr));
        maininfo->setText(QApplication::translate("SoftwareInfowg", "\346\234\227\345\250\201\350\256\241\347\256\227\346\234\272\344\270\255\346\226\255\344\277\235\345\257\206\346\243\200\346\237\245\347\263\273\347\273\237V1.0(\351\235\236\346\266\211\345\257\206\345\215\225\346\234\272\347\211\210)", nullptr));
        about->setText(QApplication::translate("SoftwareInfowg", "...", nullptr));
        min->setText(QApplication::translate("SoftwareInfowg", "...", nullptr));
        close->setText(QApplication::translate("SoftwareInfowg", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SoftwareInfowg: public Ui_SoftwareInfowg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOFTWAREINFOWG_H
