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
    int timeSec, totDis, gravity, time, distance;
    
    //introducing the problem
    cout << "An object is in freefall, assuming you are starting at rest enter a variable for time in seconds to find out the distance it has fallen.\n";
    cin >> timeSec;
    cout << "Gravity is 9.8 m/(s^2) \n";
    
    //equation
    gravity = 9.8;
    time = timeSec * timeSec;
    distance = gravity * time;
    totDis = distance / 2;
    
    //answer
    cout << "total distance is about ";
    cout << totDis;
    cout << " meters \n";
 
    
//Thats it    
    return 0;
}

