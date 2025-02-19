#include "Mage.h"

int Mage::getPotions(){
   
    return potionsCurrent;
}
void Mage::setPotions(){
    potionsCurrent = potionsMax;
}

void Mage::checkPotions(){
     if (potionsCurrent <= 0)
        throw 0;
}
int Mage::getHealthCurrent(){
    return healthCurrent;
}
void Mage::setHealthCurrent(){
    healthCurrent = healthMax;
}