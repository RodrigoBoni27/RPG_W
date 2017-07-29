#include "Character.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Inventory.h"
#include <sstream>

Character::Character(std::string alias)
{
    this->alias = alias;
    this->HP = 100;
    this->MP = 50;
    this->XP = 1;
    this->strength = 1;
    this->speed = 1;
    this->constitution = 1;
    this->dexterity = 1;

}

std::string Character::getName()
{
    return alias;
}

void Character::attack(Character *Ch2)
{
    int Al; //Aleatório
    int damage;

    srand(time(0));

    Al=(rand()%1000)+1;

    if(Al>=100/Ch2->getXp())
    {
        //Chance de acertar o ataque

        damage = this->getAttackPoints()- Ch2->getDefensePoints() + ((rand()%11)-5);

        if(damage<=1){damage=1;}

        std::cout<< this->getName()<<" Atacou "<< Ch2->getName()<< std::endl<< "\n";

        std::cout<< Ch2->getName()<<" Perdeu "<<damage<<" Pontos de vida"<< std::endl<<"\n";

        Ch2->addHP(-damage);

    }

    else{ std::cout<<"ERROU!!!"<<std::endl<<"\n";} //Caso contrário o personagem erra
}

void Character::addXP(int XP)
{
    this->XP += XP;
}

void Character::addHP(int HP)
{
    this->HP += HP;
}

void Character::addMP(int MP)
{
    this->MP += MP;
}

int Character::getXp()
{
    return XP;
}

void Character::setSpeed(int speed)
{
    this->speed = speed;
}

void Character::setStrength(int strength)
{
    if(strength>(100-(this->speed)))
    {
        //Verifica se não passou do limite de 100 pontos
        std::cout<< this->getName()<<" nao tem pontos suficientes"<<std::endl;
        strength=0;
    }

    else
    {
        this->strength = strength;
    }
}

void Character::setDexterity(int dexterity)
{
    if(dexterity>(100-(this->speed)-(this->strength)))
    {
        //Verifica se não passou do limite de 100 pontos
        std::cout<< this->getName()<<" Nao tem pontos suficientes"<<std::endl;
        dexterity=0;
    }

    else
    {
        this->dexterity = dexterity;
    }
}

void Character::setConstitution(int constitution)
{
    if(constitution>(100-(this->speed)-(this->strength)-(this->dexterity)))
    {
        //Verifica se não passou do limite de 100 pontos
        std::cout<< this->getName()<<" Nao tem pontos suficientes"<<std::endl;
        this->constitution = 0;
    }

    else
    {
        this->constitution = constitution;
    }
}

int Character::getHP()
{
    return HP;
}

