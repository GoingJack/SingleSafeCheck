#-------------------------------------------------
#
# Project created by QtCreator 2019-06-08T23:08:20
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NewSafeCheck
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        computercheck.cpp \
        filecheck_tab.cpp \
        firsttitle.cpp \
        firsttitlewg.cpp \
        internet_tab.cpp \
        main.cpp \
        mainview.cpp \
        mainwindow.cpp \
        picture_tab.cpp \
        report_tab.cpp \
        softwareinfowg.cpp \
        usb_tab.cpp

HEADERS += \
        computercheck.h \
        filecheck_tab.h \
        firsttitle.h \
        firsttitlewg.h \
        internet_tab.h \
        mainview.h \
        mainwindow.h \
        picture_tab.h \
        report_tab.h \
        softwareinfowg.h \
        ui_computercheck.h \
        ui_filecheck_tab.h \
        ui_firsttitle.h \
        ui_internet_tab.h \
        ui_mainview.h \
        ui_mainwindow.h \
        ui_picture_tab.h \
        ui_report_tab.h \
        ui_softwareinfowg.h \
        ui_usb_tab.h \
        usb_tab.h

FORMS += \
        computercheck.ui \
        filecheck_tab.ui \
        firsttitle.ui \
        firsttitlewg.ui \
        internet_tab.ui \
        mainview.ui \
        mainwindow.ui \
        picture_tab.ui \
        report_tab.ui \
        softwareinfowg.ui \
        usb_tab.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qres.qrc
