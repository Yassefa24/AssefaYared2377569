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
void input (int& feet, int& inches, int& meters, int& centimeters);
int convert (int& feet, int& inches, int& meters, int& centimeters);
void output (int feet, int inches, int meters, int centimeters);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int feet;
    int inches;
    int meters;
    int centimeters;
    char check;
     
    //Input values
   do {
        input(feet, inches, meters, centimeters);
        convert(feet, inches, meters, centimeters);
        output(feet, inches, meters, centimeters);
        cout<<"Repeat calculation? "<<endl;
        cout<<"Y for yes, N for no"<<endl;
        cin>>check;

            }while(check == 'Y' || check == 'y');

	
     
    //Process values -> Map inputs to Outputs
   
    
    
    //Display Output
  
   
    
    
    //Exit Program
    return 0; 
}
void input (int& feet, int& inches, int& meters, int& centimeters)
{
 cout<<"Enter feet to convert it to meters: ";
	cin>>feet;
	cout<<endl<<"Enter inches to convert it to centimeters: ";
	cin>>inches;   
}

int convert (int& feet, int& inches, int& meters, int& centimeters)
{
  meters = feet * 0.3048;
	return meters;
	centimeters = inches * 2.54;
	return centimeters;  
}

void output (int feet, int inches, int meters, int centimeters)
{
  cout<<feet<<" feet " <<inches<<" inches is equivalent to "<<meters<<" meters "<<centimeters<<" centimeters"<<endl;
    
}