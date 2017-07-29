#include <iostream>
#include "Weapon.h"
#include "Item.h"

Weapon::Weapon(std::string name, double price, int attackpoints) : Item(name, price)
{
    this->attackpoints = attackpoints;
}

Weapon::Weapon(const Weapon &w) : Item(w)
{
    this->attackpoints = w.attackpoints;
}

int Weapon::getAttackPoints()
{
    return attackpoints;
}

int Weapon::getDefensePoints()
{
    return 0;
}

Weapon* Weapon::clone()const
{
    return new Weapon(*this);
}
