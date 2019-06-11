#ifndef COMPUTERCHECK_H
#define COMPUTERCHECK_H

#include <QWidget>

namespace Ui {
class ComputerCheck;
}

class ComputerCheck : public QWidget
{
    Q_OBJECT

public:
    explicit ComputerCheck(QWidget *parent = 0);
    ~ComputerCheck();

    void SetBasicInfo();
    void SetHarddiskInfo();
    void SetPartitionInfo();
    void SetUserInfo();
    void SetInterInfo();
    void SetPainterInfo();

    //
    QString getSysInfo(QString SaveInfo,QString KeyValue);

private:
    Ui::ComputerCheck *ui;
    int currentRowNum;
};

#endif // COMPUTERCHECK_H
