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
// creates temp unique_ptr and reverses internalCString than swaps the two
void MyString::reverseit()
{
	int count = 0;
	unique_ptr<char[]> temp;
	temp = make_unique<char[]>(nlength);
	for (int j = nlength; j >= 0; j++)
	{
		temp[count] = internalCString[j];
		count++;

	}
	internalCString.swap(temp);
	

}
// compares nlength of MyString objects and returns a number depending on their length 
// and the content of said MyString Objects
int MyString::compareStr(const MyString & Lhs, const MyString & rths)
{
    /*
     * quick tip delete when finihed
     * (1) Left Hand Side (lhs) is greater than Right Hand Side (rhs)
     * (-1) lhs is less than rhs
     * (0) lhs is equivalent to rhs, both in length and string
     * (-2) lhs is equivalent to rhs only in length, as the string in different
     */
	if (Lhs.getNlength() > rths.getNlength())
	{
		return 1;
	}
	else if (Lhs.getNlength() < rths.getNlength())
	{
		return -1;
	}
	else if (Lhs.getNlength() == rths.getNlength() && Lhs.getInternalCString() == rths.getInternalCString())
	{
		return 0;
	}
	else if (Lhs.getNlength() == rths.getNlength() && Lhs.getInternalCString() != rths.getInternalCString())
	{
		return -2;
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

    nlength = i + 1;

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
