#include "login_register.h"
#include "QtWidgets/qmessagebox.h"
#include "ui_login_register.h"
#include <string>
using namespace std;

Login_Register::Login_Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_Register)
{
    ui->setupUi(this);
}

//destructor
Login_Register::~Login_Register()
{
    delete ui;
}

void Login_Register::on_pushButton_Cancel_clicked()
{
    close(); //close window
}


void Login_Register::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_Username->text(); //captures user's input for username inside this variable from line edit
    QString password = ui->lineEdit_Password->text(); //captures user's input for password inside this variable from line edit

    if (username == "test" && password == "test") { //comparing whether the variablees above can be authenticated
        QMessageBox::information(this, "Login", "Username and Passowrd are correct"); //QMessage box, letting the user know that they successfully logged in
        close(); //once the user is informed of successful login, the window closes, returning to main screen
    } else  {
        QMessageBox::warning(this, "Login", "Error: Username and Passowrd are incorrect correct"); //QMessage box, letting the user know that they unsuccessfully logged in
    }
}

