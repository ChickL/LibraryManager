#ifndef DELETEBOOKSEARCHWIDGET_H
#define DELETEBOOKSEARCHWIDGET_H

#include <QWidget>
#include "qt_include.h"

class DeleteBookSearchWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DeleteBookSearchWidget(QWidget *parent = nullptr);
    ~DeleteBookSearchWidget();

private:
    QVBoxLayout *vbox;
    QLabel *lb;
    QTableWidget * tw;
    QPushButton *bt;
};

#endif // DELETEBOOKSEARCHWIDGET_H
