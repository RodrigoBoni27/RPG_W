#include "Item.h"
#include <iostream>

Item::Item(std::string name, double price)
{
    this->name = name;
    this->price = price;
}

Item::Item(const Item &i)
{
    this->name = i.name;
    this->price = i.price;
}

std::string Item::getName()
{
    return name;
}

double Item::getPrice()
{
    return price;
}
