#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gpa.h"
#include "ui_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow, public GPA {
    Q_OBJECT

private:
    Ui::MainWindow *ui; //ui that interacts with GUI
    QString file_path; //variable for journal entry section, used to save/open saved journal entries
    QString invalidNumber = "Error: Invalid input. Entry must be all numbers.";
    QString invalidRange = "Error: Invalid input. Entry must be between 0 and 100.";
    QString tempSS, tempSSS; //to be used for arbitrary purposes

private slots:
    void on_actionNew_triggered(); //allows user to create a new journal entry

    void on_actionOpen_triggered(); //opens a saved journal entry

    void on_actionSave_triggered(); //saves already saved journal entry

    void on_actionSave_as_triggered(); //saves a new journal entry

    void on_actionCut_triggered(); //performs cut excution on text in journal window

    void on_actionCopy_triggered(); //performs copy excution on text in journal window

    void on_actionPaste_triggered(); //performs paste excution on text in journal window

    void on_actionRedo_triggered(); //performs redo excution on text in journal window

    void on_actionUndo_triggered(); //performs undo excution on text in journal window

    void on_actionClose_triggered(); //closes the program

    void on_pushButton_LoginRegister_clicked(); //button that opens up another window where user can either login or register

    void on_lineEdit_Grade1_editingFinished(); //algorithm for user input validation

    void on_lineEdit_Grade2_editingFinished(); //algorithm for user input validation

    void on_lineEdit_Grade3_editingFinished(); //algorithm for user input validation

    void on_lineEdit_Grade4_editingFinished(); //algorithm for user input validation

public:
    MainWindow(QWidget *parent = nullptr); //constructor
    ~MainWindow(); //destructor
};
#endif // MAINWINDOW_H
