#ifndef MULTISTORYBUILDING_H
#define MULTISTORYBUILDING_H
#include "floor.h"
#include "groundfloor.h"

class Multistorybuilding
{
private:
    Groundfloor first;
    Floor second;
    Floor third;

public:
    Multistorybuilding();
    double calculateConsumption(double);
};

#endif // MULTISTORYBUILDING_H
