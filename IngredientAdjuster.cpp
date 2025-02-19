#include <cstdlib>
#include <iostream>
using namespace std;

/*****************************************************************************************************************************
 *  Adjusting Ingredients 
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 *  This program will accept input as a number of cookies. This number will then be used with an original
 *  recipe to calculate new values for butter, sugar, and flour.
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 * INPUTS
 *  cookies             amount of cookies to be baked, this will be used to calculate the new recipe
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 * OUTPUTS
 *  sugar                new calculated number of cups of sugar for the recipe
 *  butter                new calculated number of cups of butter for the recipe
 *  flour                  new calculated number of cups of flour for the recipe
 ****************************************************************************************************************************/
int main() {
    
    /**************************************************************************************************************************
     * CONSTANTS
     * --------------------------------------------------------------------------------------------------------------------------------------------
     * COOKIES         Number of cookies made by original recipe
     * SUGAR             Number of cups of sugar needed for original recipe
     * BUTTER           Number of cups of butter needed for original recipe
     * FLOUR             Number of cups of flour needed for original recipe
     *************************************************************************************************************************/

    const float COOKIES = 48;
    const float SUGAR = 1.5;
    const float BUTTER = 1;
    const float FLOUR = 2.75;
    
    //Variable Declarations
    float cookies;         //INPUT - number of cookies to be made
    float sugar;            //OUTPUT - cups of sugar needed
    float butter;           //OUTPUT - cups of butter needed
    float flour;             //OUTPUT - cups of flour needed
    
    //Data Collection
    cout << "Please enter the amount of cookies you wish to bake: ";
    cin >> cookies;
    
    //Output Results
    cout << "To make " << cookies << " cookies you will need:" << endl;
    cout << "Sugar: " << (cookies/COOKIES) * SUGAR << " cups" << endl;
    cout << "Butter: " << (cookies/COOKIES) * BUTTER << " cups" << endl;
    cout << "Flour: " << (cookies/COOKIES) * FLOUR << " cups" << endl;
    cout << endl;
    return 0;
}

