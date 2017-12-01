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
	for (int j = nlength; j > 0; j--)
	{
		temp[count] = internalCString[j];
		count++;
		cout << count << endl;

	}
	cout << temp.get() << endl; cout << internalCString.get() << endl;

	
	cout << temp.get() << endl; cout << internalCString.get() << endl;
	

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
	
	cout << Lhs.getNlength() << Lhs.getInternalCString() << endl << rths.getNlength() << rths.getInternalCString() << endl;
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
