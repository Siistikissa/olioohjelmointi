#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef Jyrki("Jyrki");
    ItalianChef Mario("Mario", 2, 3);
    Jyrki.makeSalad();
    Mario.makePasta(2,3);
    Jyrki.makeSoup();
    return 0;
}
