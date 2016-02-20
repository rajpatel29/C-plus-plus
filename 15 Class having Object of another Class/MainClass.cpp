
#include <iostream>
using namespace std;


#include "Person.h"
#include "Birthdate.h"
#include <string>

int main()
{
	Birthdate birthObj(1,2,3);

	Person person("Dappo" , birthObj);

	person.printAll();
	return 0;
}


