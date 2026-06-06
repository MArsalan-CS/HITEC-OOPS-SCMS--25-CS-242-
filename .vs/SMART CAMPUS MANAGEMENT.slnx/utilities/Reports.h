#ifndef REPORTS_H
#define REPORTS_H
#include<iostream>
using namespace std;

class Reports
{
    public:
    static void campusReport()
    {
        cout<< "\n===== CAMPUS REPORT =====\n";
        
        cout<< "Students Information\n";
        cout<< "Faculty Information\n";
        cout<< "Library Information\n";
        cout<< "Hostel Information\n";
        cout<< "Fee Information\n";
    }
    static void generatePDFStyleReport()
    {
        cout<< "\n==============================="<<endl;
        cout<< " SMART CAMPUS MANAGEMENT SYSTEM"<<endl;
        cout<<"====================================" <<endl;
        
          cout << "Students Information" << endl;
    cout << "Faculty Information" << endl;
    cout << "Library Information" << endl;
    cout << "Hostel Information" << endl;
    cout << "Fee Information" << endl;

    cout << "===================================" << endl;
    }
    static void findOverdueBooks()
    {
        cout<< "Searching Overdue Books!"<<endl;
    }
};
#endif