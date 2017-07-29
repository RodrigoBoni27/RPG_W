#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include "Inventory.h"

class Character
{
    public:
        Character(std::string);
        std::string getName();
        virtual void attack(Character*);
        void addXP(int);
        void setSpeed(int);
        void setStrength(int);
        void setDexterity(int);
        void setConstitution(int);
        int getXp();
        void addHP(int);
        void addMP(int);
        int getHP();
        Inventory myitems;
    private:
        std::string alias;
        int HP;
        int MP;
    protected:
        virtual int getDefensePoints(){};
        virtual int getAttackPoints(){};
        int XP;
        int strength;
        int speed;
        int dexterity;
        int constitution;
};

#endif // CHARACTER_H
