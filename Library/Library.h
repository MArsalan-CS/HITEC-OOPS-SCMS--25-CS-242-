#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <fstream>
#include "Libraryitem.h"
using namespace std;

class library
{
    private:
    Libraryitem*catalog[100];
    int itemcount;

    public:
    library()
    {
        itemcount = 0;
    }
    void additem(Libraryitem*item )
    {
        if(itemcount <100){
            catalog[itemcount] = item;
            itemcount++;
        }
    }
    void displayAll()
    {
        for(int i=0;i<itemcount;i++)
        {
            catalog[i]->displayinfo();
            cout<<endl;
        }
    }
    void searchbytitle(string searchtitle)
    {
        bool found = false;
        for(int i=0;i<itemcount;i++)
        {
            if(catalog[i]->getTitle() == searchtitle)
            {
                cout<< "\nItem Found!\n";
                catalog[i]->displayinfo();
                found = true;
            }
        }
        if(!found)
        {
            cout<< "Item Not Found! "<<endl;
        }
    }
    void savecatalog(){
        ofstream file("catalog.txt");
        if(!file)
        {
            cout<< "File Error!"<<endl;
            return;
        }
        for(int i=0; i<itemcount;i++)
        {
            file<<catalog[i]->getitemid()<<" "<<catalog[i]->getTitle()<<endl;
        }
        file.close();
        cout<< "catalog saved!"<<endl;
    }
    void loadcatalog()
    {
        ifstream file("catalog.txt");
        string line;

        cout<< "\ncatalog Data:\n";
        while(getline(file,line))
        {
            cout<<line<<endl;
        }
        file.close();
    }
};
 #endif
