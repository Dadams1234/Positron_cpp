//
// Created by Hugo Valle on 11/12/17.
//
#include <memory>
#include <algorithm>
#include "MyString.h"

char * MyString::getInternalCString() const
{
	return internalCString.get();
}
/*!
 * returns length of internal CString
 * @return
 */
int MyString::getNlength() const
{
	return nlength;
}
// creates temp char and reverses internalCString than swaps the two
void MyString::reverseit()
{
	int count = nlength ;
		
	for (int j = 0; j <= (nlength/2)-1; j++)
	{
		swap(internalCString[j], internalCString[nlength - j - 1]);
		
		
	}
	
	

}
// compares nlength of MyString objects and returns a number depending on their length 
// and the content of said MyString Objects
int MyString::compareStr(const MyString & Lhs, const MyString & rths)
{
  
	
	
	if (Lhs.getNlength() > rths.getNlength())
	{
		return 1;
	}
	else if (Lhs.getNlength() < rths.getNlength())
	{
		return -1;
	}
	else if (Lhs.nlength == rths.nlength)
	{
		if (strcmp(Lhs.internalCString.get(), rths.internalCString.get()) == 1)
		{
			return -2;
		}
		if (strcmp(Lhs.internalCString.get(), rths.internalCString.get()) == 0)
		{
			return 0;
		
		}
	
	}


	return -3;
}

/*!
 * default constructor sets default values
 */
MyString::MyString()
{
	internalCString = make_unique<char[]>(1);

    nlength = 0;
}

/*!
 * Constructor that sets internal CString = cString
 * @param cString passed to internal CString
 */
MyString::MyString(const char * cString)
{

    int i = 0;

    while (cString[i] != '\0')
    {
        i++;
    }

    nlength = i;

    internalCString = make_unique<char[]>(nlength);

    for(int j = 0; j <= nlength; j++)
    {
        internalCString[j] = cString[j];

    }


}

/*!
 * develop a << operator overload
 * @param os
 * @param myString
 * @return
 */
ostream &operator<<(ostream &os, const MyString &myString)
{

    os << myString.getInternalCString();
    return os;
}
