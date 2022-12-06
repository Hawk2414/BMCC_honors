#include "mainwindow.h"
#include "QtWidgets/qfiledialog.h"
#include "QtWidgets/qlabel.h"
#include "QtWidgets/qmessagebox.h"
#include "ui_mainwindow.h"
#include "login_register.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_actionNew_triggered()
{
    file_path = "";
    ui->textEdit_Journal->setText(""); //clears the journal
}


void MainWindow::on_actionOpen_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(file_name);
    file_path = file_name; //to ensure that the file name is saved globally
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "...", "file not open");
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit_Journal->setText(text);
    file.close();
}


void MainWindow::on_actionSave_triggered()
{
    QFile file(file_path);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "...", "file not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit_Journal->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void MainWindow::on_actionSave_as_triggered()
{
    QString file_name = QFileDialog::getSaveFileName(this, "Open the file");
    QFile file(file_name);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "...", "file not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit_Journal->toPlainText();
    out << text;
    file.flush();
    file.close();
}

void MainWindow::on_actionCut_triggered() { ui->textEdit_Journal->cut(); }

void MainWindow::on_actionCopy_triggered() { ui->textEdit_Journal->copy(); }

void MainWindow::on_actionPaste_triggered() { ui->textEdit_Journal->paste(); }

void MainWindow::on_actionRedo_triggered() { ui->textEdit_Journal->redo(); }

void MainWindow::on_actionUndo_triggered() { ui->textEdit_Journal->undo(); }

void MainWindow::on_actionClose_triggered() { close(); }

void MainWindow::on_pushButton_LoginRegister_clicked() {
    hide(); //hide mainwindow
    Login_Register loginRegister; //creating an object that will be used to open a windown where the user can select their courses
    loginRegister.setModal(true); //creating another window from the main window is known as the modal approach
    loginRegister.exec(); //executing the function by opening window
    //loginRegister = new Login_Register(this);
    show(); //return to main window once AddCourse window closes
}

void MainWindow::on_lineEdit_Grade1_editingFinished()
{
    QString entry = ui->lineEdit_Grade1->text(); //captures text entered by the user and uses it as the value for varialbe entry
    std::string tempString = entry.toStdString(); //converts QString to string
    if (!numericValidity(tempString)) {
        ui->lineEdit_Grade1->clear(); //clears the user's input
        QMessageBox::warning(this, "Invalid Number", invalidNumber); //show message that informs user that input is invalid
    } else {
        Str_Int(tempString);
        if (!validNumericRange(getTemp())) {
            ui->lineEdit_Grade1->clear(); //clears the user's input
            QMessageBox::warning(this, "Invalid Range", invalidRange); //show message that informs user that input is invalid
        } else {
            setGrades(0, getTemp());
            setLetter_QualityPoints(0);
            tempSS = QString::fromStdString(getLetterGrade(0)); //converts letter grade to QString and assigns its value to tempSS
            ui->label_LetterGrade1->setText(tempSS); //value of tempSS is printed in label LetterGrade1
            if (ui->lineEdit_Grade1->text().isEmpty()) { //if the line edit widget is empty this if statement assigns the value of Grades[0] to 0
                setGrades(0, 0);
            }
        }
    }
}

void MainWindow::on_lineEdit_Grade2_editingFinished()
{
    QString entry = ui->lineEdit_Grade2->text(); //captures text entered by the user and uses it as the value for varialbe entry
    std::string tempString = entry.toStdString(); //converts QString to string
    if (!numericValidity(tempString)) {
        ui->lineEdit_Grade2->clear(); //clears the user's input
        QMessageBox::warning(this, "Invalid Number", invalidNumber); //show message that informs user that input is invalid
    } else {
        Str_Int(tempString);
        if (!validNumericRange(getTemp())) {
            ui->lineEdit_Grade2->clear(); //clears the user's input
            QMessageBox::warning(this, "Invalid Range", invalidRange); //show message that informs user that input is invalid
        } else {
            setGrades(1, getTemp());
            setLetter_QualityPoints(1);
            tempSS = QString::fromStdString(getLetterGrade(1)); //converts letter grade to QString and assigns its value to tempSS
            ui->label_LetterGrade2->setText(tempSS); //value of tempSS is printed in label LetterGrade1
            if (ui->lineEdit_Grade2->text().isEmpty()) { //if the line edit widget is empty this if statement assigns the value of Grades[1] to 0
                setGrades(1, 0);
            }
        }
    }
}




void MainWindow::on_lineEdit_Grade3_editingFinished()
{
    QString entry = ui->lineEdit_Grade3->text(); //captures text entered by the user and uses it as the value for varialbe entry
    std::string tempString = entry.toStdString(); //converts QString to string
    if (!numericValidity(tempString)) {
        ui->lineEdit_Grade3->clear(); //clears the user's input
        QMessageBox::warning(this, "Invalid Number", invalidNumber); //show message that informs user that input is invalid
    } else {
        Str_Int(tempString);
        if (!validNumericRange(getTemp())) {
            ui->lineEdit_Grade3->clear(); //clears the user's input
            QMessageBox::warning(this, "Invalid Range", invalidRange); //show message that informs user that input is invalid
        } else {
            setGrades(2, getTemp());
            setLetter_QualityPoints(2);
            tempSS = QString::fromStdString(getLetterGrade(2)); //converts letter grade to QString and assigns its value to tempSS
            ui->label_LetterGrade3->setText(tempSS); //value of tempSS is printed in label LetterGrade1
            if (ui->lineEdit_Grade3->text().isEmpty()) { //if the line edit widget is empty this if statement assigns the value of Grades[2] to 0
                setGrades(2, 0);
            }
        }
    }
}


void MainWindow::on_lineEdit_Grade4_editingFinished()
{
    QString entry = ui->lineEdit_Grade4->text(); //captures text entered by the user and uses it as the value for varialbe entry
    std::string tempString = entry.toStdString(); //converts QString to string
    if (!numericValidity(tempString)) {
        ui->lineEdit_Grade4->clear(); //clears the user's input
        QMessageBox::warning(this, "Invalid Number", invalidNumber); //show message that informs user that input is invalid
    } else {
        Str_Int(tempString);
        if (!validNumericRange(getTemp())) {
            ui->lineEdit_Grade4->clear(); //clears the user's input
            QMessageBox::warning(this, "Invalid Range", invalidRange); //show message that informs user that input is invalid
        } else {
            setGrades(3, getTemp());
            setLetter_QualityPoints(3);
            tempSS = QString::fromStdString(getLetterGrade(3)); //converts letter grade to QString and assigns its value to tempSS
            ui->label_LetterGrade4->setText(tempSS); //value of tempSS is printed in label LetterGrade1
            if (ui->lineEdit_Grade4->text().isEmpty()) { //if the line edit widget is empty this if statement assigns the value of Grades[3] to 0
                setGrades(3, 0);
            }
        }
    }
}
