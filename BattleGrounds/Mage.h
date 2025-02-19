#ifndef MAGE_H
#define MAGE_H
#include "Player.h"

class Mage : public Player{
private:
    int intellect = 12;
    int strength = 0;
    int defense = 8;
    int potionsMax = 3;
    int potionsCurrent;
    
public:
    int healthMax = 100;
    int healthCurrent;
    int damageTaken;
    
    int getPotions();
    void setPotions();
    void checkPotions();
    
    int getHealthCurrent();
    void setHealthCurrent();
    
    Mage operator-(const Mage& full){
        Mage temp;
        temp.healthCurrent = this->healthCurrent - full.healthCurrent;
        return temp;
    }
    
    friend ostream& operator<<(ostream& os, const Mage& dif){
        os << dif.healthCurrent;
        return os;
    }
    
    virtual void attackRound() {
        damageTaken = 15 - defense;
        healthCurrent -= damageTaken;
    }
    virtual void potionRound(){
        
    if((healthCurrent + 25) <= healthMax){
        healthCurrent += 25;
        potionsCurrent -= 1;
        damageTaken = 15 - defense;
        healthCurrent -= damageTaken;
        cout << "You have " << potionsCurrent << " left my friend..";
    }
    else{
        healthCurrent = healthMax;
        potionsCurrent -= 1;
        damageTaken = 15 - defense;
        healthCurrent -= damageTaken;
        cout << "You have " << potionsCurrent << " left my friend..";
    }
  }                  
};



#endif /* MAGE_H */

