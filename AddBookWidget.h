#ifndef ADDBOOKWIDGET_H
#define ADDBOOKWIDGET_H

#include <QWidget>
#include "qt_include.h"

class AddBookWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AddBookWidget(QWidget *parent = nullptr);
    ~AddBookWidget();

private:
    QGridLayout *grid;
    QHBoxLayout *hbox;
    QVBoxLayout *vbox;
    QLabel *lb1;
    QLabel *lb2;
    QLabel *lb3;
    QLabel *lb4;
    QLabel *lb5;
    QLabel *lb6;
    QLabel *lb7;
    QLabel *lb8;
    QLabel *lb9;
    QLabel *lb10;
    QLabel *lb11;
    QLineEdit *le1;
    QLineEdit *le2;
    QLineEdit *le3;
    QLineEdit *le4;
    QLineEdit *le5;
    QLineEdit *le6;
    QComboBox *cb1;
    QComboBox *cb2;
    QPushButton *bt1;
    QPushButton *bt2;
};

#endif // ADDBOOKWIDGET_H
