#ifndef ROOM_H
#define ROOM_H
#include<iostream>
#include<string>
#include "../../PERSON HIREARCHY/Student.h"
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
     int getCapacity()
    {
        if(type == "Single")
            return 1;

        if(type == "Double")
            return 2;

        return 3;
    }
    void addOccupant(Student* s)
    {
        if(occupantCount<getCapacity())
        {
            occupants[occupantCount] = s;
            occupantCount++;
            cout<< "Student Added Successfully!"<<endl;
        }
         else{
            cout<< "Room Full!"<<endl;
        }
      }
      void removeOccupant()
        {
            if(occupantCount > 0)
      {
           occupantCount--;
         occupants[occupantCount] = nullptr;
      cout<< "Student Removed Successfully!"<<endl;
    }
    else
    {
        cout<<"Room Already Empty!"<<endl;
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