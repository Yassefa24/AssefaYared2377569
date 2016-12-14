/* 
   File:  main
   Author: Yared Assefa
   Created on October  , 2016, pm
   Purpose: 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char first;
    char second;
    char third;
    char forth;
    int firstC;
    int secondC;
    int thirdC;
    int forthC;
    string star1;
    string star2;
    string star3;
    string star4;
     
    //Input values
   
    cout<<"Enter the first number"<<endl;
    cin>>first;
    cout<<"Enter the second number"<<endl;
    cin>>second;
    cout<<"Enter the third number"<<endl;
    cin>>third;
    cout<<"Enter the forth number"<<endl;
    cin>>forth;
     
    //Process values -> Map inputs to Outputs
   
    firstC   =   first -  '0';
    secondC  =   second - '0';
    thirdC   =   third  - '0';
    forthC   =   forth  - '0';
    
    
    //Display Output
  
    if(firstC >0 && firstC <=9)
    {
        for(int i=0; i<firstC; i++)
        {
            star1 +='*';
        }
        cout<<firstC<<star1<<endl;
    }
        else
        {
        cout<<first<<"?"<<(int)first<<endl;
        }
    
    if(secondC >0 && secondC <=9)
    {
        for(int i=0; i<secondC; i++)
        {
            star2 +='*';
        }
        cout<<secondC<<star2<<endl;
    }
        else
        {
        cout<<second<<"?"<<(int)second<<endl;
        }
    
    if(thirdC >0 && thirdC <=9)
    {
        for(int i=0; i<thirdC; i++)
        {
            star3 +='*';
        }
        cout<<thirdC<<star3<<endl;
    }
        else
        {
        cout<<third<<"?"<<(int)third<<endl;
        }
    
    if(forthC >0 && forthC <=9)
    {
        for(int i=0; i<forthC; i++)
        {
            star4+='*';
        }
        cout<<forthC<<star4<<endl;
    }
        else
        {
        cout<<forth<<"?"<<(int)forth<<endl;
        }
    
    //Exit Program
    return 0; 
}