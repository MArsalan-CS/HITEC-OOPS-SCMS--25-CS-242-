#ifndef ACCOMMODATION_H
#define ACCOMMODATION_H

class Accommodation
{
    public:
    virtual void AllocateRoom() = 0;
    virtual void vacateRoom() = 0;
    virtual ~Accommodation() {}
};
#endif