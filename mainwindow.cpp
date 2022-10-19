#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <iostream>
#include <fstream>
#include <string>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    x_czy_o=0;
    q=0,l=0;
    tab=new bool[9];
    for(int i=0;i<9;i++)
    {
        tab[i]=0;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            Tgra[i][j]="0";
        }
    }

}

MainWindow::~MainWindow()
{
    delete [] tab;
    delete ui;

}

void MainWindow::wygrana(QString znak,int k,int w)
{
    if ((Tgra[0][w]==znak)&&(Tgra[1][w]==znak)&&(Tgra[2][w]==znak))
        QMessageBox::about(this,"status wygranej","wygrales");
    else if  ((Tgra[k][0]==znak)&&(Tgra[k][1]==znak)&&(Tgra[k][2]==znak))
        QMessageBox::about(this,"status wygranej","wygrales2");
    if ((k==w)||(k+w==2))
      {
      if (((Tgra[0][0]==znak)&&(Tgra[1][1]==znak)&&(Tgra[2][2]==znak))||((Tgra[2][0]==znak)&&(Tgra[1][1]==znak)&&(Tgra[0][2]==znak)))
        QMessageBox::about(this,"status wygranej","wygrales3");
    }
}

void MainWindow::guzik (int w, int k,int l)
{
    if(tab[l]==0)
    {
        q++;
        tab[l]=1;
        if(x_czy_o==0)
        {
            switch(l)
            {
            case 0:
                ui->pushButton->setText("O");
                break;
            case 1:
                ui->pushButton_2->setText("O");
                break;
            case 2:
                ui->pushButton_3->setText("O");
                break;
            case 3:
                ui->pushButton_4->setText("O");
                break;
            case 4:
                ui->pushButton_5->setText("O");
                break;
            case 5:
                ui->pushButton_6->setText("O");
                break;
            case 6:
                ui->pushButton_7->setText("O");
                break;
            case 7:
                ui->pushButton_8->setText("O");
                break;
            case 8:
                ui->pushButton_9->setText("O");
                break;
            }

            x_czy_o=1;
            Tgra[k][w]='O';
            wygrana("O",k,w);

        }
        else
        {
            switch(l)
            {
            case 0:
                ui->pushButton->setText("X");
                break;
            case 1:
                ui->pushButton_2->setText("X");
                break;
            case 2:
                ui->pushButton_3->setText("X");
                break;
            case 3:
                ui->pushButton_4->setText("X");
                break;
            case 4:
                ui->pushButton_5->setText("X");
                break;
            case 5:
                ui->pushButton_6->setText("X");
                break;
            case 6:
                ui->pushButton_7->setText("X");
                break;
            case 7:
                ui->pushButton_8->setText("X");
                break;
            case 8:
                ui->pushButton_9->setText("X");
                break;
            }
            x_czy_o=0;
            Tgra[k][w]='X';
            wygrana("X",k,w);
        }
    }
}
void MainWindow::on_pushButton_clicked()
{
    guzik (0,0,0);
}


void MainWindow::on_pushButton_2_clicked()
{
   guzik (0,1,1);
}


void MainWindow::on_pushButton_3_clicked()
{
    guzik (0,2,2);

}


void MainWindow::on_pushButton_4_clicked()
{
   guzik (1,0,3);
}


void MainWindow::on_pushButton_5_clicked()
{
   guzik (1,1,4);
}


void MainWindow::on_pushButton_6_clicked()
{
    guzik (1,2,5);
}


void MainWindow::on_pushButton_7_clicked()
{
    guzik (2,0,6);
}


void MainWindow::on_pushButton_8_clicked()
{
    guzik (2,1,7);
}


void MainWindow::on_pushButton_9_clicked()
{
    guzik (2,2,8);
}


void MainWindow::on_pushButton_10_clicked()
{
    x_czy_o=0;
    q=0,l=0;
    for(int i=0;i<9;i++)
    {
        tab[i]=0;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            Tgra[i][j]="0";
        }
    }
    ui->pushButton->setText("");
    ui->pushButton_2->setText("");
    ui->pushButton_3->setText("");
    ui->pushButton_4->setText("");
    ui->pushButton_5->setText("");
    ui->pushButton_6->setText("");
    ui->pushButton_7->setText("");
    ui->pushButton_8->setText("");
    ui->pushButton_9->setText("");
}

