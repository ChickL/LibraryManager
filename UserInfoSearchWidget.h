#ifndef USERINFOSEARCHWIDGET_H
#define USERINFOSEARCHWIDGET_H

#include <QWidget>
#include "qt_include.h"

class UserInfoSearchWidget : public QWidget
{
    Q_OBJECT

public:
    explicit UserInfoSearchWidget(QWidget *parent = nullptr);
    ~UserInfoSearchWidget();

private:
    QGridLayout *grid;
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
    QLabel *lb12;
    QTableWidget *tw;
    QPushButton *bt;
};

#endif // USERINFOSEARCHWIDGET_H
