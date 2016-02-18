
#include <iostream>
using namespace std;

#include "Apple.h"

int main()
{
	Apple appleObj;

	appleObj.callMe();

	cout << "Using arrow" << endl;

	Apple *applePointer = &appleObj;

	applePointer -> callMe();

	return 0;
}

