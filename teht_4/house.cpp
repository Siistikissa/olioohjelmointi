#include "house.h"
#include <iostream>
using namespace std;

House::House()
{
    cout << "Constructed House!" << endl;
}
void House::initialize(int residents, int givenSquares){
    numberOfResidents = residents;
    squares = givenSquares;
    cout << "Initialized house with " << numberOfResidents << " residents and " << squares << " squares" << endl;
};
double House::calculateConsumption(double price){
    double finalConsumption = numberOfResidents * squares * price;
    //cout << "Calculated consumption with price " << price << " to be " << finalConsumption << endl;
    return finalConsumption;
};
