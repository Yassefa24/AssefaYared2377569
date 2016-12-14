/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Yared PC
 *
 * Created on September 19, 2016, 9:07 PM
 *
  */
//Include system libraries
#include<iostream>
using namespace std;

int main( ) 
{
    //values
    int numQuarters, numDimes, numNickles, totalChange, totQuarters, totDimes, totNickles;
    
    //introducing the problem
    cout << "Enter the number of quarters you have then press the enter button. \n";
    cin >> numQuarters;
    
    cout << "Now enter the number of dimes you have then press enter. \n";
    cin >> numDimes;
    
    cout << "Now enter the amount of nickles you have and press enter. \n";
    cin >> numNickles;
    
    //equation
    totQuarters = numQuarters * 25;
    totDimes = numDimes * 10;
    totNickles = numNickles * 5;
    totalChange = totQuarters + totDimes + totNickles;
    
    //answer
    cout << "You have ";
    cout << totalChange;
    cout << " cents \n";
    cout << "Thats all you got?\n";

    
//Thats it    
    return 0;
}

