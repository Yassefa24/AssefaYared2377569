/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on October 10th, 9:30 AM
   Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>    //Random number generator
#include <ctime>      //Time
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

const float ltog = 0.264179; // liters to gallons


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem Savitch 9th Ed Chap 4 Practice Problem 7"<<endl;
        cout<<"2.  Type 2  for Problem savitch 9th ed chap 4 practice problem 1"<<endl;
        cout<<"3.  Type 3  for Problem C"<<endl;
        cout<<"4.  Type 4  for Problem D"<<endl;
        cout<<"5.  Type 5  for Problem E"<<endl;
        cout<<"6.  Type 6  for Problem F"<<endl;
        cout<<"7.  Type 7  for Problem G"<<endl;
        cout<<"8.  Type 8  for Problem H"<<endl;
        cout<<"9.  Type 9  for Problem I"<<endl;
        cout<<"10. Type 10 for Problem J"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
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
                break;
            }
            case 2:{
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
                break;
            }
            case 3:{
                cout<<"Inside Problem C"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 4:{
                cout<<"Inside Problem D"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 5:{
                cout<<"Inside Problem E"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 6:{
                cout<<"Inside Problem F"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 7:{
                cout<<"Inside Problem G"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 8:{
                cout<<"Inside Problem H"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 9:{
                cout<<"Inside Problem I"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 10:{
                cout<<"Inside Problem J"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}