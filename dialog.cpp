#include "dialog.h"
#include "ui_dialog.h"
#include<QDebug>
#include<windows.h>
#include<time.h>
#include<defbase.h>
//using namespace std;
Dialog::Dialog(QWidget *parent):
 QDialog(parent),
 ui(new Ui::Dialog)
{
    qDebug()<<"UI:"<<ui<<"\n";
//    fprintf(fopen("debug.txt","r+"),"*******UI:%d",ui);
//    printf("Setup@Dialog\n\tsetupUI\n");
    ui->setupUi(this);
    qDebug()<<"SETUPUI\n";
//    connect(buttonBox, &QDialogButtonBox::accepted, this, &Dialog::accept);
//    connect(buttonBox, &QDialogButtonBox::rejected, this, &Dialog::reject);
    qDebug()<<"-----Yes Connect----\n";
    time_t a=time(NULL);
    tm *b=localtime(&a);
    QString str="";
    qDebug()<<"----Yes Time----\n";
    str+=QString::number(b->tm_hour)+"时"+QString::number(b->tm_min)+"分";
    ui->label_2->setText(str);
    qDebug()<<"_____ASSD 1_____\n";

    qDebug()<<"____DEEEQ1____\n";
    QString str2="";
    qint64 hh,mm;
    hh=b->tm_hour-23;
    mm=b->tm_min;
    str2+=QString::number(hh)+"时"+QString::number(mm)+"分";
    ui->label_4->setText(str2);

    qDebug()<<"-----Yes Setup-----\n";
}

Dialog::~Dialog(){
    delete ui;
}
void Dialog::accept(){
//    MessageBoxA(0,"0","0",MB_OK);
    done(ui->spinBox->value());
}
void Dialog::reject(){

    done(0);
}
