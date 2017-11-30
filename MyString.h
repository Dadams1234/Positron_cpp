//
// Created by Hugo Valle on 11/12/17.
//

#ifndef HW7_MYSTRING_H
#define HW7_MYSTRING_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <memory>
//#include <string> // THIS IS NOT ALLOWED. No C++ string class allowed
using namespace std;

class MyString
{
private:
    int nlength;
    unique_ptr<char[]> internalCString;

public:

    char *getInternalCString() const;
    int getNlength() const;
    void reverseit();
    int compareStr(const MyString &Ihs, const MyString &rths);

    MyString ();
    MyString (const char *cString);

    friend ostream &operator<<(ostream &os, const MyString &myString);

};

#endif //HW7_MYSTRING_H
