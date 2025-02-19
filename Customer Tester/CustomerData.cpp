#include "CustomerData.h"

long CustomerData::getCustomerNumber()
{
    return customerNumber;
}
void CustomerData::setCustomerNumber(long num)
{
    customerNumber = num;
}

bool CustomerData::getMailingList()
{
    return mailingList;
}
void CustomerData::setMailingList(bool mail)
{
    mailingList = mail;
}