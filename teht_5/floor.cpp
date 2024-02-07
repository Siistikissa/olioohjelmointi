#include "floor.h"
#include <iostream>

using namespace std;

Floor::Floor()
{
    cout << "Constructed Floor!" << endl;
}
void Floor::initializeHouses(){
    cout << "Construct 4 houses from floor." << endl;
    apartment1->initialize(2,100);
    apartment2->initialize(2,100);
    apartment3->initialize(2,100);
    apartment4->initialize(2,100);
};
double Floor::calculateConsumption(double price){
    double finalConsumption = apartment1->calculateConsumption(price) + apartment2->calculateConsumption(price) + apartment3->calculateConsumption(price) + apartment4->calculateConsumption(price);
    //cout <<  "Calculated consumption with price " << price << " to be " << finalConsumption << endl;
    return finalConsumption;
};
