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
const float mfa = .40 , mfb = .25, weeknd = .15;
//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) 

{
    
    
    //Declaration of Variables
    char firstl , secondl; 
    int duratm , lengthm , hours;
    float cost1 , cost2 , cost3;
     
    //Input values
   cout<<"Enter the first two letters of the day \n";
    cin>>firstl;
    cin>>secondl;
    cout<<"Enter the time the call started in military time. \n";
    cin>>hours;
    cout<<"Enter how long the call was in minutes \n";
    cin>>lengthm;
     
    //Process values -> Map inputs to Outputs
     cost1 = (weeknd * lengthm);
     cost2 = (mfa * lengthm);
     cost3 = (mfb * lengthm);
    
    //Display Output
   if ((((firstl == 'S' || firstl == 's'))&&(secondl == 'a' || secondl == 'A'))|| 
       (((firstl == 'S' || firstl == 's'))&&(secondl == 'u' || secondl == 'U'))) 
        
        { 
        cout<< "The charges on the calls are $";
        cout<< cost1;
        cout<< " \n";
        }
     
     if  (((firstl == 'M' || firstl == 'm')&&(secondl == 'o' || secondl == 'O'))|| 
          ((firstl == 'T' || firstl == 't')&&(secondl == 'U' || secondl == 'u'))|| 
          ((firstl == 'W' || firstl == 'w')&&(secondl == 'e' || secondl == 'e'))|| 
          ((firstl == 'T' || firstl == 't')&&(secondl == 'H' || secondl == 'h'))|| 
          ((firstl == 'F' || firstl == 'f')&&(secondl == 'R' || secondl == 'r')))
         
         if (hours >=8 && hours < 18)
         
            {
             cout<< "The charges on the calls are $";
             cout<< cost2;
             cout<< " \n";
            }
         else
            {
             cout<< "The charges on the calls are $";
             cout<< cost3;
             cout<< " \n";
            }
   
    
    
    //Exit Program
    return 0;
}