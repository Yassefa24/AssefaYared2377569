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
  int n;
  int i;
  int j;
    
    
    //Input values
  
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    //Process values -> Map inputs to Outputs
   
    
    
    //Display Output
    
   for(int i=0 ; i<=n ; i--)
   {
       for(j=0 ; j<=i ; j--)
       {
           if(i==j || j==(n+1)-i) cout<< n;
           
           
           
       }
       cout<<endl;
   }
   
    
   
    
    
    //Exit Program
    return 0; 
}