#ifndef LOGIN_REGISTER_H
#define LOGIN_REGISTER_H

#include <QDialog>

namespace Ui { class Login_Register; }

class Login_Register : public QDialog {
    Q_OBJECT

private:
    Ui::Login_Register *ui;
    Login_Register *loginRegister;

private slots:
    void on_pushButton_Cancel_clicked(); //closes the Login/Register window
    void on_pushButton_Login_clicked(); //allows user to log into a previously made account

public:
    explicit Login_Register(QWidget *parent = nullptr); //constructor
    ~Login_Register(); //destructor
};

#endif // LOGIN_REGISTER_H
