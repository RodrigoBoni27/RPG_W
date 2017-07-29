#ifndef HEALTHPOTION_H
#define HEALTHPOTION_H
#include "Item.h"
#include "Potion.h"
#include <iostream>

class HealthPotion: public Potion
{
    public:
        HealthPotion(std::string, double, int);
        virtual HealthPotion* clone()const;
        ~HealthPotion();
        void use();
};

#endif // HEALTHPOTION_H
