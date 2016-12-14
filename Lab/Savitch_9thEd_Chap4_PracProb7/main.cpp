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
float gravity = 6.673e-8f;      //gravity
float kgtog   = 1000;           // km to grams
float sgtog   = 14593.9;        // slugs to grams
float kmtom   = 1000;           // km to meters 
float mtocm   = 100;            // meters to cm
float dyntolb = 2.24809e-6f;    // dynes to pounds
float sgtolb  = 32.174f;        // slugs to pounds

//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) 

{
    
    
    //Declaration of Variables
    float mEarth = 5.972e24; // earth mass in kg
    float mYar  = 6.0f;     // my mass
    float rEarth = 6371.0f;  // earth radius in km
    float weight;
     
    //Input values
    mEarth*=kgtog;
    mYar*=sgtog;
    rEarth*=kmtom*mtocm;
     
    //Process values -> Map inputs to Outputs
    weight = gravity * mYar * mEarth / rEarth / rEarth;
    weight*=dyntolb;
    
    //Display Output
    cout<< "According to the gravity Yared weighs = ";
    cout<< weight;
    cout<< "lbs \n";
    cout<< "just to check yared weighs = ";
    cout<< 6 * sgtog;
    cout<< "lbs \n";
   
    
    
    //Exit Program
    return 0;
}