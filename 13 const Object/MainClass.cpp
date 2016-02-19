
#include <iostream>
using namespace std;

#include "Banana.h"

int main()
{
//	In the non-const method you can change the instance members,
//	which you cannot do in the const version.


	Banana regularObj(0);
	regularObj.regularMethod();
	regularObj.constantMethod();

	cout << "\n \nConstant object:" << endl ;

	const Banana constantObj(0);
	//we cant call regular method using constant object
//	constantObj.regularMethod();
	constantObj.constantMethod();

	return 0;
}

