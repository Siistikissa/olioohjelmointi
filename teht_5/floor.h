#ifndef FLOOR_H
#define FLOOR_H
#include "house.h"

class Floor
{
private:
    House* apartment1 = new House();
    House* apartment2 = new House();
    House* apartment3 = new House();
    House* apartment4 = new House();
public:
    Floor();
    virtual void initializeHouses();
    double calculateConsumption(double);
};

#endif // FLOOR_H
