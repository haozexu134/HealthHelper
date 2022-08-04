#ifndef DIALOG_2_H
#define DIALOG_2_H

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
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimediaWidgets/QVideoWidget>
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
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
namespace Ui{
    class Dialog_2;
}
class Dialog_2 : public QDialog
{
    Q_OBJECT
public:
   explicit Dialog_2(QWidget *parent=0);
   ~Dialog_2();
private slots:
    void button1();
    void button2();
    void button3();
    void button4();
    void slider_ok();
private:
    Ui::Dialog_2 *ui;
    QMediaPlayer *player;
    QVideoWidget *videoWidget;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_4;
    QSlider *slider;
};

#endif // DIALOG_2_H
