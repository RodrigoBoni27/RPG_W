#ifndef THIEF_H
#define THIEF_H
#include "Character.h"
#include <iostream>

class Thief : public Character
{
    public:
        Thief(std::string,int);
        int getAttackPoints();
        int getDefensePoints();
        void addStealth(int);

    protected:
        int Stealth;

};
#endif // THIEF_H
