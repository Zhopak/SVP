#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString vozrast = ui->vozrast->text();
    QString rost = ui->rost->text();
    QString ves =  ui->ves->text();

    double mu1 = 66.47+13.75*ves.toDouble()+5.0*rost.toDouble()-6.74*vozrast.toDouble();
    double zh1 = 655.1+9.6*ves.toDouble()+1.85*rost.toDouble()-4.68*vozrast.toDouble();

    ui->mu->setNum(mu1);
    ui->zh->setNum(zh1);

}



void MainWindow::on_pushButton_2_clicked()
{
    QString vozrast = ui->vozrast->text();
    QString rost = ui->rost->text();
    QString ves =  ui->ves->text();

    double mu1 = 10*ves.toDouble()+6.25*rost.toDouble()-5*vozrast.toDouble()+5;
    double zh1 = 10*ves.toDouble()+(6.25*rost.toDouble()-5*vozrast.toDouble())-161;

    ui->mu->setNum(mu1);
    ui->zh->setNum(zh1);

}

void MainWindow::on_pushButton_3_clicked()
{
    QString vozrast = ui->vozrast->text();
    QString rost = ui->rost->text();
    QString ves =  ui->ves->text();

    double mu1 = 88.362+13.397*ves.toDouble()+4.799*rost.toDouble()-5.677*vozrast.toDouble();
    double zh1 = 447.593+9.247*ves.toDouble()+3.098*rost.toDouble()-4.330*vozrast.toDouble();

    ui->mu->setNum(mu1);
    ui->zh->setNum(zh1);

}
