#ifndef REPORT_TAB_H
#define REPORT_TAB_H

#include <QWidget>

namespace Ui {
class report_tab;
}

class report_tab : public QWidget
{
    Q_OBJECT

public:
    explicit report_tab(QWidget *parent = 0);
    ~report_tab();

private:
    Ui::report_tab *ui;
};

#endif // REPORT_TAB_H
