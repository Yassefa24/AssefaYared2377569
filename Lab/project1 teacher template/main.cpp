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
int fstDie;
int sndDie;
int die(int, int);
int result;

//Function prototypes
bool isLpYr(int);  
int  getCVal(int); 
int  getYVal(int); 
int  getMVal(int,int);
string dayOfWk(int,int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    char choice;
    int MM;
    int DD;
    int YYYY;
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem Project 1"<<endl;
        cout<<"2.  Type 2  for Problem B"<<endl;
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
    char choice;
     
    //Input values
   cout<<"Hello"<<endl;
   cout<<"Welcome to my game called 7 craps"<<endl;
   cout<<"Before we start i forgot what the date is." <<endl;
   cout<<"Enter month in MM format"<<endl;
   cin>> MM;
   cout<<"enter date in DD format"<<endl;
   cin>> DD;
   cout<<"Enter year in YYYY format"<<endl;
   cin>> YYYY;
   cout<<"This game is similar to the game played in vegas"<<endl;
   cout<<"I want to see what county you are in first."<<endl;
   cout<<"I will first assume you are in southern california. If not its ok just pick any letter :) "<<endl;
   cout<<"Type the letter to which county you're in."<<endl;
   cout<<"a) Los Angeles County. "<<"b) Orange County. "<<"c) San Bernardino County."<<endl;
   cin >> choice; 
   cout<<"Nobody is judging but its "<<dayOfWk(MM, DD, YYYY)<<" good luck! Hope you win some money!"<<endl;

   
   
     
    //Process values -> Map inputs to Outputs
   
    
    
    //Display Output
  switch (choice)
    {case 'a':
            cout<<"You're In the Los Angeles County. "<<endl;
            cout<<"You're about 5 hours from Vegas."<<endl;
            cout<<"You can get a little bit of Vegas playing this game without the drive!"<<endl;
            
            break;
        case 'b':
            cout<<"You're in Orange county."<<endl;
            cout<<"You're about 5 hours from Vegas."<<endl;
            cout<<"You can get a little bit of Vegas playing this game without the drive!"<<endl;
            
            break;
        case 'c' :       
            cout<<"You're in San Bernardino County"<<endl;
            cout<<"You're about 4 hours from Vegas."<<endl;
            cout<<"You can get a little bit of Vegas playing this game without the drive!"<<endl;
            
            break;        
  }
   
  srand(time(0));
  
  int firDie;
  int secDie;
  int firDie2;
  int secDie2;
  int firRoll;
  int secRoll;
  int bet;
  char repeat = 'y';
  char x;
  
  
  cout<<"Lets Start this game!"<<endl;
  cout<<"First place your bet $";
  cin>>bet;
  cout<<endl;
  cout<<"Cool you made a bet of $"<<bet<<endl;
  cout<<"If you win you get $"<<(2 * bet)<<" if you lose you'll lose $"<<bet<<endl;
  
  while (repeat == 'y' || repeat == 'Y')
  {
      
      
      firDie = rand() % 6 + 1;
      secDie = rand() % 6 + 1;
      
      firRoll = firDie + secDie;
      
      cout<<"Your first die rolled a "<<firDie<<endl;
      cout<<"Your second die rolled a "<<secDie<<endl;
      cout<<"Together you get "<<firRoll<<endl;
      
      
      if (firRoll == 7 || firRoll == 11)
      {
          cout<<"Congrats! You Win "<<(2*bet)<<"! Would you like to play again?"<<endl;
          cout<<"Type Y for yes or N for No"<<endl;
          cin>> repeat;
      }
      
      cout<<"type x and enter to roll again"<<endl;
      cin>>x;
      cout<<endl;
      
      if (firRoll == 2 || firRoll == 3 || firRoll== 12)
      {
          cout<<"Sorry you lose this time. Would you like to try again? "<<endl;
          cout<<"Type Y for yes and N for no. "<<endl;
          cin>> repeat;
      }
      
      cout<<"Try to win next roll "<<endl;
      
      firDie2 = rand() % 6 + 1;
      secDie2 = rand() % 6 + 1;
      
      secRoll = firDie2 + secDie2;
      
      if (secRoll == firRoll)
      {
          cout<<"Congrats! You Win "<<(2*bet)<<"! Would you like to play again?"<<endl;
          cout<<"Type Y for yes or N for No"<<endl;
          cin>> repeat;
      }
      else if (secRoll == 7)
      {
        cout<<"Sorry you lose. Would you like to try again? "<<endl;
          cout<<"Type Y for yes and N for no. "<<endl;
          cin>> repeat;  
      }
  }
    
    //Exit Program
  
                break;
            }
            case 2:{
               
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
string dayOfWk(int m,int d,int y){
    int nDay=(d+getMVal(m,y)+getYVal(y)+getCVal(y))%7;
    switch(nDay){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
        case 6:return "Saturday";
        default:return "Bad Day";
    }
}

int  getMVal(int m,int y){
    switch(m){
        case 1:return isLpYr(y)?6:0;
        case 2:return isLpYr(y)?2:3;
        case 3:case 11:return 3;
        case 4:case  7:return 6;
        case 9:case 12:return 5;
        case 5:return 1;
        case 6:return 4;
        case 8:return 2;
        case 10:return 0;
        default:cout<<"Bad number"<<endl;exit(1);
    }
}

int getYVal(int year){
    int dig2=year%100;
    return dig2+dig2/4;
}

int getCVal(int year){
    return 2*(3-(year/100)%4);
}

bool isLpYr(int year){
    return ((year%400==0)||((year%4==0)&&(year%100!=0)));
}