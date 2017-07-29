#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include "Item.h"

class Weapon: public Item
{
    public:
        Weapon(std::string, double, int);
        Weapon(const Weapon &w);
        virtual Weapon* clone()const;
        int getDefensePoints();
        int getAttackPoints();

    protected:
        int attackpoints;
};

#endif // WEAPON_H
