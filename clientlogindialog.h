#ifndef CLIENTLOGINDIALOG_H
#define CLIENTLOGINDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <clientsignupdialog.h>
namespace Ui {
class ClientloginDialog;
}

class ClientloginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClientloginDialog(QWidget *parent = nullptr);
    ~ClientloginDialog();

private slots:
    void on_pushButton_signup_clicked();

private:
    Ui::ClientloginDialog *ui;
    ClientsignupDialog *login_ui;
};

#endif // CLIENTLOGINDIALOG_H
