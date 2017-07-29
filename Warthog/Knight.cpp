#include "Knight.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include "Inventory.h"
#include "Character.h"
#include "Knight.h"
#include "Wizard.h"
#include "Team.h"

Knight::Knight(std::string alias,int power) : Character(alias)
{
    this->power = power;
}

int Knight::getAttackPoints()
{
    int attack;
    attack = ((( (0.5*strength) + (0.3*dexterity) +(0.2*speed) + (myitems.getWeaponAttack()) )*XP)/3);
    if(attack<=1){attack=1;};
    return attack;
}

int Knight::getDefensePoints()
{
    int defense;

    defense=((( (constitution*0.6) + (dexterity*0.1) + (speed*0.3) + (myitems.getArmorDefense()) )*XP)/2)+power;

    if(defense<1){defense=1;}

    return defense;

}

void Knight::addPower(int power)
{
    this->power += power;
}
