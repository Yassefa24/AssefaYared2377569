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
#include <cmath>
using namespace std;

int main( ) 
{
    int integer_1, integer_2, totalSum, totalProduct;
    
    cout << "Hello let me show you some simple math.\n";
    cout << "Enter two integers and press the enter button after each integer:\n";
    
    cin >> integer_1 ;
    cout << "and \n";
    cin >> integer_2 ;
    
    cout << "The sum of these two numbers is \n";
    totalSum = integer_1 + integer_2;
    cout << totalSum;
    cout << " \n";
            
    cout << "The product of these two numbers is \n";
    totalProduct = integer_1 * integer_2;
    cout << totalProduct;
    cout << " \n";
    
    
    cout << "This is the end of the program. ";
    
    return 0;
}

