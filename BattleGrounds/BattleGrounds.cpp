#include "DarkMage.h"
#include "Warrior.h"


/*
 * 
 */
int main(int argc, char** argv) {
    string classChoice;
    Mage temp;
    string name;
    string gender;
    string begin;
    string again;
    int damage;
    int round = 1;
    int play = 0;
   
    
    
    do{
    cout << "You're awake... and just in time. Are you a Warrior or a Mage? ";
    cout << endl << "Mages deal significant damage, with no armor. Receive 3 potions.";
    cout << endl << "Warriors use armor to defend themselves. Receive 1 potion." << endl;
    cout << endl <<"So, which one are you?... ";
    cin >> classChoice;
    
    try{
        temp.checkClass(classChoice);
    }
    catch(string c){
        cout << endl << "I'm sorry but " << c << " is not one of the class choices.";
        cout << endl <<"Judging by your lack of armor it would seem you are a mage." << endl;
        classChoice = "mage";
    }
    
    
    if(classChoice == "Mage" || classChoice == "mage"){
        Mage player1;
        DarkMage enemy;
        enemy.setName("Mark Dage");
        
        cout << "I don't mean to alarm you but a dark mage is holding us here, what is your name? ";
        cin >> name;
        
        player1.setName(name);
        cout << "If you do not mind telling, what is your gender? ";
        cin >> gender;
        
        try{
            player1.checkGender(gender);
        }
        
        catch(string g){
            cout << endl << "Very interesting, I had expected you to choose male or female..";
            cout << endl <<"I am always searching to expand my knowledge.";
            cout << endl << "Thank you for teaching me about this new gender known as " << g;
        }
        player1.setGender(gender);
        
        cout << endl << "I'll count my lucky stars! " << player1.getName() << " the " << player1.getGender() 
                << " Mage is here to help. I'm afraid a Dark Mage has imprisoned us.";
        cout << endl << "Unfortunately I've been severely injured, so it is up to you to defeat our captor."<< endl;
        player1.setPotions(); 
        player1.setHealthCurrent();
        enemy.setHealthCurrent();
        
        cout << "Are you ready to begin?  ";
        cin >> begin;
        
        try{
            player1.checkBegin(begin);
        }
        catch(string b){
            cout << endl <<"You coward... I'm gonna pretend you didn't just say " << b << 
                    ". So disappointing.." << endl << "The fight begins now!" << endl;
              cout << "Are you ready? (enter yes): ";
              cin >> begin;
        }
      
        cout  << "You are currently at a full health of " << player1.getHealthCurrent() << ", and you have " 
                << player1.getPotions() << " potions, they will heal you for 25 health each.";
        
        while (player1.getHealthCurrent() > 0 && enemy.getHealthCurrent() > 0){
            string choice;
            cout << endl << endl << "Round #" << round << endl;
            
            try{
                enemy.checkFull();
            }
            catch(char f){
                if (f == 'f')
                    cout << "BEHOLD LITTLE HUMAN!!!!! Witness My Power!" << endl <<
                             "I am the great Dark Mage known as...." << endl << " .... MARK DAGE!!! Bwuahaha."<< 
                            endl << endl;           
            }
            try{
                enemy.checkMost();
            }
            catch(char m){
                if (m == 'm')
                    cout << "Pfffft.... your weak attacks are quite amusing." << endl << "They call you " << 
                            player1.getName() << " do they?" << endl << "More like " << player1.getName() << 
                            " the LAME! hahahaha!"<< endl << endl;
            }
              try{
                enemy.checkHalf();
            }
            catch(char h){
                if (h =='h'){
                    Mage Full;
                    Full.setHealthCurrent();
                    Mage Difference;
                    Difference = Full - player1;
                    cout << " You have already lost ";
                    cout << Difference;
                    cout << " health! haha" << endl;
                cout << "Tis' but a scratch! Have at thee!!.." << endl << endl;
                }
            }
            try{
                enemy.checkLow();
            }
            catch(char l){
                if (l =='l')
                    cout << "Alright I think we got off on the wrong foot here *chuckle* classic Mark amirite? " << 
                            endl << "We all know I was just fibbin'...  let's call it a day buddy." << endl << endl;
            }
            try{
                enemy.checkDesperate();
            }
            catch(char d){
                if (d=='d')
                    cout <<"Hey man I don't know how to tell you this but you're being a real jerk.."<< endl <<
                            "Just stop typing A and I promise I'll spare your eternal soul n stuff"<< endl << endl;
            }
            
            cout << player1.getName() << "'s Health: " << player1.getHealthCurrent();
            cout <<  endl << enemy.getName() <<"'s Health: " 
                        << enemy.getHealthCurrent() << endl;
            try{
                player1.checkPotions();
            }
            catch(int e){
                cout << "You have " << e << " potions left. You must attack until one of you falls.... " << endl;
            }
            if (player1.getPotions() > 0){
            cout << "will you attack or use a potion(a/p)? ";
            cin >> choice;
            try{
                player1.checkAttack(choice);
            }
            catch(string a){
                cout <<"I'm sorry but " << a << " is not one of your choices, you will now attack." <<endl;
                choice = "a";
            }
            }
            else{
                cout << "Determine your fate...(select a).";
                cin >> choice;
            
                while (choice != "a" && choice != "A"){
                cout << "Please enter a correct value( a or A):";
                cin >> choice;
                }
            }
            
            if (choice == "a" || choice == "A"){
                player1.attackRound();
                damage = enemy.attackRoundMage();
                cout << "Hit Mark for " << damage << " damage";
                round++;
            }
            else if (choice == "p" || choice == "P"){
                player1.potionRound();
                cout << player1.getPotions() << " potions left for use.." << endl;
                round++;
            
             }
        }
          if (player1.getHealthCurrent() <=0 )
            cout << endl << endl <<"You have been defeated by Mark. Better luck next time.";
        else if (enemy.getHealthCurrent() <=0){
            cout << endl << endl << "AHHHH MY LEGGGG!.... ughhhh dude, so lammmmmeee....." <<
                    endl << "You won this round, but I will have.... my... revennnge...." << endl
                    << "Congratulations " << player1.getName() << "! You have defeated Mark!";
        }
    }
            
         if(classChoice == "Warrior" || classChoice == "warrior"){
        Warrior player1;
        DarkMage enemy;
        enemy.setName("Mark Dage");
        
        cout << "It would seem we are in danger, what is your name? ";
        cin >> name;
        player1.setName(name);
        cout << "If you do not mind telling, what is your gender? ";
        cin >> gender;
        
        try{
            player1.checkGender(gender);
        }
        
        catch(string g){
            cout << endl << "Very interesting, I had expected you to choose male or female..";
            cout << endl <<"I am always searching to expand my knowledge.";
            cout << endl << "Thank you for teaching me about this new gender known as " << g;
        }
        player1.setGender(gender);
        
        cout << endl << "I'll count my lucky stars! " << player1.getName() << " the " << player1.getGender() 
                << " Mage is here to help. I'm afraid a Dark Mage has imprisoned us.";
        cout << endl << "Unfortunately I've been severely injured, so it is up to you to defeat our captor." << endl;
        
        player1.setPotions(); 
        player1.setHealthCurrent();
        enemy.setHealthCurrent();
        
        cout << "Are you ready to begin?  ";
        cin >> begin;
        
        try{
            player1.checkBegin(begin);
        }
        catch(string b){
            cout << endl <<"You coward... I'm gonna pretend you didn't just say " << b << 
                    ". So disappointing.." << endl << "The fight begins now!" << endl;
              cout << "Are you ready? (enter yes): ";
              cin >> begin;
        }
        
        cout << endl << "You are current at a full health of " << player1.getHealthCurrent() << ", and you have " 
                << player1.getPotions() << " potions, they will heal you for 25 health each.";
        
        while (player1.getHealthCurrent() > 0 && enemy.getHealthCurrent() > 0){
            string choice;
            cout << endl << endl << "Round #" << round << endl;
            try{
                enemy.checkFull();
            }
            catch(char f){
                if (f == 'f')
                    cout << "BEHOLD LITTLE HUMAN!!!!! Witness My Power!" << endl <<
                             "I am the great Dark Mage known as...." << endl << " .... MARK DAGE!!! Bwuahaha."<< 
                            endl << endl;           
            }
            try{
                enemy.checkMost();
            }
            catch(char m){
                if (m == 'm')
                    cout << "Pfffft.... your weak attacks are quite amusing." << endl << "They call you " << 
                            player1.getName() << " do they?" << endl << "More like " << player1.getName() << 
                            " the LAME! hahahaha!"<< endl << endl;
            }
            try{
                enemy.checkHalf();
            }
            catch(char h){
                if (h =='h'){
                    Warrior Full;
                    Full.setHealthCurrent();
                    Warrior Difference;
                    Difference = Full - player1;
                    cout << " You have already lost ";
                    cout << Difference;
                    cout << " health! haha" << endl;
                    cout << "Tis' but a scratch! Have at thee!!.." << endl << endl;
                }
            }
            try{
                enemy.checkLow();
            }
            catch(char l){
                if (l =='l')
                    cout << "Alright I think we got off on the wrong foot here *chuckle* classic Mark amirite? " << 
                            endl << "We all know I was just fibbin'...  let's call it a day buddy." << endl << endl;
            }
             try{
                enemy.checkDesperate();
            }
            catch(char d){
                if (d=='d')
                    cout <<"Hey man I don't know how to tell you this but you're being a real jerk.."<< endl <<
                            "Just stop typing A and I promise I'll spare your eternal soul n stuff"<< endl << endl;
            }
            
            
            
            cout << player1.getName() << "'s Health: " << player1.getHealthCurrent();
            cout <<  endl << enemy.getName() <<"'s Health: " 
                        << enemy.getHealthCurrent() << endl;
            
         try{
                player1.checkPotions();
            }
            catch(int e){
                cout << "You have " << e << " potions left. You must attack until one of you falls.... " << endl;
            }
            if (player1.getPotions() > 0){
            cout << "will you attack or use a potion(a/p)? ";
            cin >> choice;
            try{
                player1.checkAttack(choice);
            }
            catch(string a){
                cout <<"I'm sorry but " << a << " is not one of your choices, you will now attack." <<endl;
                choice = "a";
            }
            }
         else
            {
                cout << "Determine your fate...(select a).";
                cin >> choice;
            
                while (choice != "a" && choice != "A"){
                cout << "Please enter a correct value( a or A):";
                cin >> choice;
                }
            }
            
            if (choice == "a" || choice == "A"){
                player1.attackRound();
                damage = enemy.attackRoundWarrior();
                round++;
                cout << "Hit Mark for " << damage << " damage.";
            }
            else if (choice == "p" || choice == "P"){
                player1.potionRound();
                cout << player1.getPotions() << " potions left for use.." << endl;
                round++;
            }
        }
          if (player1.getHealthCurrent() <=0 )
            cout << endl << endl <<"You have been defeated by Mark. Better luck next time.";
        else if (enemy.getHealthCurrent() <=0){
            cout << endl << endl << "AHHHH MY LEGGGG!.... ughhhh dude, so lammmmmeee....." <<
                    endl << "You won this round, but I will have.... my... revennngee....." << endl
                    << "Congratulations " << player1.getName() << "! You have defeated Mark!";
        }
     }
    cout << endl << endl << "Would you like to play again? (say no to exit)";
    cin >> again;
    cout << endl << endl;
    play++;
    }while(again != "no" && again != "No" && again != "NO");
    
    cout << endl << endl << "Thank you for playing my game. You played ";
    
    int binary=0;
    fstream file;
    file.open("plays.dat", ios::out | ios::binary);
    file.write(reinterpret_cast<char *>(&play), sizeof(play));
    file.close();
    file.open("plays.dat", ios::out | ios::binary);
    file.read(reinterpret_cast<char *>(&binary), sizeof(binary));
    file.close();
    
    cout << binary << " times.";
    
    
            
    return 0;
}

 

