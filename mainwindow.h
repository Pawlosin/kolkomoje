#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <fstream>
#include <iostream>
#include <string>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void wygrana(QString znak,int w,int k);
    void guzik (int w, int k,int l);


    void on_pushButton_10_clicked();

private:
    Ui::MainWindow *ui;
    bool x_czy_o;
    bool *tab ;
    int q,l;
    QString Tgra[3][3];
};
#endif // MAINWINDOW_H
