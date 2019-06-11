#ifndef FIRSTTITLEWG_H
#define FIRSTTITLEWG_H

#include <QWidget>

namespace Ui {
class FirstTitleWg;
}

class FirstTitleWg : public QWidget
{
    Q_OBJECT

public:
    explicit FirstTitleWg(QWidget *parent = 0);
    ~FirstTitleWg();

private:
    Ui::FirstTitleWg *ui;
};

#endif // FIRSTTITLEWG_H
