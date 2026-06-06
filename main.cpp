#include <iostream>

#include "PERSON HIREARCHY\Student.h"          
#include "PERSON HIREARCHY/Faculty.h"

#include "Course/Course.h"

#include "PERSON HIREARCHY\Library\Book.h"       

#include "Finance/Feerecord.h"

#include "Course\Hostel\hostelmanager.h"   

#include "utilities/Reports.h"
#include "utilities/Utils.h"

using namespace std;

int main()
{
    Student s1(
        "Arsalan",
        "12345-1234567-1",
        20,
        "03001234567",
        "CS-101",
        2,
        3.5);

    Faculty f1(
        "Ali Khan",
        "35201-1234567-1",
        40,
        "03111234567",
        "EMP001",
        "Computer Science",
        "Lecturer");

    Course c1(
        "CS101",
        "OOP",
        3,
        &f1,
        30);

    Book b1(
        "B001",
        "C++ Programming",
        "Bjarne Stroustrup",
        2023,
        "978123456",
        "Programming",
        5);

    FeeRecord fee1(
        "CS-101",
        50000,
        10000,
        500);

    HostelManager hostel("A Block");

    int choice;

    do
    {
        cout << "\n===== SMART CAMPUS MANAGEMENT =====\n";
        cout << "1. Student Info\n";
        cout << "2. Faculty Info\n";
        cout << "3. Course Info\n";
        cout << "4. Library Info\n";
        cout << "5. Fee Record\n";
        cout << "6. Hostel Report\n";
        cout << "7. Campus Report\n";
        cout << "0. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            s1.displayInfo();
            break;

        case 2:
            f1.displayInfo();
            break;

        case 3:
            cout << c1;
            break;

        case 4:
            b1.displayinfo();
            b1.checkout();
            break;

        case 5:
            fee1.display();
            break;

        case 6:
            hostel.generateReport();
            break;

        case 7:
            Reports::campusReport();
            Reports::generatePDFStyleReport();
            break;

        case 0:
            cout << "Program Closed\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while(choice != 0);

    return 0;
}