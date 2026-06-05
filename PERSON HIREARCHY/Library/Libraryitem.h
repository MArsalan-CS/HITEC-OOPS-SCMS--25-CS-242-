#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H
#include <iostream>
#include<string>
using namespace std;

class Libraryitem
{
    protected:
    string ItemId;
    string Title;
    string Author;
    int PublicationYear;
    
    public:
    Libraryitem(string id, string t, string a, int year)
    {
        ItemId= id;
        Title=t;
        Author=a;
        PublicationYear=year;
    }
    string getitemid() const{
        return ItemId;
    }
    string getTitle() const
    {
        return Title;
    }
    string getauthor() const{
        return Author;
    }
    int getpublicationyear() const
    {
        return PublicationYear;
    }
    void settitle(string t)
    {
        Title=t;
    }
    void setauthor(string a)
    {
        Author=a;
    }

    virtual void checkout() = 0;

    virtual void displayinfo() const
{
    cout<< "Item Id: " <<ItemId <<endl;
    cout<< "Title: " <<Title <<endl;
    cout<< "Author: " <<Author<<endl;
    cout<< "Publication Year: "<<PublicationYear<<endl;
}
virtual ~Libraryitem() {}
};
 #endif