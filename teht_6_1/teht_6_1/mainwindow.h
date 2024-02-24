#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QString number1, number2;
    int state = 0;
    float result;
    short operand;

    void clearAndEnterHandler();
    void numberClickHandler(QString x);
    void addSubMultDivHandler();
    void resetLineEdits();

private slots:
    void on_B0_clicked();
    void on_B1_clicked();
    void on_B2_clicked();
    void on_B3_clicked();
    void on_B4_clicked();
    void on_B5_clicked();
    void on_B6_clicked();
    void on_B7_clicked();
    void on_B8_clicked();
    void on_B9_clicked();
    void on_add_clicked();
    void on_sub_clicked();
    void on_div_clicked();
    void on_mult_clicked();
    void on_enter_clicked();
    void on_clear_clicked();



private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
