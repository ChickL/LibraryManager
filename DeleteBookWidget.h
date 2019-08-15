#ifndef DELETEBOOKWIDGET_H
#define DELETEBOOKWIDGET_H

#include <QWidget>
#include "qt_include.h"
#include "DeleteBookSearchWidget.h"

class DeleteBookWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DeleteBookWidget(QWidget *parent = nullptr);
    ~DeleteBookWidget();

private:
    QGridLayout *grid;
    QHBoxLayout *hbox;
    QVBoxLayout *vbox;
    QLabel *lb1;
    QLabel *lb2;
    QLabel *lb3;
    QLabel *lb4;
    QLabel *lb5;
    QLabel *lb6;
    QLabel *lb7;
    QLabel *lb8;
    QLabel *lb9;
    QLabel *lb10;
    QLabel *lb11;
    QLineEdit *le1;
    QLineEdit *le2;
    QLineEdit *le3;
    QLineEdit *le4;
    QLineEdit *le5;
    QLineEdit *le6;
    QComboBox *cb1;
    QComboBox *cb2;
    QComboBox *cb3;
    QPushButton *bt1;
    QPushButton *bt2;

private slots:
    void on_bt1_clicked();
};

#endif // DELETEBOOKWIDGET_H
