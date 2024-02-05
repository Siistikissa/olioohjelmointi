#include "groundfloor.h"
#include <iostream>
using namespace std;

Groundfloor::Groundfloor()
{
    cout << "Constructed Groundfloor!" << endl;
}
void Groundfloor::initializeHouses(){
    cout << "Construct 2 houses to groundfloor." << endl;
    apartment1.initialize(2,100);
    apartment2.initialize(2,100);
    cout << "Construct inherited floors houses to groundfloor." << endl;
    Floor::initializeHouses();
};
double Groundfloor::calculateConsumption(double price){
    double finalConsumption = apartment1.calculateConsumption(price) + apartment2.calculateConsumption(price)+ Floor::calculateConsumption(price);
    //cout << "Calculated consumption with price " << price << " to be " << finalConsumption << endl;
    return finalConsumption;
};
