#include<iostream>
#include "PERSON HIREARCHY/Student.h"
#include "PERSON HIREARCHY/Faculty.h"
#include "Course/Course.h"
#include "PERSON HIREARCHY/Library/Book.h"
#include "Finance/Feerecord.h"
#include "PERSON HIREARCHY\Hostel\hostelblock.h"
#include "utilities/Reports.h"

using namespace std;
int main()
{
    Student* students[100];
    int studentcount = 0;
    int choice;
    do{
        cout<< "\n===== SMART CAMPUS MANAGEMENT =====\n";
        cout<< "1. Student Info\n";
        cout<< "2. Faculty Info\n";
        cout<< "3. Course Info\n";
        cout<< "4. Library Info\n";
        cout << "5. Fee Record\n";
        cout << "6. Hostel Report\n";
        cout << "7. Campus Report\n";
        cout << "8. Search Student\n";
        cout << "9. Delete Student\n";
        cout<< "10. Exit\n";

        cout<< "\nEnter Choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice){
            case 1:
            {
                string name,cnic, contact, roll;
                int age, semester;
                float gpa;
                cout<< "Enter Name: ";
                getline(cin, name);
                cout<< "Enter CNIC: ";
                getline(cin,cnic);
                cout<< "Enter Age: ";
                cin>> age;
                cin.ignore();
                cout<<"Enter Contact: ";
                getline(cin, roll);
                cout<< "Enter Semester: ";
                cin>> semester;
                cout<< "Enetr GPA: ";
                cin>> gpa;
                students[studentcount]=new Student(name,cnic,age,contact,roll,semester,gpa);
                students[studentcount]->displayInfo();
                studentcount++;
                            break;
            }
            case 2:
            {
                string name, cnic, contact, empID, dept, designation;
                int age;
                cout<< "Enter Name: ";
                getline(cin, name);
                cout<< "Enter CNIC: ";
                getline(cin,cnic);
                cout<< "Enter Age: ";
                cin>> age;
                cin.ignore();
                cout<< "Enter Contact: ";
                getline(cin, contact);
                cout<< "Enter Employee ID: ";
                getline(cin, empID);
                  cout << "Enter Designation: ";
            getline(cin, designation);

            Faculty f(
                name,
                cnic,
                age,
                contact,
                empID,
                dept,
                designation
            );

            f.displayInfo();
            break;
        }
        case 3:
        {
             string code, cname;
            int credit, maxcap;

            cout << "Enter Course Code: ";
            getline(cin, code);

            cout << "Enter Course Name: ";
            getline(cin, cname);

            cout << "Enter Credit Hours: ";
            cin >> credit;

            cout << "Enter Max Capacity: ";
            cin >> maxcap;

            Faculty* inst = nullptr;

            Course c(
                code,
                cname,
                credit,
                inst,
                maxcap
            );

            cout << c;
            break;
        }
        case 4:
        {
            string id,
        }

    }
        }
}
    

