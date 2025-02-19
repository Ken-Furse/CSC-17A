#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H

#include "personData.h"

class CustomerData : public PersonData
{
    private:
        long customerNumber;        //Number for customer account
        bool mailingList;                  //Whether or not customer is on mailing list
        
        public:
         //Get Function allows access to customer number variable
         long getCustomerNumber();
         //Set Function mutates customer number variable to set the value
         void setCustomerNumber(long num);
         
         //Get Function allows access to mailing list variable
         bool getMailingList();
         //Set Function mutates mailing list variable to set the value
         void setMailingList(bool mail);            
};
        
#endif /* CUSTOMERDATA_H */

