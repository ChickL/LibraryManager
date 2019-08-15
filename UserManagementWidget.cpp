#include "UserManagementWidget.h"

UserManagementWidget::UserManagementWidget(QWidget *parent) :
    QWidget(parent)
{
    hbox = new QHBoxLayout;
    hbox1 = new QHBoxLayout;
    vbox1 = new QVBoxLayout;
    vbox2 = new QVBoxLayout;
    vbox21 = new QVBoxLayout;
    vbox22 = new QVBoxLayout;
    lb1 = new QLabel;
    lb2 = new QLabel;
    lb3 = new QLabel;
    le = new QLineEdit;
    bt1 = new QPushButton;
    bt2 = new QPushButton;
    tw = new QTableWidget;

    lb1->setText(QStringLiteral("用户信息列表"));
    lb1->setAlignment(Qt::AlignCenter);
    lb1->setFont(QFont(QString("Microsoft YaHei"),15,75));
    lb2->setText(QStringLiteral("用户详细信息查询"));
    lb2->setAlignment(Qt::AlignCenter);
    lb2->setFont(QFont(QString("Microsoft YaHei"),15,75));
    lb3->setText(QStringLiteral("输入用户ID："));
    bt1->setText(QStringLiteral("查询"));
    bt2->setText(QStringLiteral("添加新用户"));
    lb2->setContentsMargins(0,30,0,20);
    bt1->setContentsMargins(0,50,0,0);

    tw->setColumnCount(6);
    QStringList strList;
    strList<<QStringLiteral("用户ID")<<QStringLiteral("用户名")<<QStringLiteral("密码")<<QStringLiteral("是否拥有借书权限")
           <<QStringLiteral("借阅数目")<<QStringLiteral("更改借书权限")<<QStringLiteral("删除用户");
    tw->setHorizontalHeaderLabels(strList);

    vbox1->addWidget(lb1);
    vbox1->addWidget(tw);
    vbox21->addWidget(lb2);
    hbox1->addWidget(lb3);  hbox1->addWidget(le);   vbox21->addLayout(hbox1);
    vbox21->addWidget(bt1);
    vbox21->setAlignment(Qt::AlignTop);
    vbox22->addWidget(bt2);
    vbox22->setAlignment(Qt::AlignTop);
    vbox22->setContentsMargins(0,15,0,0);
    vbox2->addLayout(vbox21,3);
    vbox2->addLayout(vbox22,7);
    vbox2->setContentsMargins(80,10,80,200);
    hbox->addLayout(vbox1,3);
    hbox->addLayout(vbox2,1);

    connect(bt1,SIGNAL(clicked()),this,SLOT(on_bt1_clicked()));
    connect(bt2,SIGNAL(clicked()),this,SLOT(on_bt2_clicked()));

    this->setLayout(hbox);
}

UserManagementWidget::~UserManagementWidget()
{

}

void UserManagementWidget::on_bt1_clicked()
{
    UserInfoSearchWidget *userInfoSearchWidget = new UserInfoSearchWidget;
    userInfoSearchWidget->show();
}

void UserManagementWidget::on_bt2_clicked()
{
    AddUserWidget *addUserWidget = new AddUserWidget;
    addUserWidget->show();
}
