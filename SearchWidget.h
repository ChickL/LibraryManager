#ifndef SEARCHWIDGET_H
#define SEARCHWIDGET_H

#include <QWidget>
#include "qt_include.h"

class SearchWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SearchWidget(QWidget *parent = nullptr);
    ~SearchWidget();

private:
    QHBoxLayout *hbox;
    QHBoxLayout *hbox0;
    QVBoxLayout *vbox;
    QVBoxLayout *vbox0;
    QGridLayout *grid;
    QTreeWidget *bookTypeWidget;
    QTableWidget *bookInfoWidget;
    QWidget *insideLeft;
    QWidget *insideRight;
    QTreeWidgetItem *item;
    QTreeWidgetItem *item1;
    QTreeWidgetItem *item2;
    QTreeWidgetItem *item3;
    QTreeWidgetItem *item4;
    QTreeWidgetItem *item5;
    QTreeWidgetItem *item6;
    QTreeWidgetItem *item7;
    QTreeWidgetItem *item8;
    QTreeWidgetItem *item9;
    QTreeWidgetItem *item10;
    QTreeWidgetItem *item11;
    QTreeWidgetItem *item12;
    QTreeWidgetItem *item13;
    QLabel *lb1;
    QLabel *lb2;
    QLabel *lb3;
    QLabel *lb4;
    QLabel *lb5;
    QLabel *lb6;
    QLabel *lb7;
    QLabel *lb8;
    QLabel *lb9;
    QLineEdit *le1;
    QLineEdit *le2;
    QLineEdit *le3;
    QLineEdit *le4;
    QLineEdit *le5;
    QLineEdit *le6;
    QComboBox *cb1;
    QComboBox *cb2;
    QPushButton *search;
    QPushButton *borrow;
    QCheckBox *cb;
};

#endif // SEARCHWIDGET_H
