#include "mainwindow.h"

#include <QApplication>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <bits/stdc++.h>
#include <QString>
#include <QFileInfo>
using namespace std;
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    QString path=QCoreApplication::applicationDirPath()+"\\first_run.falg";
    qDebug()<<path.toStdString().c_str();
    for(int i=0;i<path.size();i++){
        if(path[i]=='/') path[i]='\\';
    }

//    QFileInfo fileinfo(path);
    qDebug()<<path.toStdString().c_str();
    if(QFileInfo::exists(path.toStdString().c_str())){
        path.push_front("\"");
        path.push_back("\"");
        qDebug()<<path;
        QString cmd="del /f /q "+path;
        system(cmd.toStdString().c_str());
        QString exepath=QCoreApplication::applicationFilePath();
        for(int i=0;i<exepath.size();i++){
            if(exepath[i]=='/') exepath[i]='\\';
        }
        exepath.push_front("\"");
        exepath.push_back("\"");
        cmd="schtasks.exe /create /tn \"HealthHelper64\" /ru SYSTEM /sc ONSTART /tr "+exepath;
        system(cmd.toStdString().c_str());
        MessageBox(0,TEXT("欢迎使用,初始化已成功!"),TEXT("你好,用户"),MB_OK);
    }
    while(true){
        time_t ti=time(NULL);
        tm *b=localtime(&ti);
        if(b->tm_hour>=23){
            w.show();
            a.exec();
            if(w.isClose) return 1;
        }
        Sleep(300000);
    }
//    SetWindowPos(HWND(w.windowHandle()),HWND_TOPMOST,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE|SWP_SHOWWINDOW);
//    SetForegroundWindow(HWND(w.windowHandle()));

//    a.closeAllWindows();
    return 0;
//     return 0;
}
