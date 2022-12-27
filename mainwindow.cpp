#include "mainwindow.h"
#include "ui_mainwindow.h"

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








void MainWindow::on_button7_clicked()
{
    ui->Dispplay->insert(ui->button7->text());
}


void MainWindow::on_clear_clicked()
{
    ui->Dispplay->setText("");
}


void MainWindow::on_division_clicked()
{
    ui->Dispplay->insert(ui->division->text());
}


void MainWindow::on_multiply_clicked()
{
    ui->Dispplay->insert(ui->multiply->text());
}


void MainWindow::on_button8_clicked()
{
    ui->Dispplay->insert(ui->button8->text());
}


void MainWindow::on_button9_clicked()
{
    ui->Dispplay->insert(ui->button9->text());
}


void MainWindow::on_subtraction_clicked()
{
    ui->Dispplay->insert(ui->subtraction->text());
}


void MainWindow::on_button4_clicked()
{
    ui->Dispplay->insert(ui->button4->text());
}


void MainWindow::on_button5_clicked()
{
     ui->Dispplay->insert(ui->button5->text());
}


void MainWindow::on_button6_clicked()
{
     ui->Dispplay->insert(ui->button6->text());
}


void MainWindow::on_addtion_clicked()
{
     ui->Dispplay->insert(ui->addtion->text());
}


void MainWindow::on_button1_clicked()
{
   ui->Dispplay->insert(ui->button1->text());
}


void MainWindow::on_button2_clicked()
{
    ui->Dispplay->insert(ui->button2->text());
}


void MainWindow::on_button3_clicked()
{
    ui->Dispplay->insert(ui->button3->text());
}


void MainWindow::on_sqrtbtn_clicked()
{
    ui->Dispplay->insert(ui->sqrtbtn->text());
}


void MainWindow::on_percentage_clicked()
{
    ui->Dispplay->insert(ui->percentage->text());
}


void MainWindow::on_button0_clicked()
{
    ui->Dispplay->insert(ui->button0->text());
}


void MainWindow::on_decptnbtn_clicked()
{
    ui->Dispplay->insert(ui->decptnbtn->text());
}


void MainWindow::on_equal_to_clicked()
{

}
