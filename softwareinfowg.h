#ifndef SOFTWAREINFOWG_H
#define SOFTWAREINFOWG_H

#include <QWidget>

namespace Ui {
class SoftwareInfowg;
}

class SoftwareInfowg : public QWidget
{
    Q_OBJECT

public:
    explicit SoftwareInfowg(QWidget *parent = 0);
    ~SoftwareInfowg();
private slots:
    void on_about_clicked();

    void on_min_clicked();

    void on_close_clicked();

private:
    //绘图事件函数
    void paintEvent(QPaintEvent *event);
    //鼠标
    void mouseMoveEvent(QMouseEvent *);

    void mousePressEvent(QMouseEvent *);
signals:
    void CloseMainWindow();
    void ShowSoftWareInfo();
    void MinMainWindow();

private:
    Ui::SoftwareInfowg *ui;

    //保存差值
    QPoint m_pt;//鼠标当前位置   窗口左上角

    QWidget *m_parent;
};

#endif // SOFTWAREINFOWG_H
