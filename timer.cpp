#include "timer.h"
#include "ui_timer.h"
#include<QDebug>
#include<windows.h>
#include<time.h>
#include<QThread>
#include<defbase.h>
#include<QTimer>
//using namespace std;
Timer::Timer(QWidget *parent,int timer):
 QDialog(parent),
 ui(new Ui::Timer)
{
    qDebug()<<"UI:"<<ui<<"\n";
//    fprintf(fopen("debug.txt","r+"),"*******UI:%d",ui);
//    printf("Setup@Dialog\n\tsetupUI\n");
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::pressed,this, &Timer::clicked_1);
    connect(ui->pushButton_2,&QPushButton::pressed,this, &Timer::clicked_2);
//   QThread* thread = new QThread(0);
       // worker需在线程启动后开启，这也是耗时操作的start()函数是槽函数的原因
    mytimer=new QTimer;
    mytimer->setTimerType(Qt::VeryCoarseTimer);
        //链接定时器信号timeout，当调用start时，触发槽函数on_timer
    connect(mytimer, &QTimer::timeout, this, &Timer::time_on);
    m_maxval=timer;
}

Timer::~Timer(){
    delete ui;
}
void Timer::showing(int timer){
    qDebug()<<"TIM "<<timer<<"\n";
    int hh=timer/60,mm=timer%60;
//    while(hh||mm){
//        mm--;
//        if(mm<0) mm=59,hh--;
//        if(hh<0) break;
        ui->label->setText(QString::number(hh));
        ui->label_3->setText(QString::number(mm));
//        Sleep(1000);
//    }
    done(0);
}
void Timer::clicked_1(){
//    MessageBoxA(0,"0","0",MB_OK);
//    done(ui->spinBox->value());
    SetWindowPos(HWND(this->winId()),HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE);
    int ret=MessageBox(0,TEXT("您的电脑将在五分钟后关机。\n注意保存文件。\n若要取消关机,按[取消]键。"),TEXT("提示"),MB_OKCANCEL);
    if(ret==IDOK){
        system("shutdown /s /f /t 300");
        MessageBox(0,TEXT("关机操作设置完成。"),TEXT("提示"),MB_OK|MB_ICONINFORMATION);
    }else if(ret==IDCANCEL||ret==IDCLOSE){
        MessageBox(0,TEXT("取消成功。"),TEXT("提示"),MB_OK|MB_ICONINFORMATION);
    }
    this->setWindowFlag(Qt::WindowStaysOnTopHint,true);
    SetWindowPos(HWND(this->winId()),HWND_TOPMOST,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE);
}
void Timer::clicked_2(){
    done(0);
}
void Timer::time_start(){
    mytimer->start(std::chrono::minutes(1));
    m_count=0;
}
void Timer::time_up(){
    mytimer->stop();
    done(0);
}
void Timer::time_on(){
    m_count++;
    if(m_count>=m_maxval) time_up();
    int litime=m_maxval-m_count;
    int hh=litime/60,mm=litime%60;
    ui->label->setText(QString::number(hh));
    ui->label_3->setText(QString::number(mm));
}
