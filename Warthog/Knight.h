#ifndef KNIGHT_H
#define KNIGHT_H
#include "Character.h"
#include <iostream>

class Knight : public Character
{
    public:
        Knight(std::string,int);
        int getAttackPoints();
        int getDefensePoints();
        void addPower(int);
        std::string getName();
    protected:
        int power;
};

#endif // KNIGHT_H
