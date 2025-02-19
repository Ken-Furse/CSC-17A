#include <cstdlib>
#include <iostream>
using namespace std;

/*****************************************************************************************************************************
 *  Averaging Scores
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 *  This program will take 5 test scores as input, and drop the highest and lowest scores received. It will then 
 * average the remaining 3 test scores for the final output.
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 * INPUTS
 *   score1               score given by judges
 *   score2               score given by judges
 *   score3               score given by judges
 *   score4               score given by judges
 *   score5               score given by judges
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 * OUTPUTS
 *  average              average of 3 scores after highest and lowest have been removed
 ****************************************************************************************************************************/
/****************************************************************************************************************************
 *  getJudgeData Function
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 *  This function will ask the user to enter a score value. this value will be checked for validity (0-10)
 *  and returned to the main function.
 ****************************************************************************************************************************/
void getJudgeData(float &s);

/****************************************************************************************************************************
 *  calcScore Function
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 *  This function will take all 5 scores, call findHighest and findLowest functions, and average the remaining
 *  3 judge scores to be output.
 ****************************************************************************************************************************/
void calcScore(float s1, float s2, float s3, float s4, float s5);

/****************************************************************************************************************************
 *  findLowest Function
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 *  This function will take all 5 scores, find the lowest value and return it.
 ****************************************************************************************************************************/
float findLowest(float s1, float s2, float s3, float s4, float s5);

/****************************************************************************************************************************
 *  findHighest Function
 * -----------------------------------------------------------------------------------------------------------------------------------------------
 *  This function will take all 5 scores, find the lowest value and return it.
 ****************************************************************************************************************************/
float findHighest(float s1, float s2, float s3, float s4, float s5);


int main() {
    
    //Variable Declarations
    float score1;         //INPUT - score given by judges
    float score2;         //INPUT - score given by judges
    float score3;         //INPUT - score given by judges
    float score4;         //INPUT - score given by judges
    float score5;         //INPUT - score given by judges
    
    //Data Collection Function Call
    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);
    
    //Calculation Function call
    calcScore(score1, score2, score3, score4, score5);
     
    return 0;
}

//getJudgeData Function Header
void getJudgeData(float &s)
{
    cout << "Please enter your score: ";
    cin >> s;
    while (s < 0 || s > 10)
    {
        cout << "please enter a score between 0 and 10: ";
        cin >> s;
    }
}

//calcScore Function Header
void calcScore(float s1, float s2, float s3, float s4, float s5)
{
    float total = 0;
    float lowest;
    float highest;
    float average;
    
    lowest = findLowest(s1,s2,s3,s4,s5);
    highest = findHighest(s1,s2,s3,s4,s5);
    total = s1 + s2 + s3 + s4 + s5 - lowest - highest;
    average = total/3;
    cout << "Average score is: " << average;
    
}

//findLowest Function Header
float findLowest(float s1, float s2, float s3, float s4, float s5)
{
    float lowest;
    if (s1 < s2 && s1< s3 && s1 < s4 && s1 < s5)
        lowest = s1;
    else if ( s2 < s1 && s2< s3 && s2 < s4 && s2 < s5 )
        lowest = s2;
    else if (s3 < s1 && s3 < s2 && s3 < s4 && s3 < s5)
        lowest = s3;
    else if (s4 < s1 && s4< s2 && s4 < s3 && s4 < s5)
        lowest = s4;
    else
        lowest =s5;
    return lowest; 
}

//findHighest Function Header
float findHighest(float s1, float s2, float s3, float s4, float s5)
{
    float highest;
    if (s1 > s2 && s1 > s3 && s1 > s4 && s1 > s5)
        highest = s1;
    else if ( s2 > s1 && s2 > s3 && s2 > s4 && s2 > s5 )
        highest = s2;
    else if (s3 > s1 && s3 > s2 && s3 > s4 && s3 > s5)
        highest = s3;
    else if (s4 > s1 && s4 > s2 && s4 > s3 && s4 > s5)
        highest = s4;
    else
        highest =s5;
    return highest; 
}