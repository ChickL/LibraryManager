#include "UserInfoSearchWidget.h"

UserInfoSearchWidget::UserInfoSearchWidget(QWidget *parent) :
    QWidget(parent)
{
    this->setFixedSize(655,700);
    this->setWindowTitle(QStringLiteral("查询"));

    grid = new QGridLayout;
    vbox = new QVBoxLayout;
    lb1 = new QLabel;
    lb2 = new QLabel;
    lb3 = new QLabel;
    lb4 = new QLabel;
    lb5 = new QLabel;
    lb6 = new QLabel;
    lb7 = new QLabel;
    lb8 = new QLabel;
    lb9 = new QLabel;
    lb10 = new QLabel;
    lb11 = new QLabel;
    lb12 = new QLabel;
    tw = new QTableWidget;
    bt = new QPushButton;

    lb1->setText(QStringLiteral("用户详细信息查询"));
    lb2->setText(QStringLiteral("用户名："));
    lb3->setText(QStringLiteral(""));
    lb4->setText(QStringLiteral("用户ID："));
    lb5->setText(QStringLiteral(""));
    lb6->setText(QStringLiteral("密码："));
    lb7->setText(QStringLiteral(""));
    lb8->setText(QStringLiteral("借书权限："));
    lb9->setText(QStringLiteral(""));
    lb10->setText(QStringLiteral("结束数目："));
    lb11->setText(QStringLiteral(""));
    lb12->setText(QStringLiteral("用户借书情况列表"));
    bt->setText(QStringLiteral("删除用户"));
    lb1->setAlignment(Qt::AlignCenter);
    lb12->setAlignment(Qt::AlignCenter);
    lb1->setFont(QFont("Microsoft YaHei",15,75));
    lb12->setFont(QFont("Microsoft YaHei",15,75));

    grid->addWidget(lb2,0,0,1,1);
    grid->addWidget(lb3,0,1,1,3);
    grid->addWidget(lb4,0,4,1,1);
    grid->addWidget(lb5,0,5,1,3);
    grid->addWidget(lb6,1,0,1,1);
    grid->addWidget(lb7,1,1,1,3);
    grid->addWidget(lb8,2,0,1,1);
    grid->addWidget(lb9,2,1,1,3);
    grid->addWidget(lb10,2,4,1,1);
    grid->addWidget(lb11,2,5,1,3);

    QStringList strList;
    strList<<QStringLiteral("书本编号")<<QStringLiteral("书籍名称")<<QStringLiteral("借阅日期")
           <<QStringLiteral("归还日期")<<QStringLiteral("剩余归还天数");
    tw->setColumnCount(5);
    tw->setHorizontalHeaderLabels(strList);

    vbox->addWidget(lb1);
    vbox->addLayout(grid);
    vbox->addWidget(lb12);
    vbox->addWidget(tw);
    vbox->addWidget(bt);
    this->setLayout(vbox);
}

UserInfoSearchWidget::~UserInfoSearchWidget()
{

}
