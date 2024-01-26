#include "italianchef.h"
#include <iostream>

using namespace std;

string ItalianChef::getName(){
    return name;
};
void ItalianChef::makePasta(int giveWater, int givenFlour){
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " uses water = " << givenFlour <<endl;
    cout << "Chef " << name << " uses flour = " << giveWater <<endl;
};
