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

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int x, a, b, c, d, e, f, g;
     
    //Input values
    cout<< "Enter any number. ";
    cin>> x;
    cout<< "\n";
    
    
    //Process values -> Map inputs to Outputs
    a = x - 1;
    b = x - 2;
    c = x - 3;
    d = x - 4;
    e = x - 5;
    f = x - 6;
    g = x - 7;
    
    //Display Output
  for (n=1, n<=x, n--)
    {
       cout<< "*****************\n";
       cout<< "x    x \n";
       cout<< " a  a  \n";
       cout<< "  bb   \n";
       cout<< " c  c  \n";
       cout<< "d    d \n";
       
       if else(x>5)
       cout<< " x        x    \n";
       cout<< "  a      a     \n";
       cout<< "   b    b      \n";
       cout<< "    c  c       \n";
       cout<< "     dd        \n";
       cout<< "   e    e      \n";
       cout<< "  f      f     \n";
       cout<< " g        g    \n";

    }
   

    
    //Exit Program
    return 0; 
}