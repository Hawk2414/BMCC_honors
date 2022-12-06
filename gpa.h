#ifndef GPA_H
#define GPA_H

#include <QTextStream>
#include <string>
#include <QString>
using namespace std;


class GPA
{
private:
    int Grades[4] = {}; //array stores the numeric grades entered by the user
    int tempI; //to be used for arbitrary purposes
    int credits = 3; //defaulting all course credits to 3
    string Letter[4] = {}; //array stores the corresponding letter grades from the array named Grades
    string tempS; //to be used for arbitrary purposes
    float QualityPoints[4] = {}; //array stores the corresponding quality points grades from the array named Grades
    float tempF; //to be used for arbitrary purposes
    float semesterGPA;

public:
    GPA();
 //mutators
    bool numericValidity(string); //returns true if all characters in the string are numbers
    bool validNumericRange(int); //returns true if input is between 0-100
    void Str_Int(string); //converts string to int
    void setGrades(int, int); //sets the values for the Grades[4] array
    void setLetter_QualityPoints(int); //sets the values for the corresponding quality points and letter grades from the array named Grades
    void setSemesterGPA(); //calculates the semester's GPA based on the user's input for each course's grade

 //accessors
    int getGrades(int); //returns Grades[4] values by chosen element
    int getTemp(); //returns temp
    string getLetterGrade(int); //returns letter grade
    float getQualityPoints(int); //returns quality points
    float getSemesterGPA(); //returns the value of varialbe semesterGPA



};

#endif // GPA_H
