/* Feito por Rodrigo de Abreu Boni*/
/* EESC-USP */
/// Trabalho do Warthog ///

#include <iostream>
#include "Weapon.h"
#include "Item.h"
#include "Armor.h"
#include "Potion.h"
#include "HealthPotion.h"
#include "ManaPotion.h"
#include "Inventory.h"
#include "Character.h"
#include "Knight.h"
#include "Thief.h"
#include "Wizard.h"
#include "Team.h"

int main()
{
    ///Testes///

    HealthPotion LHP("Large Health Potion", 150, 300);
    ManaPotion SMP("Small Mana Potion", 125, 100);
    Armor Armadura1("Knight Armor", 4000, 19, 20);
    Armor Armadura2("Thief Armor", 3000, 15, 10);
    Weapon Espada1("Longsword", 1500, 10);
    Weapon Espada2("Longclaw", 2000, 15);
    Weapon Machado1("Hammer", 3000, 20);

    Knight Cav1("Rodrigo", 5);
    Thief Lad1("Leonardo", 5);
    Cav1.setStrength(50);
    Cav1.setDexterity(20);
    Cav1.setSpeed(10);
    std::cout<<"Ataque do Rodrigo: "<<Cav1.getAttackPoints()<<std::endl;
    std::cout<<"Defesa do Rodrigo: "<<Cav1.getDefensePoints()<<std::endl<<std::endl;

    Cav1.myitems.insertItem(Espada1);
    Cav1.myitems.insertItem(Espada2);
    Cav1.myitems.insertItem(Machado1);
    Cav1.myitems.insertItem(Armadura1);

    Cav1.myitems.equipWeapon(Machado1);
    Cav1.myitems.equipWeapon(Espada2);
    Cav1.myitems.equipArmor(Armadura1);

    std::cout<<"Ataque do Rodrigo: "<<Cav1.getAttackPoints()<<std::endl;
    std::cout<<"Defesa do Rodrigo: "<<Cav1.getDefensePoints()<<std::endl<<std::endl;

    return 0;
}
