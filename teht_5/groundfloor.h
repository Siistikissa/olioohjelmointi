#ifndef GROUNDFLOOR_H
#define GROUNDFLOOR_H
#include "house.h"
#include "floor.h"

class Groundfloor : public Floor
{
private:
    House* apartment1 = new House();
    House* apartment2 = new House();
public:
    Groundfloor();
    void initializeHouses() override;
    double calculateConsumption(double);
};

#endif // GROUNDFLOOR_H
