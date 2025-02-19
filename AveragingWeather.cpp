#include <cstdlib>
#include <iostream>
using namespace std;

/*****************************************************************************************************************************
 *  Averaging Weather
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 *  This program will take ask the user to enter rainfall, snowfall, high temp, and low temp for each month. A 
 *  weather structure will store these variables and the average temperature for each month of the year. The 
 *  final output will be the total yearly/average monthly rainfall and snowfall, as well as highest and lowest 
 *  temperatures for the year and the average of all temperatures. 
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 * INPUTS
 *  rainfall                rainfall for the month
 *  snowfall              snowfall for the month
 *  tempHigh            high temperature for the month
 *  tempLow             low temperature for the month
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 * OUTPUTS
 *  rainfallYearly               total rainfall for the year
 *  rainfallMonthly            average rainfall for each month
 *  snowfallYearly            total snowfall for the year
 *  snowfallMonthly          average snowfall for each month
 *  tempHighest               highest temperature for the year
 *  tempLowest                lowest temperature for the year
 *  tempAverage              average of all monthly temperatures
 ****************************************************************************************************************************/

int main()
{
    
    //Variable Declarations
    struct WeatherStats
    {
        double totalRainfall;
        double totalSnowfall;
        double highTemp;
        double lowTemp;
        double averageTemp;
    };
    
    const int SIZE = 12;
    WeatherStats Monthly[SIZE];
    double rainfallYearly =0;
    double rainfallMonthly;
    double snowfallYearly =0;
    double snowfallMonthly;
    double tempHighest;
    int highestNames[SIZE];
    double tempLowest;
    int lowestNames[SIZE];
    double tempTotal;
    double tempAverage;
    int count=0;
    int countLow=0;
    
    
    
    for (int i = 0; i < SIZE; i++)
    {
         cout << "Please enter rainfall for month #" << (i+1) << ": ";
         cin >> Monthly[i].totalRainfall;
         while (Monthly[i].totalRainfall < 0)
         {
                  cout << "Please enter a positive value: ";
                  cin >> Monthly[i].totalRainfall;
         }
         cout << "Please enter snowfall for month #" << (i+1) << ": ";
         cin >> Monthly[i].totalSnowfall;
         while (Monthly[i].totalSnowfall < 0)
         {
                  cout << "Please enter a positive value: ";
                  cin >> Monthly[i].totalSnowfall;
         }
         cout << "Please enter high temp for month #" << (i+1) << ": ";
         cin >> Monthly[i].highTemp;
         while (Monthly[i].highTemp < -150 || Monthly[i].highTemp > 150 )
         {
                  cout << "Please enter a value between -150 and 150: ";
                  cin >> Monthly[i].highTemp;
         }
         cout << "Please enter low temp for month #" << (i+1) << ": ";
         cin >> Monthly[i].lowTemp;
         while (Monthly[i].lowTemp < -150 || Monthly[i].lowTemp > 150 )
         {
                  cout << "Please enter a value between -150 and 150: ";
                  cin >> Monthly[i].lowTemp;
         }
         
         Monthly[i].averageTemp = (Monthly[i].highTemp + Monthly[i].lowTemp)/2.0;
         rainfallYearly += Monthly[i].totalRainfall;
         snowfallYearly += Monthly[i].totalSnowfall;
         tempTotal += (Monthly[i].highTemp + Monthly[i].lowTemp);
    }

    tempHighest = Monthly[0].highTemp;
   highestNames[0] = 0;
   tempLowest = Monthly[0].lowTemp;
   lowestNames[0] = 0;
 
   for (int i = 0; i < SIZE; i++)
   {
        if (Monthly[i].highTemp > tempHighest) 
            tempHighest = Monthly[i].highTemp;
        
        if (Monthly[i].lowTemp < tempLowest)
            tempLowest = Monthly[i].lowTemp;
    }
   
      for (int i = 0; i < SIZE; i++)
   {
        if (Monthly[i].highTemp == tempHighest) 
        {
            highestNames[count] = i+1;
            count++;
        }
    }
         for (int i = 0; i < SIZE; i++)
   {
        if (Monthly[i].lowTemp == tempLowest) 
        {
            lowestNames[countLow] = i+1;
            countLow++;
        }
    }
   
  
   
   rainfallMonthly = rainfallYearly/12.0;
   snowfallMonthly = snowfallYearly/12.0;
   tempAverage = tempTotal/24.0;
 
cout << endl << endl;   
cout << "Total rainfall for the year: " << rainfallYearly << " in" << endl;   
cout << "Average Monthly rainfall: " << rainfallMonthly << " in" << endl;
cout << "Total snowfall for the year: " << snowfallYearly << " in" << endl;
cout << "Average Monthly snowfall: " << snowfallMonthly << " in" << endl;

cout << "Lowest temperature of the year was " << tempLowest << "F. This temp occurred during the "
        "following months: " << endl;
for (int i = 0; i < countLow; i++)
    cout << lowestNames[i] << ", ";
cout << endl;
cout << "Highest temperature of the year was " << tempHighest << "F. This temp occurred during the"
        " following months: " << endl;
for (int i = 0; i < count; i++)
    cout << highestNames[i] << ", ";
cout << endl;
cout << "Average Monthly temperature: " << tempAverage << "F" << endl;
 
    
    return 0;
}
