#include "gpa.h"

//constructor
GPA::GPA()
{

}

//mutators
bool GPA::numericValidity(string entry) {
    string temp = entry;
    for (int i = 0; i < temp.length(); i++) {
        if (isdigit(temp[i]) == false) {
            return false;
        } else
        { return true; }
    }
}

bool GPA::validNumericRange(int entry)
{
  if (entry >= 0 && entry <= 100) {
    return true;
    } else {
    return false;
    }
}

void GPA::Str_Int(string lineEdit) {
    tempI = stoi(lineEdit);
}

void GPA::setGrades(int arrayElement, int value) {
    Grades[arrayElement] = value;
}

void GPA::setLetter_QualityPoints(int element) {
    switch (Grades[element]) {
        case 93 ... 100:
            Letter[element] ="A";
            QualityPoints[element] = 4.00;
            break;
        case 90 ... 92:
            Letter[element] ="A-";
            QualityPoints[element] = 3.70;
            break;
        case 87 ... 89:
            Letter[element] ="B+";
            QualityPoints[element] = 3.30;
            break;
        case 83 ... 86:
            Letter[element] ="B";
            QualityPoints[element] = 3.00;
            break;
        case 80 ... 82:
            Letter[element] ="B-";
            QualityPoints[element] = 2.70;
            break;
        case 77 ... 79:
            Letter[element] ="C+";
            QualityPoints[element] = 2.30;
            break;
        case 73 ... 76:
            Letter[element] ="C";
            QualityPoints[element] = 2.00;
            break;
        case 70 ... 72:
            Letter[element] ="C-";
            QualityPoints[element] = 1.70;
            break;
        case 67 ... 69:
            Letter[element] ="D+";
            QualityPoints[element] = 1.30;
            break;
        case 63 ... 66:
            Letter[element] ="D";
            QualityPoints[element] = 1.00;
            break;
        case 60 ... 62:
            Letter[element] ="D-";
            QualityPoints[element] = 0.70;
            break;
        }
}

void GPA::setSemesterGPA() {
    int ttlQP = 0;
    int totalCredits = credits * 4;
    for (int i = 0; i <= 3; i ++) {
        ttlQP += QualityPoints[i] * credits;
    }
    semesterGPA = ttlQP / totalCredits;
}


//accessors
int GPA::getGrades(int element) { return Grades[element]; }

int GPA::getTemp() { return tempI; }

string GPA::getLetterGrade(int element) { return Letter[element]; }

float GPA::getQualityPoints(int element) { return QualityPoints[element]; }

float GPA::getSemesterGPA() {
    setSemesterGPA();
    return semesterGPA;
}


