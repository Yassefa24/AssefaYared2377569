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
  string date;
  string First;
  string Last;
  string acct;
  unsigned short amount;
  unsigned char n1000s, n100s, n10s, n1s;
     
    //Input values
    cout<< "Enter the month in MM/DD/YY format. ";
    cin>> date;
    cout<< "Enter the amount the person receiving the money rounded with no decimals. $";
    cin>> amount; 
    cout<< "Enter the first name of person receiving the check. ";
    cin>> First;
    cout<< "Enter the last name of person receiving the check. ";
    cin>> Last;    
    cout<< "Enter the account holder with no spaces. ";    
    cin>> acct;
    cout<< "\n";

    //Process values -> Map inputs to Outputs
    
    
    
    //Display Output
    cout<<First<<" "<<Last<<endl;
    cout<<"4800 Magnolia Ave \n";
    cout<<"Riverside, CA 92506                              "<<"Date: "<<date<<" \n";
    cout<<"Pay to the order of: "<<First<<" "<<Last<<"                      "<<"$"<<amount<<endl;
    cout<<" \n";
     
    n1000s = amount/1000;
    switch(n1000s){
        case 3: cout<<"Three thousand";break;
        case 2: cout<<"Two thousand";break;
        case 1: cout<<"One thousand";break;
    }
    
    //100's next
    amount%=1000;//Drop the 100's
    n100s=amount/100;
    switch(n100s){
        case 9: cout<<"nine hundred";break;
        case 8: cout<<"eight hundred";break;
        case 7: cout<<"seven hundred";break;
        case 6: cout<<"six hundred";break;
        case 5: cout<<"five hundred";break;
        case 4: cout<<"four hundred";break;
        case 3: cout<<"three hundred";break;
        case 2: cout<<"two hundred";break;
        case 1: cout<<"one hundred";break;
    }
    
    //10's next
    amount%=100;//Drop the 1000's
    n10s=amount/10;
    switch(n10s){
        case 9: cout<<" ninety";break;
        case 8: cout<<" eighty";break;
        case 7: cout<<" seventy";break;
        case 6: cout<<" sixty";break;
        case 5: cout<<" fifty";break;
        case 4: cout<<" forty";break;
        case 3: cout<<" thirty";break;
        case 2: cout<<" twenty";break;
        case 1: cout<<" ten";break;
        case 19: cout<<" nineteen";break;
        case 18: cout<<" eighteen";break;
        case 17: cout<<" seventeen";break;
        case 16: cout<<" sixteen";break;
        case 15: cout<<" fifteen";break;
        case 14: cout<<" fourteen";break;
        case 13: cout<<" thirteen";break;
        case 12: cout<<" twelve";break;
        case 11: cout<<" eleven";break;
    }
    
    //10's next
    amount%=10;//Drop the 1000's
    n1s=amount/1;
    switch(n1s){

        case 9: cout<<" nine";break;
        case 8: cout<<" eight";break;
        case 7: cout<<" seven";break;
        case 6: cout<<" six";break;
        case 5: cout<<" five";break;
        case 4: cout<<" four";break;
        case 3: cout<<" three";break;
        case 2: cout<<" two";break;
        case 1: cout<<" one";break;
        
    }
    cout<<" and no/100s dollars"<<endl;
    
    cout<<"Bank of "<<acct<<endl;
    cout<<"For: Gotta Pay Rent Fool!                       "<<First<<" "<<Last<<endl;
    
   
    
    
    //Exit Program
    return 0; 
}