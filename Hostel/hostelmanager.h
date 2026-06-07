#ifndef HOSTELMANAGER_H
#define HOSTELMANAGER_H
#include<iostream>
#include "Accommodation.h"
#include "Reportable.h"
#include "hostelblock.h"
using namespace std;

class HostelManager : public Accommodation, public Reportable
{
    private:
    HostelBlock block;
    public:
    HostelManager(string name):block(name)
    {

    }
    void AllocateRoom() override
    {
        cout<< "Room Allocated!"<<endl;
    }
    void vacateRoom() override
    {
        cout<< "Room Vacated!"<<endl;
    }
    void generateReport() override{
        cout<< "\n==== Hostel Report ====\n";
        block.displayRooms();
    }
};
#endif