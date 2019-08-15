#include "AddUserWidget.h"

AddUserWidget::AddUserWidget(QWidget *parent) :
    QWidget(parent)
{
    this->setWindowTitle(QStringLiteral("添加新用户"));

    vbox = new QVBoxLayout;
    hbox1 = new QHBoxLayout;
    hbox2 = new QHBoxLayout;
    hbox3 = new QHBoxLayout;
    hbox4 = new QHBoxLayout;
    lb1 = new QLabel;
    lb2 = new QLabel;
    lb3 = new QLabel;
    lb4 = new QLabel;
    lb5 = new QLabel;
    le1 = new QLineEdit;
    le2 = new QLineEdit;
    le3 = new QLineEdit;
    gb = new QGroupBox;
    yes = new QRadioButton;
    no = new QRadioButton;
    bt = new QPushButton;

    lb1->setText(QStringLiteral("新增用户"));
    lb1->setAlignment(Qt::AlignCenter);
    lb1->setFont(QFont("Microsoft YaHei",15,75));
    lb2->setText(QStringLiteral("用户ID："));
    lb3->setText(QStringLiteral("用户名："));
    lb4->setText(QStringLiteral("密码："));
    lb5->setText(QStringLiteral("是否赋予用户借书权限："));
    yes->setText(QStringLiteral("是"));
    no->setText(QStringLiteral("否"));
    bt->setText(QStringLiteral("确认添加"));
    yes->setParent(this);
    no->setParent(this);

    hbox1->addWidget(lb2,1);
    hbox1->addWidget(le1,3);
    hbox2->addWidget(lb3,1);
    hbox2->addWidget(le2,3);
    hbox3->addWidget(lb4,1);
    hbox3->addWidget(le3,3);
    hbox4->addWidget(lb5);
    hbox4->addWidget(yes);
    hbox4->addWidget(no);
    vbox->addWidget(lb1);
    vbox->addLayout(hbox1);
    vbox->addLayout(hbox2);
    vbox->addLayout(hbox3);
    vbox->addLayout(hbox4);
    vbox->addWidget(bt);

    this->setLayout(vbox);
}

AddUserWidget::~AddUserWidget()
{

}
