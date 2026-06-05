#include "Course.h"
#include "Enrollment.h"
#include "Exceptions.h"

int main()
{
    Faculty*Teacher=nullptr;
     Course c1(
        "CS101",
        "OOP",
        3,
        Teacher,
        2);

         Course c2(
        "CS103-l",
        "Linear",
        4,
        Teacher,
        5);
        if(c1==c2){
            cout<<"Same course code! " <<endl;
        }
        cout<<c1;
         try
    {
        c1.enrollstudent();
        c1.enrollstudent();
        c1.enrollstudent();
    }
    catch(int)
    {
        CapacityExceededException e;
        e.showError();
    }
    return 0;
}
