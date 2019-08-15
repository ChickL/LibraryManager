#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "qt_include.h"
#include "SearchWidget.h"
#include "BorrowStatusWidget.h"
#include "UserManagementWidget.h"
#include "BookManagementWidget.h"

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    QVBoxLayout *vbox;
    QTabWidget *tab;
    QWidget *topWidget;
    QWidget *searchWidget;
    QTreeWidget *borrowStatusWidget;
    UserManagementWidget *userManagementWidget;
    BookManagementWidget *bookManagementWidget;
    QPalette pal;
    QLabel *lb1;
    QLabel *lb2;
};

#endif // MAINWIDGET_H
