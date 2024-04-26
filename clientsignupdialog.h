#ifndef CLIENTSIGNUPDIALOG_H
#define CLIENTSIGNUPDIALOG_H

#include <QDialog>

namespace Ui {
class ClientsignupDialog;
}

class ClientsignupDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClientsignupDialog(QWidget *parent = nullptr);
    ~ClientsignupDialog();

private:
    Ui::ClientsignupDialog *ui;
};

#endif // CLIENTSIGNUPDIALOG_H
