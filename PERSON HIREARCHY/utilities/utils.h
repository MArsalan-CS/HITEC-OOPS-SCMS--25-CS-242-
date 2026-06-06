#ifndef UTILS_H
#define UTILS_H
#include<iostream>
using namespace std;

class Utils
{
    public:
    static void displaydate()
    {
        cout<< "date: 08/06/2026"<<endl;
    }
    static bool validdateInput(int value)
    {
        return value >0;
    }
};
#endif