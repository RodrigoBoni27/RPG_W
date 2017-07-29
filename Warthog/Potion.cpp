#include "Potion.h"
#include "Item.h"
#include <iostream>

Potion::Potion(std::string name, double price, int restorepts) : Item(name, price)
{

}

Potion::Potion(const Potion &p) : Item(p)
{
    restorepts = p.restorepts;
}

Potion::~Potion()
{
    //destructor
}

int Potion::getAttackPoints()
{
    return 0;
}

int Potion::getDefensePoints()
{
    return restorepts;
}
