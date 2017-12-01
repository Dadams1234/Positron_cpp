// File: testMyString.cpp
// Created by Hugo Valle on 11/12/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include <vector>
using namespace std;
#include "MyString.h"
// Main Program Program
int main()
{
    MyString big("big");

    string s1 = big.getInternalCString();
    //cout<<s1<<endl;
	/*
    MyString saw("saw");
    MyString bigger("bigger");
    MyString little("little");
    MyString littler("littler");
    //Note, make sure you are calling your own comparestr() function,
    // and not the one included in the C libraries!
    cout << "comparestr(big, bigger) = "
         << compareStr(big, bigger) << endl; //display a -1
    cout << "comparestr(bigger, big) = "
         << compareStr(bigger, big) << endl; //display a 1
    cout << "comparestr(big, big) = "
         << compareStr(big, big) << endl; //display a 0
    cout << "comparestr(big, little) = "
         << compareStr(big, little) << endl; //display a -1
    cout << "comparestr(little, little) = "
         << compareStr(little, little) << endl;  //display 0
    cout << "comparestr(littler, little) = "
         << compareStr(littler, little) << endl; //display 1
    cout << "comparestr(big, saw) = "
         << compareStr(saw, big) << endl; //display -2

    // This section will be used to test your
    // output operator "<<"
    //
	
    cout <<"Original: "<< bigger << endl; //reggib
    bigger.reverseit();
    cout <<"New: "<< bigger << endl; //reggib

    cout <<"Original: "<< littler << endl; //reggib
    littler.reverseit();
    cout <<"New: "<< littler << endl; //reggib
	
    */
    return 0;
}
