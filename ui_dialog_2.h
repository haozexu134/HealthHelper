/********************************************************************************
** Form generated from reading UI file 'dialog_2.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_2_H
#define UI_DIALOG_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_2
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSlider *verticalSlider;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    void setsize(QDialog *MainWindow){
        MainWindow->move(300,100);
        MainWindow->resize(720,550);
        MainWindow->repaint();
        return;
    }
    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(665, 492);
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 551, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 350, 54, 16));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 320, 471, 51));
        QFont font;
        font.setPointSize(24);
        label_2->setFont(font);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(570, 20, 81, 61));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(570, 80, 75, 24));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(570, 120, 81, 24));
        verticalSlider = new QSlider(Dialog);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setEnabled(false);
        verticalSlider->setGeometry(QRect(580, 160, 20, 311));
        verticalSlider->setMaximum(100);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickPosition(QSlider::NoTicks);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(false);
        label_4->setGeometry(QRect(620, 250, 31, 91));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        label_4->setFont(font2);
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4->setWordWrap(true);
        label_4->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 410, 171, 71));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_3->setPalette(palette);
        QFont font3;
        font3.setPointSize(24);
        font3.setBold(true);
        pushButton_3->setFont(font3);
        pushButton_3->setCheckable(true);
        pushButton_3->setChecked(false);
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 410, 171, 71));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush3(QColor(240, 240, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_4->setPalette(palette1);
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        pushButton_4->setFont(font4);
        pushButton_4->setCheckable(true);
        pushButton_4->setChecked(false);
        pushButton_4->setFlat(false);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Dialog", "\347\206\254\345\244\234\344\274\244\350\272\253\357\274\214\346\213\222\347\273\235\347\206\254\345\244\234\357\274\214\344\273\216\346\210\221\345\201\232\350\265\267\343\200\202", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\346\202\250\350\277\230\350\246\201\347\273\247\347\273\255\n"
"\345\205\263\351\227\255\346\217\220\351\206\222\345\220\227\357\274\237", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\345\217\226\346\266\210,\346\210\221\350\246\201\345\221\275", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "\347\273\247\347\273\255,\346\210\221\344\270\215\350\246\201\345\221\275", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "\347\241\256\n"
"\350\256\244\n"
"\346\240\217", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "5\345\210\206\351\222\237\345\205\263\346\234\272", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "\344\270\200\344\274\232\345\220\216\345\206\215\346\217\220\351\206\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_2: public Ui_Dialog_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_2_H
