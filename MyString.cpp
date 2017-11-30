//
// Created by Hugo Valle on 11/12/17.
//
#include <memory>
#include "MyString.h"

char * MyString::getInternalCString() const
{
	return &internalCString;
}

int MyString::getNlength() const
{
	return nlength;
}

void MyString::reverseit()
{
}

int MyString::compareStr(const MyString & Ihs, const MyString & rths)
{
	return 0;
}

MyString::MyString()
{
	internalCString[""];
}

MyString::MyString(const char * cString):
{
	internalCString = make_unique<char[]>(cString);
}
