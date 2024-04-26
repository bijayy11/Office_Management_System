#include "clientlogindialog.h"
#include "ui_clientlogindialog.h"

ClientloginDialog::ClientloginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientloginDialog)
{
    ui->setupUi(this);
    ui->usernamelogin->setPlaceholderText("Enter Your Username");
    ui->passwordlogin->setPlaceholderText("Enter Your Password");
}

ClientloginDialog::~ClientloginDialog()
{
    delete ui;
}

void ClientloginDialog::on_pushButton_signup_clicked()
{
        login_ui=new ClientsignupDialog(this);
        login_ui->show();
}

