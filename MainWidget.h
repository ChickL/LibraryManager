#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "qt_include.h"
#include "SearchWidget.h"

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
    QWidget *borrowWidget;
    QWidget *userManagementWidget;
    QWidget *bookManagementWidget;
    QPalette pal;
};

#endif // MAINWIDGET_H
