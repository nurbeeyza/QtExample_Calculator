#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QPushButton>
#include<QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent =0);
    ~MainWindow();

private slots:
    void clear();
    void equals();
    void add();
    void subtract();
    void multiply();
    void divide();
    void zero();
    void one ();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();
    void nine();



private:
    QLabel *label;
    QPushButton *clear_button;
    QPushButton *equals_button;
    QPushButton *add_button;
    QPushButton *subtract_button;
    QPushButton *mutliply_button;
    QPushButton *divide_button;
    QPushButton *zero_button;
    QPushButton *one_button;
    QPushButton *two_button;
    QPushButton *three_button;
    QPushButton *four_button;
    QPushButton *five_button;
    QPushButton *six_button;
    QPushButton *seven_button;
    QPushButton *eight_button;
    QPushButton *nine_button;


};
#endif // MAINWINDOW_H
