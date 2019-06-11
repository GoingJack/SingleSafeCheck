#ifndef FIRSTTITLE_H
#define FIRSTTITLE_H

#include <QWidget>
#include <QSignalMapper>
#include <QMap>
enum Page{CHECK,INTERNET,FOLDER,USB,PICTURE,VIRTULAL_M,RESTORY,REPORT};
namespace Ui {
class FirstTitle;
}
class QToolButton;
class FirstTitle : public QWidget
{
    Q_OBJECT

public:
    explicit FirstTitle(QWidget *parent = 0);
    ~FirstTitle();
public slots:
    void slotButtonClick(Page cur);
    void slotButtonClick(QString text);
    void setParent(QWidget *parent);
protected:
    void paintEvent(QPaintEvent *);
signals:
    void show1_check();
    void show2_internet();
    void show3_folder();
    void show4_usb();
    void show5_picture();
    void show6_virtual();
    void show7_restore();
    void show8_report();


private:
    Ui::FirstTitle *ui;

    QSignalMapper* m_mapper;
    QToolButton* m_curBtn;
    QMap<QString,QToolButton*>m_btns;
    QMap<Page,QString>m_pages;
};

#endif // FIRSTTITLE_H
