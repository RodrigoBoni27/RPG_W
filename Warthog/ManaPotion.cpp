#include "ManaPotion.h"
#include "Item.h"
#include "Potion.h"
#include <iostream>

ManaPotion::ManaPotion(std::string name, double price, int restorepts) : Potion(name, price, restorepts)
{
    this->restorepts = restorepts;
}

ManaPotion::~ManaPotion()
{
    // destructor
}

void ManaPotion::use()
{
    //use function
}

ManaPotion* ManaPotion::clone()const
{
    return new ManaPotion(*this);
}
