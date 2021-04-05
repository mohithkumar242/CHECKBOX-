#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTextStream"

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


void MainWindow::on_checkBox_bold_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_bold->isChecked())
    {
        QPalette palette = ui->label->palette();
        palette.setColor(ui->label->foregroundRole(),QColor("#ff0000"));
        ui->label->setPalette(palette);
        stream<<"Bold is Checked!"<<"\n";
    }
    else
    {
        stream<<"Bold is unchecked"<<"\n";
    }
}

void MainWindow::on_checkBox_italic_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_italic->isChecked())
    {
        QPalette palette = ui->label->palette();
        palette.setColor(ui->label->foregroundRole(),QColor("#37ff00"));
        ui->label->setPalette(palette);
        stream<<"italic is Checked!"<<"\n";
    }
    else
    {
        stream<<"italic is unchecked"<<"\n";
    }
}

void MainWindow::on_radioButton_left_clicked()
{
    QTextStream stream(stdout);
    if(ui->radioButton_left->isChecked())
    {
        QPalette palette = ui->label->palette();
        palette.setColor(ui->label->foregroundRole(),QColor("#ff8c00"));
        ui->label->setPalette(palette);
        stream<<"left  is Checked!"<<"\n";
    }
    else
    {
        stream<<"left is unchecked"<<"\n";
    }
}

void MainWindow::on_radioButton_center_clicked()
{
    QTextStream stream(stdout);
    if(ui->radioButton_center->isChecked())
    {
        QPalette palette = ui->label->palette();
        palette.setColor(ui->label->foregroundRole(),QColor("#800000"));
        ui->label->setPalette(palette);
        stream<<"center is Checked!"<<"\n";
    }
    else
    {
        stream<<"center is unchecked"<<"\n";
    }
}

void MainWindow::on_radioButton_right_clicked()
{
    QTextStream stream(stdout);
    if(ui->radioButton_right->isChecked())
    {
        QPalette palette = ui->label->palette();
        palette.setColor(ui->label->foregroundRole(),QColor("#FF1493"));
        ui->label->setPalette(palette);
        stream<<"right is Checked!"<<"\n";
    }
    else
    {
        stream<<"right is unchecked"<<"\n";
    }
}
