/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    void setsize(QMainWindow *MainWindow){
        MainWindow->move(300,100);
        MainWindow->resize(520,500);
        MainWindow->repaint();
        return;
    }
    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));

        MainWindow->resize(500, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 501, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 300, 141, 41));
//        pushButton->setCheckable(true);
        pushButton->setEnabled(true);
        pushButton_2 = new QPushButton(centralwidget);
//        pushButton_2->setCheckable(true);
        pushButton_2->setEnabled(true);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 300, 141, 41));
        pushButton_3 = new QPushButton(centralwidget);
//        pushButton_3->setCheckable(true);
        pushButton_3->setEnabled(true);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(360, 300, 151, 41));
//        pushButton->setFlat(t/*rue);
//        pushButton_2->setFla/*t(true);
//        pushButton_3->setFlat(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 291, 450, 160));
        label->setText(QString::fromUtf8("住手！！！"));
        QFont fot;
        fot.setPointSize(36);
        label->setFont(fot);
        QPalette pal;
        pal.setColor(QPalette::WindowText,Qt::red);
        label->setPalette(pal);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label"));
        label_2->setText(QString::fromUtf8("亲爱的叫妈,您已熬夜超过11:00,不可以再熬了哦！"));
        label_2->setGeometry(QRect(30, 420, 351, 16));
        QFont fot2;
        fot2.setPointSize(12);
        label_2->setFont(fot2);
        QPalette pal2;
        pal2.setColor(QPalette::WindowText,Qt::green);
        label_2->setPalette(pal2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
       MainWindow->setMenuBar(menubar);
       statusbar = new QStatusBar(MainWindow);
       statusbar->setObjectName(QString::fromUtf8("statusbar"));
       MainWindow->setStatusBar(statusbar);
       pushButton->raise();
       pushButton_2->raise();
       pushButton_3->raise();
        retranslateUi(MainWindow);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "警告!", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "立即关机", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "再等一会", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "别提醒我", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "住手！！！", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "亲爱的,您已熬夜超过11:00,不可以再熬了哦！", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
