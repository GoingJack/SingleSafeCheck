#ifndef FILECHECK_TAB_H
#define FILECHECK_TAB_H

#include <QWidget>

namespace Ui {
class filecheck_tab;
}

class filecheck_tab : public QWidget
{
    Q_OBJECT

public:
    explicit filecheck_tab(QWidget *parent = 0);
    ~filecheck_tab();

private:
    Ui::filecheck_tab *ui;
};

#endif // FILECHECK_TAB_H
