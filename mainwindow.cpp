#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clientlogindialog.h"
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

void MainWindow::on_clientbutton_clicked()
{
    //ClientloginDialog clientlogindialog;
    //clientlogindialog.setModal(true);
    //clientlogindialog.exec();
    clientlogindialog = new ClientloginDialog(this);
    clientlogindialog -> show();
}

