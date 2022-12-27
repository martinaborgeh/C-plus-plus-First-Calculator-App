#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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




    void on_button7_clicked();

    void on_clear_clicked();

    void on_division_clicked();

    void on_multiply_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_subtraction_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_addtion_clicked();

    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_sqrtbtn_clicked();

    void on_percentage_clicked();

    void on_button0_clicked();

    void on_decptnbtn_clicked();

    void on_equal_to_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
