#ifndef ADDUSERWIDGET_H
#define ADDUSERWIDGET_H

#include <QWidget>
#include "qt_include.h"

class AddUserWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AddUserWidget(QWidget *parent = nullptr);
    ~AddUserWidget();

private:
    QVBoxLayout *vbox;
    QHBoxLayout *hbox1;
    QHBoxLayout *hbox2;
    QHBoxLayout *hbox3;
    QHBoxLayout *hbox4;
    QLabel *lb1;
    QLabel *lb2;
    QLabel *lb3;
    QLabel *lb4;
    QLabel *lb5;
    QLineEdit *le1;
    QLineEdit *le2;
    QLineEdit *le3;
    QGroupBox *gb;
    QRadioButton *yes;
    QRadioButton *no;
    QPushButton *bt;
};

#endif // ADDUSERWIDGET_H
