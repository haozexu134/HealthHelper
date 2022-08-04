#include "dialog1.h"
#include "dialog.h"
#include <QMainWindow>
#include <QDialog>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtCore>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
Dialog1::Dialog1(QWidget *parent)
{
    QDialog(parent),
    ui(new Ui::Dialog1)
    {

    }

}
