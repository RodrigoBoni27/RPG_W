#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
#include "Item.h"

class Inventory
{
    public:
        Inventory();
        Inventory(const Inventory &inv);
        ~Inventory();
        int getNumberOfItems();
        double getTotalGold();
        int getAvailableSpace();
        void spendGold(double);
        void earnGold(double);
        void setSpaces(int);
        Item* searchItem(std::string);
        Item* searchItem(int);
        void insertItem(const Item&);
        void removeItem(std::string);
        void removeItem(int);
        void equipWeapon(int);
        void equipWeapon(Item&);
        void equipArmor(int);
        void equipArmor(Item&);
        int getWeaponAttack();
        int getArmorDefense();

    private:
        int WeaponsEquipped; // Numero de armas equipadas //
        int ArmorEquipped;
        int WeaponAttack;
        int ArmorDefense;
        int numberOfItems;
        int spaces;
        double gold;
        std::pair<Item**, bool> items;

};

#endif // INVENTORY_H
