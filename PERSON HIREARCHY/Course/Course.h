#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <Faculty.h>

using namespace std;
class Course{
    string coursecode;
    string coursename;
    int credithours;
    faculty*instructor;
    int maxcapacity;
    int enrolledcount;
}

#endif