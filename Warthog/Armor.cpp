#include "Armor.h"
#include "Item.h"
#include <iostream>

Armor::Armor(std::string name, double price, int defensePoints, double weight) : Item(name, price)
{
    this->defensePoints = defensePoints;
    this->weight = weight;
}

Armor::Armor(const Armor &a) : Item(a)
{
    this->defensePoints = a.defensePoints;
}

int Armor::getAttackPoints()
{
    return 0;
}

int Armor::getDefensePoints()
{
    return defensePoints;
}

double Armor::getWeight()
{
    return weight;
}

Armor* Armor::clone()const
{
    return new Armor(*this);
}
