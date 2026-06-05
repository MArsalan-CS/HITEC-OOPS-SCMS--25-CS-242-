#ifnedef JOURNAL_H
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
    }
}