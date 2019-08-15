#include "MainWidget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent)
{
    this->setWindowTitle(QStringLiteral("图书管理系统"));
    this->setFixedSize(1920,1000);

    vbox = new QVBoxLayout;
    tab = new QTabWidget;
    topWidget = new QWidget;
    lb1 = new QLabel;
    lb2 = new QLabel;
    pal = topWidget->palette();

    vbox->addWidget(topWidget,1);
    vbox->addWidget(tab,8);

    topWidget->setAutoFillBackground(true);
    pal.setBrush(QPalette::Background,QBrush(QPixmap("C:\\Users\\85186\\Documents\\MyLibrary\\logo.jpg")));
    topWidget->setPalette(pal);

    lb1->setText(QStringLiteral("当前用户："));
    lb2->setText(QStringLiteral("用户权限："));
    lb1->setGeometry(1400,80,200,20);
    lb2->setGeometry(1600,80,200,20);
    lb1->setParent(topWidget);
    lb2->setParent(topWidget);

    searchWidget = new SearchWidget;
    borrowStatusWidget = new BorrowStatusWidget;
    userManagementWidget = new UserManagementWidget;
    bookManagementWidget = new BookManagementWidget;
    tab->addTab(searchWidget,QStringLiteral("图书检索"));
    tab->addTab(borrowStatusWidget,QStringLiteral("借阅情况"));
    tab->addTab(userManagementWidget,QStringLiteral("用户管理"));
    tab->addTab(bookManagementWidget,QStringLiteral("书籍管理"));

    this->setLayout(vbox);
}

MainWidget::~MainWidget()
{

}
