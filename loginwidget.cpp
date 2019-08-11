#include "LoginWidget.h"
#include "MainWidget.h"
#include "qt_include.h"

#include "SearchWidget.h"   //test

LoginWidget::LoginWidget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle(QStringLiteral("登陆"));
    this->setFixedSize(260,170);
    lb_user = new QLabel(QStringLiteral("账号"));
    lb_passwd = new QLabel(QStringLiteral("密码"));
    bt_login = new QPushButton(QStringLiteral("登陆"));
    bt_register = new QPushButton(QStringLiteral("注册"));
    cb = new QCheckBox(QStringLiteral("管理员"));
    le_user = new QLineEdit;
    le_passwd = new QLineEdit;

    lb_user->setGeometry(50,50,70,20);
    lb_passwd->setGeometry(50,80,70,20);
    bt_login->setGeometry(42,120,80,25);
    bt_register->setGeometry(135,120,80,25);
    le_user->setGeometry(110,50,120,20);
    le_passwd->setGeometry(110,80,120,20);
    cb->setGeometry(50,20,70,20);

    lb_user->setParent(this);
    lb_passwd->setParent(this);
    bt_login->setParent(this);
    bt_register->setParent(this);
    le_user->setParent(this);
    le_passwd->setParent(this);
    cb->setParent(this);

    connect(bt_login,SIGNAL(clicked(bool)),this,SLOT(on_bt_login_clicked()));
}

LoginWidget::~LoginWidget()
{

}

void LoginWidget::on_bt_login_clicked()
{
    MainWidget *mainWidget = new MainWidget;
    mainWidget->show();

//    SearchWidget *s = new SearchWidget;
//    s->show();

    this->close();
}
