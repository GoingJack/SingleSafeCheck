#ifndef INTERNET_TAB_H
#define INTERNET_TAB_H

#include <QWidget>

namespace Ui {
class Internet_Tab;
}

class Internet_Tab : public QWidget
{
    Q_OBJECT

public:
    explicit Internet_Tab(QWidget *parent = 0);
    ~Internet_Tab();

private:
    Ui::Internet_Tab *ui;
};

#endif // INTERNET_TAB_H
