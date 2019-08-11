#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>
#include "qt_include.h"

class LoginWidget : public QWidget
{
    Q_OBJECT

public:
    LoginWidget(QWidget *parent = 0);
    ~LoginWidget();

private slots:
    void on_bt_login_clicked();

private:
    QLabel *lb_user, *lb_passwd;
    QPushButton *bt_login, *bt_register;
    QLineEdit *le_user, *le_passwd;
    QCheckBox *cb;
};

#endif // LOGINWIDGET_H
