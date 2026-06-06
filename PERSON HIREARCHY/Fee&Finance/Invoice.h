#ifndef INVOICE_H
#define INVOICE_H
#include<iostream>
#include<string>
#include "Feerecord.h"
using namespace std;
class Invoice
{
    private:
    static int invoicecounter;
    int invoiceid;
    string date;
    FeeRecord*feeRecord;
    string* items;
    int itemcount;
    double totalamount;

    public:
    Invoice(FeeRecord*fee, string d, int count, double total)
    {
        invoicecounter++;
        invoiceid = invoicecounter;
        feeRecord = fee;
        date = d;
        itemcount = count;
        totalamount = total;
        items = new string[itemcount];
    }
    void setitem(int index, string item)
    {
        if(index>=0 && index < itemcount){
            items[index] = item;
        }
    }
    void display()
    {
        cout<< "\n==== Invoice ===="<<endl;
        cout<< "Invoice Id: "<<invoiceid<<endl;
        cout<< "Student: "<<feeRecord->getStudentRef()<<endl;
        cout<< "Date: "<<date<<endl;
        cout<<"\nItems: "<<endl;
        for(int i=0;i<itemcount;i++)
        {
            cout<<items[i]<<endl;
        }
        cout<< "Total Amount: "<<totalamount<<endl;
    }
    ~Invoice()
    {
        delete[] items;
    }
};
int Invoice::invoicecounter = 0;
#endif