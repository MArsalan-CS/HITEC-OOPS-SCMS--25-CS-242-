#ifndef JOURNAL_H
#define JOURNAL_H
#include "Libraryitem.h"
class Journal : public Libraryitem
{
    private:
    string ISSN;
    int Volume;
    int IssueNumber;

    public:
    Journal(string id, string t, string a, int year, string issn, int vol, int issue) : Libraryitem(id, t,a,year)
    {
        ISSN = issn;
        Volume = vol;
        IssueNumber = issue;
    }
    void checkout() override
    {
        cout<< "\n==== Journal ===="<<endl;

        cout<<"Item ID: "<<ItemId<<endl;
        cout<< "Title: "<<Title<<endl;
        cout<< "Author: "<<Author<<endl;
        cout<<"Publication Year: "<<PublicationYear<<endl;
        cout<< "ISSN: "<<ISSN<<endl;
        cout<< "Volume: "<<Volume<<endl;
        cout<< "Issue Number: "<<IssueNumber<<endl;
    }
    string getISSN() const
    {
        return ISSN;
    }
};
 #endif