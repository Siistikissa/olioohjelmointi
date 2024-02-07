#ifndef MULTISTORYBUILDING_H
#define MULTISTORYBUILDING_H
#include "floor.h"
#include "groundfloor.h"

class Multistorybuilding
{
private:
    Groundfloor* first = new Groundfloor();
    Floor* second = new Floor();
    Floor* third = new Floor();

public:
    Multistorybuilding();
    double calculateConsumption(double);
};

#endif // MULTISTORYBUILDING_H
