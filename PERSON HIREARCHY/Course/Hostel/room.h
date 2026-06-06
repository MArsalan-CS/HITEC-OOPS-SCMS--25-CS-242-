#ifndef ROOM_H
#define ROOM_H
#include<iostream>
#include<string>
#include "Student.h"
using namespace std;

class Room
{
    private:
    int roomNumber;
    string type;
    int floor;

    Student* occupants[3];
    int occupantCount;
    public:
    Room()
    {
        roomNumber = 0;
        type = "Single";
        floor = 0;
        occupantCount = 0;
        for(int i=0;i<3;i++)
        {
            occupants[i]= nullptr;
        }
    }
    Room(int num, string t, int f){
        roomNumber =num;
        type = t;
        floor = f;

        occupantCount = 0;
        for(int i=0;i<3;i++){
            occupants[i] =nullptr;
        }
    }
    void addoccupant(Student* s)
    {
        if(occupantCount<3)
        {
            occupants[occupantCount] = s;
            occupantCount++;
        }
        else{
            cout<< "Room Full!"<<endl;
        }
    }
    void displayRoom()
    {
        cout<< "\nRoom Number: "<<roomNumber<<endl;
        cout<< "Type: "<<type<<endl;
        cout<< "Floor: "<<floor<<endl;
        cout<< "Occupants: "<<occupantCount<<endl;
    }
};
#endif