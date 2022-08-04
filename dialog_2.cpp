#include "dialog_2.h"
#include "qaudiooutput.h"
#include "ui_dialog_2.h"
#include <windows.h>
Dialog_2::Dialog_2(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dialog_2){
        ui->setupUi(this);
        player = new QMediaPlayer;
        videoWidget = new QVideoWidget;
        player->setVideoOutput(videoWidget);
        QString a=QCoreApplication::applicationDirPath()+"\\resource\\video2.mp4";
        for(int i=0;i<a.size();i++){
            if(a[i]=='/') a[i]='\\';
        }
        connect(ui->pushButton,&QPushButton::pressed, this,&Dialog_2::button1);
        connect(ui->pushButton_2,&QPushButton::pressed,this, &Dialog_2::button2);
        connect(ui->pushButton_3,&QPushButton::pressed, this,&Dialog_2::button3);
        connect(ui->pushButton_4,&QPushButton::pressed,this, &Dialog_2::button4);
        connect(ui->verticalSlider,&QSlider::valueChanged,this,&Dialog_2::slider_ok);
        qDebug()<<a.toStdString().c_str();
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
Dialog_2::~Dialog_2(){
    delete ui;
}
void Dialog_2::button1(){
    this->player->stop();
    done(0);
}
void Dialog_2::button2(){
    ui->label_4->setEnabled(true);
    ui->verticalSlider->setEnabled(true);
}
void Dialog_2::button3(){
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
void Dialog_2::button4(){
    this->player->stop();
    done(1);
}
void Dialog_2::slider_ok(){
    int val=ui->verticalSlider->value();
    if(val==ui->verticalSlider->maximum()){
        SetWindowPos(HWND(this->winId()),HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE);
         MessageBox(0,TEXT("唉。"),TEXT("唉"),MB_OK|MB_ICONWARNING);
        SetWindowPos(HWND(this->winId()),HWND_TOPMOST,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE);
        this->player->stop();
        done(2);
    }
}
