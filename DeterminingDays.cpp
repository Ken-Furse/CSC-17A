#include <cstdlib>
#include <iostream>
using namespace std;

/*****************************************************************************************************************************
 *  Determining Days
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 *  This program will take input for month and year, and use these values to calculate the number of days in the
 *  month. This program will not allow months entered outside of 1-12.
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 * INPUTS
 *  month               month to be checked
 *  year                  year of month to be checked
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 * OUTPUTS
 *  days                number of days in the month requested
 ****************************************************************************************************************************/
int main() {
    
    //Variable Declarations
    int month;         //INPUT - month to be checked
    int year;            //INPUT - year of month to be checked
    int days;           //OUTPUT - number of days in the month
    
    //Data Collection
    cout << "Enter a month: ";
    cin >> month;
    if (month <13 && month >0)
    {
        cout << "Enter a year: ";
        cin >> year;
        
        //Output Results
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            cout << "31 days";
        if(month == 4 || month == 6 || month == 9 || month == 11)
            cout << "30 days";
        if (month == 2 && (year % 100) == 0)
        {
            if ((year % 400) == 0)
                cout << "29 days";
            else 
                cout << "28 days";
        }
        else if (month == 2 && (year % 100) != 0)
        {
            if ((year % 4) == 0)
                cout << "29 days";
            else 
                cout << "28 days";
        }
    }
    return 0;
}
