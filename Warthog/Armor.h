#ifndef ARMOR_H
#define ARMOR_H
#include "Item.h"
#include <iostream>

class Armor: public Item
{
    public:
        Armor(std::string, double, int, double);
        Armor(const Armor &a);
        virtual Armor* clone()const;
        int getDefensePoints();
        int getAttackPoints();
        double getWeight();


    protected:
        int defensePoints;
        double weight;

};

#endif // ARMOR_H
