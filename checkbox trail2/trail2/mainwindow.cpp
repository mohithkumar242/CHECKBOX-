#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->checkBox,SIGNAL(clicked(bool)),this,SLOT(oncheckboxclicked()));
    connect(ui->checkBox_2,SIGNAL(clicked(bool)),this,SLOT(oncheckboxclicked()));
    connect(ui->checkBox_3,SIGNAL(clicked(bool)),this,SLOT(oncheckboxclicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::oncheckboxclicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked()){
        stream<<"CheckBox 1 is checked"<<"\n";

    }
    else{
        stream<<"CheckBox 1 is unchecked"<<"\n";
    }
    if(ui->checkBox_2->isChecked()){
        stream<<"CheckBox 2 is checked"<<"\n";

    }
    else{
        stream<<"CheckBox 2 is unchecked"<<"\n";
    }
    if(ui->checkBox_3->isChecked()){
        stream<<"CheckBox 3 is checked"<<"\n";

    }
    else{
       stream<<"CheckBox 3 is unchecked"<<"\n";
    }
}
