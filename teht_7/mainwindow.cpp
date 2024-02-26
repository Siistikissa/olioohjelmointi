#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerUpdate()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::timerUpdate(){
    ui->label->setText("Game ongoing");
    if(activePlayer == 1){
        time1 -= 1;
    }
    else if(activePlayer == 2){
        time2 -= 1;
    }
    ui->progressBarP1->setValue(time1);
    ui->progressBarP2->setValue(time2);
    if(ui->progressBarP1->value() == 0){
        winner = 2;
        timer->stop();
        ui->label->setText("Player 2 won");
    }
    else if(ui->progressBarP2->value() == 0){
        winner = 1;
        timer->stop();
        ui->label->setText("Player 1 won");
    }
}

void MainWindow::on_pushButtonP1_clicked()
{
    if(activePlayer == 1 && state == 1){
        activePlayer = 2;
    }
}


void MainWindow::on_pushButtonP2_clicked()
{
    if(activePlayer == 2 && state == 1){
        activePlayer = 1;
    }
}


void MainWindow::on_pushButtonTime1_clicked()
{
    time = 120;
    ui->label->setText("Ready to play");
}


void MainWindow::on_pushButtonTime2_clicked()
{
    time = 300;
    ui->label->setText("Ready to play");
}


void MainWindow::on_pushButtonStart_clicked()
{
    if(time != 0){
        state = 1;
        ui->progressBarP1->setMinimum(0);
        ui->progressBarP2->setMinimum(0);
        ui->progressBarP1->setMaximum(time);
        ui->progressBarP2->setMaximum(time);
        time1 = time;
        time2 = time;
        activePlayer = 1;
        timer->start(1000);
    }
}


void MainWindow::on_pushButtonStop_clicked()
{
    if(state == 1){
        state = 0;
        time1 = 0;
        time2 = 0;
        activePlayer = 0;
        timerUpdate();
        timer->stop();
        ui->label->setText("Select playtime and press start");
    }
}

