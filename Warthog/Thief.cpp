#include "Thief.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include "Inventory.h"
#include "Character.h"
#include "Knight.h"
#include "Wizard.h"
#include "Team.h"

Thief::Thief(std::string alias,int Stealth) : Character(alias)
{
    this->Stealth=Stealth;
}

void Thief::addStealth(int Stealth)
{
    this->Stealth += Stealth;
}

int Thief::getAttackPoints()
{
    int attack;
    attack = ((( (0.5*strength) + (0.3*dexterity) +(0.2*speed) + (myitems.getWeaponAttack()) )*XP)/3) + Stealth;
    if(attack<=1){attack=1;};
    return attack;

}

int Thief::getDefensePoints()
{
    int defense;
    defense = ((( (constitution*0.6) + (dexterity*0.1) + (speed*0.3) + (myitems.getArmorDefense()) )*XP)/2);
    if(defense<1){defense=1;}
    return defense;
}

