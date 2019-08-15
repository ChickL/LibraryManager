#ifndef BORROWSTATUSWIDGET_H
#define BORROWSTATUSWIDGET_H

#include <QWidget>
#include "qt_include.h"

class BorrowStatusWidget : public QTreeWidget
{
    Q_OBJECT

public:
    explicit BorrowStatusWidget(QWidget *parent = nullptr);
    ~BorrowStatusWidget();

private:

};

#endif // BORROWSTATUSWIDGET_H
