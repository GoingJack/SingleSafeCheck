#ifndef USB_TAB_H
#define USB_TAB_H

#include <QWidget>

namespace Ui {
class usb_tab;
}

class usb_tab : public QWidget
{
    Q_OBJECT

public:
    explicit usb_tab(QWidget *parent = 0);
    ~usb_tab();

private:
    Ui::usb_tab *ui;
};

#endif // USB_TAB_H
