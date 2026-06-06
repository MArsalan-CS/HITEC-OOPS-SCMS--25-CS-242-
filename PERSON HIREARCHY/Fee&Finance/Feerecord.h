#ifndef FEERECORD_H
#define FEERECORD_H
#include<iostream>
#include <string>
using namespace std;

class FeeRecord
{
    private:
    string StudentRef;
    double SemesterFee;
    double HostelFee;
    double LibraryFine;
    double TotalPaid;
    double Balance;
    
    public:
    
        FeeRecord(string ref, double semfee, double hostfee, double fine)
        {
            StudentRef = ref;
            SemesterFee = semfee;
            HostelFee = hostfee;
            LibraryFine = fine;
            TotalPaid = 0;
            Balance = SemesterFee+HostelFee+LibraryFine;
        }

        FeeRecord(const FeeRecord&other){
            StudentRef = other.StudentRef;
            SemesterFee = other.SemesterFee;
            HostelFee = other.HostelFee;
            LibraryFine = other.LibraryFine;
            TotalPaid = other.TotalPaid;
            Balance = other.Balance;
        }
        FeeRecord& operator=(const FeeRecord&other)
        {
            if(this != &other)
            {
                StudentRef =other.StudentRef;
                SemesterFee = other.SemesterFee;
                HostelFee = other.HostelFee;
                LibraryFine = other.LibraryFine;
                TotalPaid = other.TotalPaid;
                Balance = other.Balance;
            }
            return*this;
        }
    };
    #endif
