//#include "stdafx.h"
#include <iostream>

int main()
{
using namespace std;

//declare a pointer to int and allocate space for it
// with the keyword new

int *pInt = new int;

// declare a pointer to double and allocate space for it
// with the keyword new

double *pDouble = new double;

// store the value 3 in the memory location 
// pointed to by pInt
*pInt = 3;

// store the value 5.0 in the memory location
// pointed by pDouble
*pDouble = 5.0;

cout << "value stored at pInt = " << *pInt << ": memory address = " << pInt << endl;
cout << "value stored at pDouble = "<<*pDouble << ":location = " << pDouble << endl;

cout << "size of pInt = " << sizeof(pInt);
cout << "size of *pInt = " << sizeof(*pInt) << endl;
cout << "size of pDouble = " << sizeof(pDouble);
cout << "size of *pDouble = " << sizeof(*pDouble) << endl;

delete pInt;
delete pDouble;

return 0;

}

