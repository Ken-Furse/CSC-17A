#ifndef DARKMAGE_H
#define DARKMAGE_H
#include "Mage.h"

class DarkMage : public Mage{
private:
       int healthMax = 100;
       int healthCurrent; 
       int intellect = 15;
       int strength = 0;
       int defense = 7;
      
public:
    
    void checkFull();
    void checkMost();
    void checkHalf();
    void checkLow();
    void checkDesperate();
    
    int getHealthCurrent();
    void setHealthCurrent();
    int attackRoundMage();
    int attackRoundWarrior();
    


};


#endif /* DARKMAGE_H */

