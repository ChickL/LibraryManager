#include "BorrowStatusWidget.h"

BorrowStatusWidget::BorrowStatusWidget(QWidget *parent) :
    QTreeWidget(parent)
{
    this->setColumnCount(8);
    QStringList strList;
    strList<<QStringLiteral("编号")<<QStringLiteral("书名")<<QStringLiteral("类型")<<QStringLiteral("价格")
           <<QStringLiteral("借阅日期")<<QStringLiteral("归还期限")<<QStringLiteral("剩余天数")<<QStringLiteral("");
    this->setHeaderLabels(strList);
}

BorrowStatusWidget::~BorrowStatusWidget()
{

}
