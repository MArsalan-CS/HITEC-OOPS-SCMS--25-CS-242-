#ifndef STAFF_H
#define STAFF_H

#include "Person.h"
class Staff : public Person
{
private:
    string staffID;
    string role;
    double salary;
    public:
    Staff(string n, string c, int a, string con,
          string id, string r, double s)
        : Person(n, c, a, con)
    {
        staffID = id;
        role = r;
        salary = s;
    }

    void displayInfo() const override
    {
        cout << "\n===== Staff =====\n";
        cout << "Name: " << name << endl;
        cout << "CNIC: " << cnic << endl;
        cout << "Age: " << age << endl;
        cout << "Contact: " << contact << endl;
        cout << "Staff ID: " << staffID << endl;
        cout << "Role: " << role << endl;
        cout << "Salary: " << salary << endl;
    }
};

#endif