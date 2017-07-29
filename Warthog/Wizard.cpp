#include "Wizard.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Inventory.h"
#include "Character.h"
#include "Knight.h"
#include "Thief.h"
#include "Team.h"

Wizard::Wizard(std::string alias,int Wisdom) : Character(alias)
{
    this->Wisdom = Wisdom;
}

void Wizard::addWisdom(int Wisdom)
{
    this->Wisdom += Wisdom;
}

int Wizard::getAttackPoints()
{
    int attack;
    attack=((( (0.5*strength) + (0.3*dexterity) +(0.2*speed) + (myitems.getWeaponAttack()) )*XP)/3);
    if(attack<=1){attack=1;};
    return attack;
}

int Wizard::getDefensePoints()
{
    int defense;
    defense=((( (constitution*0.6) + (dexterity*0.1) + (speed*0.3) + (myitems.getArmorDefense()) )*XP)/2)+(Wisdom/2);
    if(defense<1){defense=1;}
    return defense;
}

