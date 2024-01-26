#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"


class ItalianChef : public Chef
{
private:
    int vesi;
    int jauho;
public:
    ItalianChef(string x,int y, int z): Chef(x){
            int vesi = y;
            int jauho = z;
        };
    string getName();
    void makePasta(int, int);
};

#endif // ITALIANCHEF_H
