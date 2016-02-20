/*
 * Person.cpp
 *
 *  Created on: Feb 19, 2016
 *      Author: RutvikPatel
 */

#include "Person.h"
#include "Birthdate.h"
#include <iostream>
#include <string>
using namespace std;


Person::Person(string n , Birthdate b )
:name(n) , birthdate(b)
{

}

void Person::printAll()
{
	cout << name << " born on " <<endl;
	 birthdate.printBirthdate() ;
}

