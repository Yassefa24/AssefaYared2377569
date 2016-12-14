/* 
   File:  main
   Author: Yared Assefa
   Created on October  , 2016, pm
   Purpose: 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float ltog = 0.264179; // liters to gallons
//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) 

{
    
    
    //Declaration of Variables
    float gas;          // gas in gallons
    float distance;     // distance in miles
    float mpg;          // miles per gallon
    float gallons;
    char redo;
     
    //Input values
    do
    {
        cout<< "enter amount of gas in liter you put into your car \n";
        cin>> gas;
        cout<< "liters \n";
        
        cout<< "how many miles did you drive? \n";
        cin>> distance;
        cout<< "miles \n";
        
        
     
    //Process values -> Map inputs to Outputs
     
    gallons = gas * ltog;
    mpg = distance / gallons;
    
    
    cout.setf(ios::fixed);
           cout.setf(ios::showpoint);
           cout.precision(2);
           
    
    //Display Output
    cout<< "the gas milage driven is \n";
        cout<< mpg;
        cout<< "\n";
        
        cout<< "Do you want to run this again? (1 for yes, 0 for no) ";
        cin>> redo;
        cout<< "\n";
    
    
    }
     while(redo == '1');
    //Exit Program
    return 0;
}