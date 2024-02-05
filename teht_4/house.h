#ifndef HOUSE_H
#define HOUSE_H


class House
{
public:
    House();
    int numberOfResidents;
    int squares;
    void initialize(int,int);
    double calculateConsumption(double);
};

#endif // HOUSE_H
