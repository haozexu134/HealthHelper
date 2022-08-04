#include "mainwindow.h"
#include "qdialog.h"
#include "dialog.h"
#include "ui_mainwindow2.h"
#include <bits/stdc++.h>
#include <windows.h>
#include <QPushButton>
#include <QtMultimedia/QAudioOutput>
#include <QObject>
#include "timer.h"
#include"ui_timer.h"
#include "dialog_2.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->setWindowFlags(Qt::WindowStaysOnTopHint);
    ui->setupUi(this);
    player = new QMediaPlayer;
    videoWidget = new QVideoWidget;
    player->setVideoOutput(videoWidget);
    QString a=QCoreApplication::applicationDirPath()+"\\resource\\video1.mp4";
    for(int i=0;i<a.size();i++){
        if(a[i]=='/') a[i]='\\';
    }
    QPushButton *qb1;
    qb1=ui->pushButton;
    qb1->setEnabled(true);
//    qb1->setCheckable(true);
    connect(qb1,&QPushButton::pressed, this,&MainWindow::ButtonHandle);
    QPushButton *qb2;
    qb2=ui->pushButton_2;
    qb2->setEnabled(true);
//    qb2->setCheckable(true);
    connect(qb2,&QPushButton::pressed,this, &MainWindow::ButtonHandle_2);
    QPushButton *qb3;
    qb3=ui->pushButton_3;
    qb3->setEnabled(true);
//    qb3->setCheckable(true);
    connect(qb3,&QPushButton::pressed,this, &MainWindow::ButtonHandle_3);
    std::printf("%s",a.toStdString().c_str());
    player->setSource(QUrl::fromLocalFile(a.toStdString().c_str())); // 该路径换为自己的视频路径

    videoWidget->show();
    QAudioOutput *qout;
    qout=new QAudioOutput;
    qout->setVolume(1.0);
    player->setAudioOutput(qout);
    player->setLoops(0x3f3f3f3f);
    player->play();
    ui->verticalLayout->addWidget(videoWidget);
    ui->setsize(this);
}
void MainWindow::ButtonHandle(){
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
void MainWindow::ButtonHandle_2(){
    qDebug()<<"This:"<<this<<"\n";
//   fprintf(fopen("debug.txt","r+"),"********This:%d",this);
   Dialog dlg(this);
   dlg.show();
   int ret=dlg.exec();
   dlg.close();
   dlg.clearFocus();
   dlg.clearMask();
   dlg.destroyed();
   if(ret) {
       this->hide();
       this->player->stop();
       Timer tim(this,ret);
       int timer=ret;
       tim.show();
       tim.showing(timer);
       tim.time_start();
       tim.exec();
//       tim.close();
       this->player->play();
       this->show();
   }
   return;
}
void MainWindow::ButtonHandle_3(){
    Dialog_2 dlg(this);
    this->hide();
    this->player->stop();
    dlg.show();
    int ret=dlg.exec();
    dlg.close();
    dlg.clearFocus();
    dlg.clearMask();
    dlg.destroyed();
    switch(ret){
        case 0:
            this->show();
            this->player->play();
            break;
        case 1:
            this->ButtonHandle_2();
            break;
        case 2:
            this->close();
            exit(1);
            this->isClose=true;
            break;
        default:
            this->show();
            this->player->play();
    }
}
MainWindow::~MainWindow()
{
    this->player->stop();
    delete ui;
}
