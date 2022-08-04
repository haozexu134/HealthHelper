#ifndef DIALOGWINDOW_H
#define DIALOGWINDOW_H
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

    namespace Ui {
    class Dialog1;
    }

    class Dialog1 : public QDialog
    {
        Q_OBJECT

    public:
        explicit Dialog1(QWidget *parent = 0);
        ~Dialog1();
    private slots:
        void accept();
        void reject();
    private:
        Ui::Dialog1 *ui;
        QDialogButtonBox *buttonBox;
        QLabel *label;
        QLabel *label_2;
        QLabel *label_3;
        QLabel *label_4;
        QLabel *label_5;
        QLabel *label_6;
        QLabel *label_7;
        QLabel *label_8;
        QSpinBox *spinBox;
        QLabel *label_9;

    };
#endif // DIALOGWINDOW_H
