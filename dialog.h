#ifndef DIALOG_H
#define DIALOG_H

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
namespace Ui {
    class Dialog;
}
class Dialog : public QDialog
{
    Q_OBJECT
public:
    explicit Dialog(QWidget *parent=0);
    ~Dialog();
private slots:
    void accept();
    void reject();
private:
    Ui::Dialog *ui;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QLabel *label_4;
};

#endif // DIALOG_H
