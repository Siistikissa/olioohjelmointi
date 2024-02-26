#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

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

private slots:
    void on_pushButtonP1_clicked();

    void on_pushButtonP2_clicked();

    void on_pushButtonTime1_clicked();

    void on_pushButtonTime2_clicked();

    void on_pushButtonStart_clicked();

    void on_pushButtonStop_clicked();
public slots:
    void timerUpdate();
private:
    Ui::MainWindow *ui;
    int state;
    int time;
    short activePlayer;
    int time1;
    int time2;
    class QTimer *timer;

};
#endif // MAINWINDOW_H
