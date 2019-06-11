#ifndef PICTURE_TAB_H
#define PICTURE_TAB_H

#include <QWidget>

namespace Ui {
class picture_tab;
}

class picture_tab : public QWidget
{
    Q_OBJECT

public:
    explicit picture_tab(QWidget *parent = 0);
    ~picture_tab();

private:
    Ui::picture_tab *ui;
};

#endif // PICTURE_TAB_H
