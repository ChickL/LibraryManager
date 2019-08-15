#ifndef BOOKMANAGEMENTWIDGET_H
#define BOOKMANAGEMENTWIDGET_H

#include <QWidget>
#include "qt_include.h"
#include "AddBookWidget.h"
#include "DeleteBookWidget.h"

class BookManagementWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BookManagementWidget(QWidget *parent = nullptr);
    ~BookManagementWidget();

private:
    QTabWidget *tab;
    AddBookWidget *addBookWidget;
    DeleteBookWidget *deleteBookWidget;
};

#endif // BOOKMANAGEMENTWIDGET_H
