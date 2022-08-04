#ifndef TIMER_H
#define TIMER_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QTimer>
namespace Ui {
    class Timer;
}
class Timer : public QDialog
{
    Q_OBJECT
public:
    explicit Timer(QWidget *parent=0,int timer=0);
    ~Timer();
    void showing(int timer);
    void time_start();
private slots:
    void clicked_1();
    void clicked_2();
    void time_on();
    void time_up();
private:
    int m_count=0,m_maxval=0;
    Ui::Timer *ui;
    QTimer *mytimer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_3;
};

#endif // TIMER_H
