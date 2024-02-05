#ifndef FLOOR_H
#define FLOOR_H
#include "house.h"

class Floor
{
private:
    House apartment1;
    House apartment2;
    House apartment3;
    House apartment4;
public:
    Floor();
    virtual void initializeHouses();
    double calculateConsumption(double);
};

#endif // FLOOR_H
