/********************************************************************************
** Form generated from reading UI file 'timer.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMER_H
#define UI_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Timer
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_6;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(215, 97);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 41, 31));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 10, 16, 31));
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        label_2->setFont(font1);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 10, 41, 31));
        label_3->setFont(font);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 50, 81, 16));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setUnderline(true);
        label_4->setFont(font2);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 50, 71, 16));
        label_5->setFont(font2);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 70, 75, 24));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 70, 75, 24));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 0, 31, 41));
        QFont font3;
        font3.setPointSize(12);
        label_6->setFont(font3);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "11", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", ":", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "11", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "\347\216\260\345\234\250\345\260\261\345\205\263\346\234\272?", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\344\270\273\350\277\233\347\250\213", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "5\345\210\206\351\222\237\345\205\263\346\234\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "\345\211\251\344\275\231\n"
"\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Timer: public Ui_Timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMER_H
