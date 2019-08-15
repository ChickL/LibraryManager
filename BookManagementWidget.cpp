#include "BookManagementWidget.h"

BookManagementWidget::BookManagementWidget(QWidget *parent) :
    QWidget(parent)
{
    tab = new QTabWidget;
    addBookWidget = new AddBookWidget;
    deleteBookWidget = new DeleteBookWidget;
    tab->addTab(addBookWidget,QStringLiteral("更新/添加书籍"));
    tab->addTab(deleteBookWidget,QStringLiteral("删除书籍"));
    tab->setParent(this);
}

BookManagementWidget::~BookManagementWidget()
{

}
