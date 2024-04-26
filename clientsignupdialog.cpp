#include "clientsignupdialog.h"
#include "ui_clientsignupdialog.h"

ClientsignupDialog::ClientsignupDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientsignupDialog)
{
    ui->setupUi(this);
    ui->textEdit_clientName->setPlaceholderText("Enter Your Name");
    ui->textEdit_clientEmail->setPlaceholderText("Enter Your Email");
    ui->textEdit_clientPhone->setPlaceholderText("Enter Your Contact No");
    ui->textEdit_clientUsername->setPlaceholderText("Enter Your Username");
    ui->textEdit_clientPassword->setPlaceholderText("Enter Your Password");
    ui->textEdit_clientConfirmPassword->setPlaceholderText("Re-enter Your Password");
}
ClientsignupDialog::~ClientsignupDialog()
{
    delete ui;
}
