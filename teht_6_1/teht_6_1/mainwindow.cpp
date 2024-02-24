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

void MainWindow::clearAndEnterHandler(){
    state = 0;
    operand = 0;
}
void MainWindow::addSubMultDivHandler(){

    if(state == 0){
        state = 1;
    }
}
void MainWindow::resetLineEdits(){
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
}
void MainWindow::numberClickHandler(QString x){
    switch(state){
        case 0:
            number1 = ui->lineEdit->text() + x;
            ui->lineEdit->setText(number1);
            break;
        case 1:
            number2 = ui->lineEdit_2->text() + x;
            ui->lineEdit_2->setText(number2);
            break;
        default:
            break;
        }
}
void MainWindow::on_B0_clicked()
{
    numberClickHandler("0");
}
void MainWindow::on_B1_clicked()
{
    numberClickHandler("1");
}
void MainWindow::on_B2_clicked()
{
    numberClickHandler("2");
}
void MainWindow::on_B3_clicked()
{
    numberClickHandler("3");
}
void MainWindow::on_B4_clicked()
{
    numberClickHandler("4");
}
void MainWindow::on_B5_clicked()
{
    numberClickHandler("5");
}
void MainWindow::on_B6_clicked()
{
    numberClickHandler("6");
}
void MainWindow::on_B7_clicked()
{
    numberClickHandler("7");
}
void MainWindow::on_B8_clicked()
{
    numberClickHandler("8");
}
void MainWindow::on_B9_clicked()
{
    numberClickHandler("9");
}
void MainWindow::on_add_clicked()
{
    addSubMultDivHandler();
    operand = 1;
}
void MainWindow::on_sub_clicked()
{
    addSubMultDivHandler();
    operand = 2;
}
void MainWindow::on_mult_clicked()
{
    addSubMultDivHandler();
    operand = 3;
}
void MainWindow::on_div_clicked()
{
    addSubMultDivHandler();
    operand = 4;
}
void MainWindow::on_clear_clicked(){
    resetLineEdits();
    clearAndEnterHandler();
}
void MainWindow::on_enter_clicked()
{
    switch(operand){
        case 1:
            result = number1.toInt() + number2.toInt();
            break;
        case 2:
            result = number1.toInt() - number2.toInt();
            break;
        case 3:
            result = number1.toInt() * number2.toInt();
            break;
        case 4:
            result = number1.toInt() / number2.toInt();
            break;
        default:
            break;
    }
    ui->lineEdit_3->setText(QString::number(result));
    clearAndEnterHandler();
}

