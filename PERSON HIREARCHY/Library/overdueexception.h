#ifndef OVERDUEEXCEPTION_H
#define OVERDUEEXCEPTION_H

#include <iostream>
using namespace std;
class Overdueexception
{
    private:
        double fine;

        public:
        Overdueexception(double f)
        {
            fine = f;
        }
        void showError() const
        {
            cout<< "Overdue Item! "<<endl;
            cout<< "Fine Amount: Rs. "<<fine<<endl;
        }
        double getfine() const
        {
            return fine;
        }
};
  #endif