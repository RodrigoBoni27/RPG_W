#ifndef ITEM_H
#define ITEM_H
#include <iostream>

class Item
{
    public:
        Item(std::string, double);
        Item(const Item &i);
        virtual Item* clone()const=0;
        std::string getName();
        double getPrice();
        virtual void use(){};
        virtual int getDefensePoints()=0;
        virtual int getAttackPoints()=0;

    protected:
        std::string name;
        double price;
};

#endif // ITEM_H
