/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Yared PC
 *
 * Created on September 21, 2016, 8:48 PM
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

char s=' ';//The space character
char c;    //Character used to create the Big C
    
//Input values
cout<<"What character would you like to use to make a Big C, input\n";
cin>>c;
    
//Process values -> Map inputs to Outputs
    
//Display Output -> The Big C
cout<<s<<s<<c<<c<<c<<c<<endl;
cout<<s<<c<<s<<s<<s<<c<<endl;
cout<<c<<s<<s<<s<<s<<endl;
cout<<c<<s<<s<<s<<s<<endl;
cout<<c<<s<<s<<s<<s<<endl;
cout<<c<<s<<s<<s<<s<<endl;
cout<<c<<s<<s<<s<<s<<endl;
cout<<s<<c<<s<<s<<s<<c<<endl;
cout<<s<<s<<c<<c<<c<<c<<endl;    
    
    return 0;
}

