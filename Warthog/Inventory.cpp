#include "Inventory.h"
#include "Item.h"
#include <iostream>
#include <cstdlib>

Inventory::Inventory()
{
    this->numberOfItems = 0;
    this->spaces = 50;
    this->gold = 0;
    this->WeaponAttack = 1;
    this->ArmorDefense = 1;
    this->items.first = new Item*[spaces];
    this->WeaponsEquipped = 0;
    this->ArmorEquipped = 0;
}

Inventory::Inventory(const Inventory &inv)
{
    this->numberOfItems = inv.numberOfItems;
    this->spaces = inv.spaces;
    this->gold = inv.gold;
    this->items.first = new Item*[this->spaces];

    for(int i=0; i<this->numberOfItems; i++)
    {
        this->items.first[i] = inv.items.first[i]->clone();
    }
}

Inventory::~Inventory()
{
    for(int i=0; i<this->numberOfItems; i++)
    {
        delete this->items.first[i];
    }
    delete[] this->items.first;
}

int Inventory::getNumberOfItems()
{
    return numberOfItems;
}

double Inventory::getTotalGold()
{
    return gold;
}

int Inventory::getAvailableSpace()
{
    return spaces;
}

void Inventory::spendGold(double gold)
{
    this->gold -= gold;
}

void Inventory::earnGold(double gold)
{
    this->gold += gold;
}

void Inventory::setSpaces(int spaces)
{
    this->spaces = spaces;
}

Item* Inventory::searchItem(std::string name)
{
    for(int i=0; i<numberOfItems; i++)
    {
        if(this->items.first[i]->getName() == name){return items.first[i];}
    }
    std::cout<<"Item nao encontrado"<<std::endl;
}

Item* Inventory::searchItem(int i)
{
    return items.first[i];
}

void Inventory::insertItem(const Item &i)
{
    this->items.first[this->numberOfItems++] = i.clone();
    this->spaces--;
}

void Inventory::removeItem(std::string name)
{
    for(int i=0; i<numberOfItems; i++)
    {
        if(this->items.first[i]->getName() == name)
        {
            delete this->items.first[i];
        }
    }
    numberOfItems--;
    spaces++;
}

void Inventory::removeItem(int i)
{
    delete this->items.first[i];
    numberOfItems--;
    spaces++;
}

int Inventory::getWeaponAttack()
{
    return WeaponAttack;
}

int Inventory::getArmorDefense()
{
    return ArmorDefense;
}

void Inventory::equipWeapon(int i)
{
    if(WeaponsEquipped>=2)
    {
        std::cout<<"Voce ja tem 2 armas equipadas!!"<<std::endl;
    }
    else
    {
        this->WeaponAttack += searchItem(i)->getAttackPoints();
        this->WeaponsEquipped ++;
    }
}

void Inventory::equipWeapon(Item &i)
{
    if(WeaponsEquipped>=2)
    {
        std::cout<<"Voce ja tem 2 armas equipadas!!"<<std::endl;
    }
    else
    {
        this->WeaponAttack += searchItem(i.getName())->getAttackPoints();
        this->WeaponsEquipped ++;
    }
}

void Inventory::equipArmor(int i)
{
    if(ArmorEquipped>=1)
    {
        std::cout<<"Voce ja tem uma armadura equipada!!"<<std::endl;
    }
    else
    {
        this->ArmorDefense += searchItem(i)->getDefensePoints();
        this->ArmorEquipped ++;
    }
}

void Inventory::equipArmor(Item &i)
{
    if(ArmorEquipped>=1)
    {
        std::cout<<"Voce ja tem uma armadura equipada!!"<<std::endl;
    }
    else
    {
        this->ArmorDefense += searchItem(i.getName())->getDefensePoints();
        this->ArmorEquipped ++;
    }
}


