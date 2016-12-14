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
    int length, width, totalLength, x;
    
    //introducing the problem
    cout << "Press return after entering a number.\n";
    cout << "We have 4x for length and 5x for width\n";
    cout << " enter value for x\n";
    cin >> x;
    
    //equation
    length = 4 * x;
    width = 5 * x;
    totalLength = (2 * length) + (2 * width);
    
    //answer
    cout << "total length is ";
    cout << length;
    cout << "feet\n";
    cout << "and total width is ";
    cout << width;
    cout << "feet\n";
    cout << "total perimeter is ";
    cout << totalLength;
    cout << "feet\n";
    
//Thats it    
    return 0;
}

