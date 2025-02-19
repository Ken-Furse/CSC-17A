#ifndef WARRIOR_H
#define WARRIOR_H
#include "Player.h"
#include "Armor.h"

class Warrior : public Player{
private:
    Armor<int> equipped;
    int intellect = 0;
    int strength = 10;
    int defense = (10 + equipped.def);
    int potionsMax = 1;
    int potionsCurrent;
    
public:
     int healthMax = 120;
    int healthCurrent;
    int damageDone;
    int damageTaken;
    
    int getPotions();
    void setPotions();
    void checkPotions();
    
    int getHealthCurrent();
    void setHealthCurrent();
    
    Warrior operator-(const Warrior& full){
        Warrior temp;
        temp.healthCurrent = this->healthCurrent - full.healthCurrent;
        return temp;
    }
    
    friend ostream& operator<<(ostream& os, const Warrior& dif){
        os << dif.healthCurrent;
        return os;
    }
    
    virtual void attackRound() {
        damageTaken = 18 - defense;
        healthCurrent -= damageTaken;
    }
    virtual void potionRound(){
    if((healthCurrent + 25) <= healthMax){
        healthCurrent += 25;
        potionsCurrent -= 1;
        damageTaken = 18 - defense;
        healthCurrent -= damageTaken;
        cout << "You have " << potionsCurrent << " left my friend..";
    }
    else{
        healthCurrent = healthMax;
        potionsCurrent -= 1;
        damageTaken = 18 - defense;
        healthCurrent -= damageTaken;
    }
    }
                    
};
#endif /* WARRIOR_H */

