#ifndef BOOK_H
#define BOOK_H

#include "Libraryitem.h"
class Book : public Libraryitem
{
    private:
    string ISBN;
    string genere;
    int copiesAvailable;

    public:
    Book(string id, string t, string a, int year, string isbn, string g, int copies) : Libraryitem(id,t,a,year)
    {
        ISBN = isbn;
        genere = g;
        copiesAvailable = copies;
    }
    void checkout() override{
        if(copiesAvailable>0)
        {
            copiesAvailable--;
            cout<< "Book Issued Successfully! "<<endl;
        }
        else
        {
            cout<< "No Copies Available! "<<endl;
        }
    }
    void displayinfo() const override
    {
        cout<< "\n===== Book ===="<<endl;
        cout<< "Item ID: "<< ItemId<<endl;
        cout<< "Title: "<<Title<<endl;
        cout<< "Author: "<<Author<<endl;
        cout<< "Publication Year: "<<PublicationYear<<endl;
        cout<< "ISBN: "<<ISBN<<endl;
        cout<< "Genere: "<<genere<<endl;
        cout<< "Copies Available: "<<copiesAvailable<<endl;
    }
    string getISBN() const
    {
        return ISBN;
    }
    int getCopiesAvailable() const{
        return copiesAvailable;
    }
};
  #endif
  