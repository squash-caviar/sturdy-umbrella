#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cmath"

double num_first;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_square,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_minus,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_plus,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_div,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_x,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_equal,SIGNAL(clicked()),this,SLOT(on_pushButton_19_clicked()));

    ui->pushButton_equal->setCheckable(true);
    ui->pushButton_square->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_div->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
   QPushButton *button = (QPushButton *)sender();

   double numbers;
   QString new_label;

   numbers = (ui->label->text() + button->text()).toDouble();
   new_label = QString::number(numbers, 'g', 15);
   ui->label->setText(new_label);
}

void MainWindow::on_pushButton_19_clicked()
{
    if(!(ui->label->text().contains('.')))
        ui->label->setText(ui->label->text()+".");
}



void MainWindow::math_operations()
{
    QPushButton *button = (QPushButton *)sender();

    num_first = ui->label->text().toDouble();

    ui->label->setText("   ");

    button->setChecked(true);

}

void MainWindow::on_pushButton_equal_clicked()
{
    double labelNumber, num_second;
    QString new_label;

    num_second = ui->label->text().toDouble();

    if(ui->pushButton_plus->isChecked()) {

        labelNumber = num_first + num_second;
        new_label = QString::number(labelNumber, 'g', 15);
        ui->label->setText(new_label);
        ui->pushButton_plus->setChecked(false);

    } else if(ui->pushButton_minus->isChecked()) {

        labelNumber = num_first - num_second;
        new_label = QString::number(labelNumber, 'g', 15);
        ui->label->setText(new_label);
        ui->pushButton_minus->setChecked(false);

    } else if(ui->pushButton_x->isChecked()) {

       labelNumber = num_first * num_second;
       new_label = QString::number(labelNumber, 'g', 15);
       ui->label->setText(new_label);
       ui->pushButton_x->setChecked(false);

    } else if(ui->pushButton_div->isChecked()) {

        labelNumber = num_first / num_second;
        new_label = QString::number(labelNumber, 'g', 15);
        ui->label->setText(new_label);
        ui->pushButton_div->setChecked(false);

    }


}



void MainWindow::on_pushButton_plus_clicked()
{

}

void MainWindow::on_pushButton_x_clicked()
{

}

void MainWindow::on_pushButton_square_clicked()
{

   ui->pushButton_square->setChecked(false);
   ui->pushButton_minus->setChecked(false);
   ui->pushButton_plus->setChecked(false);
   ui->pushButton_equal->setChecked(false);
   ui->pushButton_x->setChecked(false);
   ui->pushButton_div->setChecked(false);

       ui->label->setText("0");

}

void MainWindow::on_pushButton_div_clicked()
{

}

void MainWindow::on_pushButton_minus_clicked()
{

}
