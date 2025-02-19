#include <cstdlib>
#include <iostream>
using namespace std;

/*****************************************************************************************************************************
 *  Shifting Elements
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 *  This program will take an array as input, and create a new array with one extra space in the beginning for
 *  a zero value.
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 * INPUTS
 *   array               array entered
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 * OUTPUTS
 *  arrayNew         new array with a zero for it's initial value.
 ****************************************************************************************************************************/
/****************************************************************************************************************************
 *  ArrayElementShift Function
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 *  This function will accept a floating point array and size as arguments, and return a pointer to a new array
 *  that has a zero as it's initial value.
 ****************************************************************************************************************************/
float* ArrayElementShift(float* array, int size);


int main() 
{
    
    //Variable Declarations
    const int SIZE = 4;                                      //INPUT - size of initial array
    float array[SIZE] = {3.4, 5.4, 6.2, 8.7};        //INPUT - array to be altered
    float* arrayNew = nullptr;
    
    //Data Collection Function Call
   arrayNew = ArrayElementShift(array, SIZE);
   
   for (int i=0; i < (SIZE+1); i++)
       cout << arrayNew[i] << endl;
   
   //Free up space
   delete[] arrayNew;

    return 0;
}

//Array Element Shift Function Header
float* ArrayElementShift(float* array, int size)
{
    float* newArr = new float[size + 1];
    newArr[0] = 0;
    for (int i = 0; i < (size+1); i++)
        newArr[i+1] = array[i];
    return newArr;
}
