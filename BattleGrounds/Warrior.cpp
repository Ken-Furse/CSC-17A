#include "Warrior.h"

int Warrior::getPotions(){
    return potionsCurrent;
}
void Warrior::setPotions(){
    potionsCurrent = potionsMax;
}

void Warrior::checkPotions(){
     if (potionsCurrent <= 0)
        throw 0;
}

int Warrior::getHealthCurrent(){
    return healthCurrent;
}
void Warrior::setHealthCurrent(){
    healthCurrent = healthMax;
}