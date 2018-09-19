#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->verticalWidgetleft->setStyleSheet("background-color:#ffffff");
    ui->verticalWidgetright->setStyleSheet("background-color:#ffffff");

    ui->usertitle->setStyleSheet("background-color:#dddddd");

    QImage *userhead_img = new QImage(":/img/man.png");
    QImage *scaled_userhead_img = new QImage();
    *scaled_userhead_img = userhead_img->scaled(70,70,Qt::KeepAspectRatio);
    ui->userhead->setPixmap(QPixmap::fromImage(*scaled_userhead_img));
    ui->userhead->setAlignment(Qt::AlignCenter);
    ui->userhead->setStyleSheet("background:transparent");
}

MainWindow::~MainWindow()
{
    delete ui;
}
