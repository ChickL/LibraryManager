#ifndef USERMANAGEMENTWIDGET_H
#define USERMANAGEMENTWIDGET_H

#include <QWidget>
#include "qt_include.h"
#include "UserInfoSearchWidget.h"
#include "AddUserWidget.h"

class UserManagementWidget : public QWidget
{
    Q_OBJECT

public:
    explicit UserManagementWidget(QWidget *parent = nullptr);
    ~UserManagementWidget();

private:
    QHBoxLayout *hbox;
    QHBoxLayout *hbox1;
    QVBoxLayout *vbox1;
    QVBoxLayout *vbox2;
    QVBoxLayout *vbox21;
    QVBoxLayout *vbox22;
    QLabel *lb1;
    QLabel *lb2;
    QLabel *lb3;
    QLineEdit *le;
    QPushButton *bt1;
    QPushButton *bt2;
    QTableWidget *tw;

private slots:
    void on_bt1_clicked();
    void on_bt2_clicked();
};

#endif // USERMANAGEMENTWIDGET_H
