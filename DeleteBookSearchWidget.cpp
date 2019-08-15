#include "DeleteBookSearchWidget.h"

DeleteBookSearchWidget::DeleteBookSearchWidget(QWidget *parent) :
    QWidget(parent)
{
    this->setFixedSize(1280,800);

    vbox = new QVBoxLayout;
    lb = new QLabel;
    tw = new QTableWidget;
    bt = new QPushButton;

    lb->setText(QStringLiteral("删除书籍列表"));
    lb->setFont(QFont("Microsoft YaHei",12,75));
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
    tw->setColumnCount(10);
    tw->setHorizontalHeaderLabels(headers);
    bt->setText(QStringLiteral("删除所有"));

    vbox->addWidget(lb);
    vbox->addWidget(tw);
    vbox->addWidget(bt);

    this->setLayout(vbox);
}

DeleteBookSearchWidget::~DeleteBookSearchWidget()
{

}
