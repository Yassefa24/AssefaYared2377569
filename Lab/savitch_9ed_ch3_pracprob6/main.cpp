/* 
   File:  main
   Author: Yared Assefa
   Created on October  , 2016, pm
   Purpose: 
 */

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

const float pie = 3.14, y = 62.4 ;

//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) 

{
    
    //Declaration of Variables
    float weight , buoy , rad ;
     
    //Input values
    cout<< "enter weight in lbs \n";
    cin>> weight;
    cout<< "enter radius in ft \n";
    cin>> rad;
   
     
    //Process values -> Map inputs to Outputs
    buoy = y * ((4 * pie * (rad * rad * rad)) / 3);
    
    //Display Output
    if (buoy >= weight)
    {
        cout<< "the object will float\n ";
    }
    
    else;
    {
        cout<< "the object will sink\n ";
    }
    
    
    //Exit Program
    return 0;
}