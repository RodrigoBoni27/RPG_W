#ifndef MANAPOTION_H
#define MANAPOTION_H
#include "Item.h"
#include "Potion.h"
#include <iostream>

class ManaPotion: public Potion
{
    public:
        ManaPotion(std::string, double, int);
        virtual ManaPotion* clone()const;
        ~ManaPotion();
        void use();
};

#endif // MANAPOTION_H
