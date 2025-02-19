#ifndef PERSONDATA_H
#define PERSONDATA_H

#include<string>
using namespace std;

class PersonData
{
    private:
        string lastName;            //Last name of person
        string firstName;           //First name of person
        string address;             //Person's street address
        string city;                     //City person lives in
        string state;                  //State person lives in
        string zip;                     //zip code for the person's home
        string phone;               //phone number for the person

    public:
        //Get Function allows access to Last Name variable
        string getLastName();
        //Set Function mutates Last Name variable to set the value
        void setLastName(string lname);

        //Get Function allows access to First Name variable
        string getFirstName();
        //Set Function mutates First Name variable to set the value
        void setFirstName(string fname);

        //Get Function allows access address variable
        string getAddress();
        //Set Function mutates address variable to set the value
        void setAddress(string add);

        //Get Function allows access to city variable
        string getCity();
        //Set Function mutates city variable to set the value
        void setCity(string cty);

        //Get Function allows access to state variable
        string getState();
        //Set Function mutates state variable to set the value
        void setState(string st);

        //Get Function allows access to zip code variable
        string getZip();
        //Set Function mutates zip code variable to set the value
        void setZip(string zp);

        //Get Function allows access to phone number variable
        string getPhone();
        //Set Function mutates phone number variable to set the value
        void setPhone(string phn);

};

#endif /* PERSONDATA_H */