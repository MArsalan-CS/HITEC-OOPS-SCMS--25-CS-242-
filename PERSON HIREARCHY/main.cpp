#include "Student.h"
#include "Faculty.h"
#include "Staff.h"
int main(){
    Student s1(
        "Arsalan",
        "762-278723-327",
        20,
        "03435827832",
        "CS-104-L",
        2,
        3.4);

    Faculty f1(
        "Ali",
        "6288-67826-62776",
        35,
        "03458267628",
        "CS_872",
        "Computer Science",
        "Lecturer");

    Staff st1(
        "Ahmed",
        "2768-782-87267",
        40,
        "03457267627",
        "CS_102",
        "Lab Assistant",
        50000);

    Person* people[3];
    people[0] = &s1;
    people[1] = &f1;
    people[2] = &st1;

    cout << "\n===== Runtime Polymorphism Demo =====\n";

    for (int i = 0; i < 3; i++)
    {
        people[i]->displayInfo();
    }
    return 0;
}
