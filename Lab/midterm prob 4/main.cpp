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
  char choice; 
    float hours; 
    float pa1;
    float pa2;
    float pa3; 
    float pb1;
    float pb2;
    float pb3;
    float pc1;
    float ans1; 
    float ans2; 
    float ans3; 
     
    //Input values
    cout<<"Choose a package from the selection a, b, c"<<endl;
    cin >> choice; 
    cout<<"Please enter the amount of hours you are using"<<endl;
    cin >> hours; 
     
    //Process values -> Map inputs to Outputs
   pa1 = 16.75 ;
    pa2 = (16.75) + (.85*(hours-5)); 
    pa3 = 16.75  + (.85*15) + (hours-20); 
    pb1 = 23.75 ;
    pb2 = (23.75) + (.65*(hours-15)); 
    pb3 = (23.75) + (.65*(10)) + (hours-25);
    pc1 = 34.95;
    
    
    //Display Output
   if (hours <= 5)
    {
        ans1 = 16.75;
        ans2 = 23.75;
        ans3 = 34.95 ;      
    }
    
    if (hours <= 15 && hours >=5 )
    {
        ans1 = pa2;
        ans2 = 23.75;
        ans3 = 34.95 ;      
    }
    if (hours<=20 && hours <=15)
    {
        ans1 = pa2;
        ans2 = pa2;
        ans3 = 34.95;        
    }
    if (hours >=20 && hours <=25)
    {   
        ans1 = pa3;
        ans2 = pb2;
        ans3 = 34.95;
    }
    
    if (hours >25)
    {
        ans1 = pa3;
        ans2 = pb3;
        ans3 = 34.95;
    }
    
    switch (choice)
    {case 'a':
            cout<<"Your Monthly Bill is $"<<ans1<<endl;
            cout<<""<<endl;
            cout<<"If you had chosen package B you would have saved $"<<ans2-ans1<<endl;
            cout<<""<<endl;
            cout<<"If you had chosen package C you would have saved $"<<ans3-ans1<<endl;
            cout<<""<<endl;
            break;
        case 'b':
            cout<<"Your Monthly Bill is $"<<ans2<<endl;
            cout<<""<<endl;
            cout<<"If you had chosen package A you would have saved $"<<ans1-ans2<<endl;
            cout<<""<<endl;
            cout<<"If you had chosen package C you would have saved $"<<ans3-ans2<<endl;
            cout<<""<<endl;
            break;
        case 'c' :       
            cout<<"Your Monthly Bill is $"<<ans3<<endl;
            cout<<""<<endl;
            cout<<"If you had chosen package A you would have saved $"<<ans1-ans3<<endl;
            cout<<""<<endl;
            cout<<"If you had chosen package C you would have saved $"<<ans2-ans3<<endl;
            cout<<""<<endl;
            break;        
                    
            
      
    }        
    
    if (ans1 < ans3 && ans1 < ans2)
    {
        cout<<"Stay/switch to package a"<<endl;
    }
    
    if (ans2 < ans3 && ans2 < ans1)
    {
        cout<<"Stay/switch to package b"<<endl;
    }
    
    if (ans3 < ans2 && ans3 < ans1)
    {
        cout<<"Stay/switch to package c"<<endl;
                
    }
      
   
    
    
    //Exit Program
    return 0; 
}