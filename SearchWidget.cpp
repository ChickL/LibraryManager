#include "SearchWidget.h"

SearchWidget::SearchWidget(QWidget *parent) :
    QWidget(parent)
{
    hbox = new QHBoxLayout;
    hbox0 = new QHBoxLayout;
    vbox = new QVBoxLayout;
    vbox0 = new QVBoxLayout;
    grid = new QGridLayout;
    bookTypeWidget = new QTreeWidget;
    bookInfoWidget = new QTableWidget;
    insideLeft = new QWidget;
    insideRight = new QWidget;
    item1 = new QTreeWidgetItem;
    item2 = new QTreeWidgetItem;
    item3 = new QTreeWidgetItem;
    item4 = new QTreeWidgetItem;
    item5 = new QTreeWidgetItem;
    item6 = new QTreeWidgetItem;
    item7 = new QTreeWidgetItem;
    item8 = new QTreeWidgetItem;
    item9 = new QTreeWidgetItem;
    item10 = new QTreeWidgetItem;
    item11 = new QTreeWidgetItem;
    item12 = new QTreeWidgetItem;
    item13 = new QTreeWidgetItem;
    lb1 = new QLabel;
    lb2 = new QLabel;
    lb3 = new QLabel;
    lb4 = new QLabel;
    lb5 = new QLabel;
    lb6 = new QLabel;
    lb7 = new QLabel;
    lb8 = new QLabel;
    lb9 = new QLabel;
    le1 = new QLineEdit;
    le2 = new QLineEdit;
    le3 = new QLineEdit;
    le4 = new QLineEdit;
    le5 = new QLineEdit;
    le6 = new QLineEdit;
    search = new QPushButton;
    borrow = new QPushButton;
    cb = new QCheckBox;
    cb1 = new QComboBox;
    cb2 = new QComboBox;

    //书籍检索TableWidget
    bookInfoWidget->setColumnCount(10);
    QStringList headers;
    headers<<QStringLiteral("书籍编号")
           <<QStringLiteral("书名")
           <<QStringLiteral("作者")
           <<QStringLiteral("价格/元")
           <<QStringLiteral("总量/本")
           <<QStringLiteral("剩余/本")
           <<QStringLiteral("出版社")
           <<QStringLiteral("出版日期")
           <<QStringLiteral("类型")
           <<QStringLiteral("");
    bookInfoWidget->setHorizontalHeaderLabels(headers);

//    bookInfoWidget->setFixedSize(1280,720);
//    bookInfoWidget->setParent(this);

    //书籍类型TreeWidget

    bookTypeWidget->setColumnCount(1);
    bookTypeWidget->setHeaderLabel(QStringLiteral("书籍类型"));
    item = new QTreeWidgetItem(bookTypeWidget,QStringList(QStringLiteral("所有图书")));
    item1->setText(0,QStringLiteral("文学类"));
    item2->setText(0,QStringLiteral("艺术类"));
    item3->setText(0,QStringLiteral("自然科学类"));
    item4->setText(0,QStringLiteral("计算机类"));
    item5->setText(0,QStringLiteral("思政类"));
    item6->setText(0,QStringLiteral("经济类"));
    item7->setText(0,QStringLiteral("哲学类"));
    item8->setText(0,QStringLiteral("军体类"));
    item9->setText(0,QStringLiteral("医学类"));
    item10->setText(0,QStringLiteral("工业技术类"));
    item11->setText(0,QStringLiteral("环境科学类"));
    item12->setText(0,QStringLiteral("历史类"));
    item13->setText(0,QStringLiteral("地理类"));
    item->addChild(item1);
    item->addChild(item2);
    item->addChild(item3);
    item->addChild(item4);
    item->addChild(item5);
    item->addChild(item6);
    item->addChild(item7);
    item->addChild(item8);
    item->addChild(item9);
    item->addChild(item10);
    item->addChild(item11);
    item->addChild(item12);
    item->addChild(item13);
    bookTypeWidget->expandAll();

//    bookTypeWidget->setParent(this);


    //精确检索
    //左边
    lb1->setText(QStringLiteral("精确检索"));
    lb2->setText(QStringLiteral("书籍编号"));
    lb3->setText(QStringLiteral("书名"));
    lb4->setText(QStringLiteral("作者"));
    lb5->setText(QStringLiteral("出版日期"));
    lb6->setText(QStringLiteral("———"));
    lb7->setText(QStringLiteral("出版社"));
    lb8->setText(QStringLiteral("价格"));
    lb9->setText(QStringLiteral("———"));

    QStringList strList;
    strList<<"2019"<<"2018"<<"2017"<<"2016"<<"2015"<<"2014"<<"2013"
           <<"2012"<<"2011"<<"2010"<<"2009"<<"2008"<<"2007"<<"2006"
           <<"2005"<<"2004"<<"2003"<<"2002"<<"2001"<<"2000"<<"1999";
    cb1->addItems(strList);
    cb2->addItems(strList);

    grid->addWidget(lb1,0,0,1,12);
    grid->addWidget(lb2,1,0,1,1);
    grid->addWidget(lb5,2,0,1,1);
    grid->addWidget(lb8,3,0,1,1);
    grid->addWidget(lb3,1,4,1,1);
    grid->addWidget(lb6,2,4,1,1);
    grid->addWidget(lb9,3,4,1,1);
    grid->addWidget(lb4,1,8,1,1);
    grid->addWidget(lb7,2,8,1,1);
    grid->addWidget(cb1,2,1,1,3);
    grid->addWidget(cb2,2,5,1,3);
    grid->addWidget(le1,1,1,1,3);
    grid->addWidget(le5,3,1,1,3);
    grid->addWidget(le2,1,5,1,3);
    grid->addWidget(le6,3,5,1,3);
    grid->addWidget(le3,1,9,1,3);
    grid->addWidget(le4,2,9,1,3);

    insideLeft->setLayout(grid);



    //test

    QWidget *temp1 = new QWidget;
    QWidget *temp2 = new QWidget;

    //右边

    search->setText(QStringLiteral("开始检索"));
    cb->setText(QStringLiteral("只选择有余量的书籍"));

    vbox0->addWidget(search);
    vbox0->addWidget(cb);

    insideRight->setLayout(vbox0);

    //整体布局
    hbox0->addWidget(insideLeft,3);
    hbox0->addWidget(insideRight,1);

//    vbox->addLayout(hbox0,1);
    temp1->setLayout(hbox0);
    vbox->addWidget(temp1,1);

    vbox->addWidget(bookInfoWidget,3);
    hbox->addWidget(bookTypeWidget,1);

//    hbox->addLayout(vbox,5);
    temp2->setLayout(vbox);
    hbox->addWidget(temp2,5);

    this->setLayout(hbox);

}

SearchWidget::~SearchWidget()
{

}
