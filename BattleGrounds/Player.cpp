#include "Player.h"

void Player::checkClass(string c){
    if (c != "mage" && c != "warrior" && c!="Mage" && c!= "Warrior")
        throw c;
}
void Player::checkGender(string g){
    if (g != "male" && g != "Male" && g != "female" && g!= "Female")
        throw g;
}
void Player::checkAttack(string a){
    if (a != "a" && a != "A" && a != "p" && a != "P")
        throw a;          
}
void Player::checkBegin(string b){
    if (b!= "yes" && b!= "Yes" && b!= "Y" && b!= "y")
        throw b;
}
string Player::getName(){
    return name;
}
void Player::setName(string n){
    name = n;
}

string Player::getGender(){
    return gender;
}
void Player::setGender(string gen){
    gender = gen;
}
