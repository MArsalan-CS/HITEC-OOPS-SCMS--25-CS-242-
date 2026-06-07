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
            string id, title, author;
            string isbn,genre;
            int year, copies;
            cout<< "Enter Book ID: ";
            getline(cin, id);
            cout<< "Enter Title: ";
            getline(cin,title);
            cout<< "Enter Author: ";
            getline(cin,author);
            cout<< "Enter Publication Year: ";
            cin>>year;
            cin.ignore();
            cout<< "Enter ISBN: ";
            getline(cin,isbn);
            cout<< "Enter Genre: ";
            getline(cin,genre);
            cout<< "Enter Copies: ";
            cin>> copies;

             Book b(
                id,title,author,year,isbn,genre,copies
            );
            b.displayinfo();
            b.checkout();
            break;
        }
        case 5:
        {
            string ref;
            double semFee, hostFee, fine;
            cout<< "Enter Student Reference: ";
            getline(cin, ref);
            cout<< "Enter Semester Fee: ";
            cin>> semFee;
            cout<< "Enter Hostel Fee: ";
            cin>> hostFee;
            cout<< "Enter Library Fine: ";
            cin>> fine;
            FeeRecord Fee(ref,semFee,hostFee,fine);
            Fee.display();
            break;
        }
        case 6:
        {
            string blockName;
            cout<< "Enter Block Name: ";
            getline(cin, blockName);
            HostelBlock block(blockName);
            for(int i=0;i<3;i++)
            {
                int roomNo,floor;
                string type;
                cout<< "\nRoom "<< i+1<<endl;
                cout<< "Room Number: ";
                cin>> roomNo;
                cin.ignore();
                cout<< "Type (Single/Double/Triple): ";
                getline(cin, type);
                cout<< "Floor: ";
                cin>> floor;
                cin.ignore();
                Room r(roomNo,type,floor);
                block.setRoom(i,r);
            }
            block.displayRooms();
            break;
        }
        case 7:
        {
            Reports::campusReport();
            Reports::generatePDFStyleReport();
            break;
        }
        case 8:
        {
            string searchRoll;
            cout<< "Enter Roll"
        }
    }
        }
}
    

