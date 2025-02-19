#include "DarkMage.h"

void DarkMage::checkFull(){
    if (healthCurrent == 100)
        throw 'f';
}
void DarkMage::checkMost(){
    if (healthCurrent < 100 && healthCurrent >= 75)
        throw 'm';
}
void DarkMage::checkHalf(){
    if (healthCurrent < 75 && healthCurrent >= 50)
        throw 'h';
}
void DarkMage::checkLow(){
    if (healthCurrent < 50 && healthCurrent >= 15)
        throw 'l';
}
void DarkMage::checkDesperate(){
    if (healthCurrent < 15)
        throw 'd';
}

void DarkMage::setHealthCurrent(){
    healthCurrent = healthMax;
}
int DarkMage::getHealthCurrent(){
    return healthCurrent;
}

int DarkMage::attackRoundMage(){
         damageTaken = 12 - defense;
         healthCurrent -= damageTaken;
         return damageTaken;
         
}
int DarkMage::attackRoundWarrior(){
    damageTaken = 10 - defense;
    healthCurrent -= damageTaken;
    return damageTaken;
}



        