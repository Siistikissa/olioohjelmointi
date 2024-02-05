#include "multistorybuilding.h"
#include <iostream>
using namespace std;

Multistorybuilding::Multistorybuilding()
{
    cout << "Constructed Multistorybuilding!" << endl;
}
double Multistorybuilding::calculateConsumption(double price){
    first.initializeHouses();
    second.initializeHouses();
    third.initializeHouses();
    double finalConsumption = first.calculateConsumption(price) + second.calculateConsumption(price) + third.calculateConsumption(price);
    cout << "Calculated consumption with price " << price << " to be " << finalConsumption << endl;
    return finalConsumption;
}
