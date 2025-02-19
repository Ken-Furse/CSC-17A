#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include<fstream>
#include <cstdlib>
#include <string>
using namespace std;

class Player{
private:
    string name;
    string gender;
  
public:
    void checkClass(string c);
    void checkGender(string g);
    void checkAttack(string a);
    void checkBegin(string b);
    
    string getName();
    void setName(string n);
    
    string getGender();
    void setGender(string gen);
    
    virtual void attackRound() = 0;
    virtual void potionRound() = 0;
  
};
#endif /* PLAYER_H */

