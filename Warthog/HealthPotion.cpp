#include "HealthPotion.h"
#include "Item.h"
#include "Potion.h"
#include <iostream>

HealthPotion::HealthPotion(std::string name, double price, int restorepts) : Potion(name, price, restorepts)
{
    this->restorepts = restorepts;
}

HealthPotion::~HealthPotion()
{
    // destructor
}

void HealthPotion::use()
{
    //use function
}

HealthPotion* HealthPotion::clone()const
{
    return new HealthPotion(*this);
}
