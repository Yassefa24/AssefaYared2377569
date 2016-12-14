/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Yared PC
 *
 * Created on September 19, 2016, 9:59 AM
 */

#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;    //name-space used in the system library

//user libraries

//global constants
const int PERCENT=100;  //PERCENTAGE CONVERSION
const int MONTHS=12     //MONTHS IN A YEAR

//EXECUTION BEGINS HERE!
int main(int argc, char** argv) {
    //DECLARATION OF VARIABLES
    char nCmPrds=36;    //number of monthly compound periods
    float intRate=12;   //percent per year
    float loanAmt=le4f; //$10,000 load
    float monPay;       //monthly payments $'s
    float totPaid;      //total amount paid $'s
    float intPaid;      //total interest paid $'s
    
    //input values
    
    //process values -> map inputs to outputs
    intRate/=(PERCENT*MONTHS);
    float temp=pow((1+intRate/PERCENT/MONTHS), nCmPrds);
    monPay=intRate*temp*loanAmt/(temp-1);
    totPaid=nCmPrds*monPay;
    intPaid=totPaid-loanAmt;
    
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"using floating point values gives an error"<<endl;
    cout<<"loan amount                  :$"<<setw(8)<<loanAmt<<endl;
    cout<<"interest rate %/month        : "<<setw(8)<<intRate<<endl;
    cout<<"number of months             :   "<<static_cast_
    return 0;
}

