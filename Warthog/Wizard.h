#ifndef WIZARD_H
#define WIZARD_H
#include "Character.h"
#include <iostream>

class Wizard : public Character
{
    public:
        Wizard(std::string,int);
        int getAttackPoints();
        int getDefensePoints();
        void addWisdom(int);
    protected:
        int Wisdom;
};

#endif // WIZARD_H

