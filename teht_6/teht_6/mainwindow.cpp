#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_clicked()
{
    QString qsNewNum =ui->lineEdit->text();
    int iNewNum = qsNewNum.toInt() + 1;
    qsNewNum = QString::number(iNewNum);
    ui->lineEdit->setText(qsNewNum);
}


void MainWindow::on_reset_clicked()
{
    ui->lineEdit->setText("");
}

