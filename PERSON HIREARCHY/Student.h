#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
class Student : public Person
{
private:
string rollNo;
int semester;
float GPA;
string enrolledcourse[5];
public:
Student(string n, string c, int a,string con, string roll, int sem, float G )
      : Person(n,c,a,con)
      {
        rollNo = roll;
        semester = sem;
        GPA = G;
    }
    string getRollNo() const
{
    return rollNo;
}
    char calculateGrade() const
    {
        if(GPA >= 3.7)
            return 'A';
        else if(GPA >= 3.0)
            return 'B';
        else if(GPA >= 2.0)
            return 'C';
        else
            return'F';
    }

    void displayInfo() const override
    {
        cout << "\n===== Student =====\n";
        cout << "Name: " << name << endl;
        cout << "CNIC: " << cnic << endl;
        cout << "Age: " << age << endl;
        cout << "Contact: " << contact << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Semester: " << semester << endl;
        cout << "GPA: " << GPA << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

 #endif