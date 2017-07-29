#ifndef POTION_H
#define POTION_H
#include "Item.h"
#include <iostream>

class Potion: public Item
{
    public:
        Potion(std::string, double, int);
        Potion(const Potion &p);
        ~Potion();
        virtual void use(){};
        int getDefensePoints();
        int getAttackPoints();

    protected:
        int restorepts;
};

#endif // POTION_H
