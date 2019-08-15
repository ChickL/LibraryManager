#include "AddBookWidget.h"

AddBookWidget::AddBookWidget(QWidget *parent) :
    QWidget(parent)
{
    grid = new QGridLayout;
    hbox = new QHBoxLayout;
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
    le1 = new QLineEdit;
    le2 = new QLineEdit;
    le3 = new QLineEdit;
    le4 = new QLineEdit;
    le5 = new QLineEdit;
    le6 = new QLineEdit;
    cb1 = new QComboBox;
    cb2 = new QComboBox;
    bt1 = new QPushButton;
    bt2 = new QPushButton;

    lb1->setText(QStringLiteral("输入书籍信息"));
    lb1->setFont(QFont("Microsoft YaHei",12,75));
    lb2->setText(QStringLiteral("书籍编号"));
    lb3->setText(QStringLiteral("书名"));
    lb4->setText(QStringLiteral("作者"));
    lb5->setText(QStringLiteral("注意：如果有多个作者，需用空格隔开"));
    lb6->setText(QStringLiteral("出版社"));
    lb7->setText(QStringLiteral("价格"));
    lb8->setText(QStringLiteral("数量"));
    lb9->setText(QStringLiteral("出版日期"));
    lb10->setText(QStringLiteral("分类"));
    lb11->setText(QStringLiteral("注意：添加已存在书籍的ID可以更新书籍信息"));
    QStringList strList1,strList2;
    strList1<<"2019"<<"2018"<<"2017"<<"2016"<<"2015"<<"2014"<<"2013"
           <<"2012"<<"2011"<<"2010"<<"2009"<<"2008"<<"2007"<<"2006"
           <<"2005"<<"2004"<<"2003"<<"2002"<<"2001"<<"2000"<<"1999";
    strList2<<QStringLiteral("文学类")<<QStringLiteral("艺术类")<<QStringLiteral("自然科学类")<<QStringLiteral("计算机类")
              <<QStringLiteral("思政类")<<QStringLiteral("经济类")<<QStringLiteral("哲学类")<<QStringLiteral("军体类")
                <<QStringLiteral("医学类")<<QStringLiteral("工业技术类")<<QStringLiteral("环境科学类")<<QStringLiteral("历史类")
                  <<QStringLiteral("地理类");
    cb1->addItems(strList1);
    cb2->addItems(strList2);
    bt1->setText(QStringLiteral("确认添加"));
    bt2->setText(QStringLiteral("清空"));


    grid->addWidget(lb2,0,0,1,1);
    grid->addWidget(le1,0,1,1,4);
    grid->addWidget(lb3,0,5,1,1);
    grid->addWidget(le2,0,6,1,4);
    grid->addWidget(lb4,1,0,1,1);
    grid->addWidget(le3,1,1,1,4);
    grid->addWidget(lb5,1,5,1,5);
    grid->addWidget(lb6,2,0,1,1);
    grid->addWidget(le4,2,1,1,4);
    grid->addWidget(lb7,3,0,1,1);
    grid->addWidget(le5,3,1,1,4);
    grid->addWidget(lb8,3,5,1,1);
    grid->addWidget(le6,3,6,1,4);
    grid->addWidget(lb9,4,0,1,1);
    grid->addWidget(cb1,4,1,1,4);
    grid->addWidget(lb10,4,5,1,1);
    grid->addWidget(cb2,4,6,1,4);

    hbox->addWidget(bt1);
    hbox->addWidget(bt2);

    vbox->addWidget(lb1);
    vbox->addLayout(grid);
    vbox->addLayout(hbox);
    vbox->addWidget(lb11);

//    vbox->setContentsMargins(400,200,400,200);

    this->setLayout(vbox);
}

AddBookWidget::~AddBookWidget()
{

}
