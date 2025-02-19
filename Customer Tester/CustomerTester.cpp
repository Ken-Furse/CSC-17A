#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "CustomerData.h"

/*****************************************************************************************************************************
 * Customer Tester
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 * This program will use the concept of inheritance to gather data from two class types "PersonData"
 * and it's child "CustomerData". Data will be stored for first,last name, city, street address, city, state, and zip.
 * The CustomerData class will also store customer number and mailing list choice.
 ****************************************************************************************************************************/

int main(int argc, char** argv)
{
    //Variable Declaration
    CustomerData customer;
    
    //Setting values
    customer.setLastName("Wayne");
    customer.setFirstName("Bruce");
    customer.setAddress("222 Poo Avenue");
    customer.setCity("Gotham");
    customer.setState("New York");
    customer.setZip("80085");
    customer.setCustomerNumber(25);
    customer.setMailingList(true);
    
    //Output Data
    cout << "\t Customer Information:" << endl;
    cout << "First Name: " << customer.getFirstName() << "\t" << "Last Name: " << customer.getLastName()
            << endl;
    cout << "Address: " << customer.getAddress() << " " << customer.getCity() << ", " << customer.getState() 
            << ". " << customer.getZip() << endl;
   cout << "Customer Number : " << customer.getCustomerNumber() << "\t Mailing List: " <<
           (customer.getMailingList() ? "Yes" : "No") << endl;
    
    return 0;
}

