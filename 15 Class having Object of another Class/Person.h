/*
 * Person.h
 *
 *  Created on: Feb 19, 2016
 *      Author: RutvikPatel
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <string>
#include "Birthdate.h"
using namespace std;

class Person
{
	public:
		Person(string n , Birthdate b );
		void printAll();
	private:
		string name;
		Birthdate birthdate;
};

#endif /* PERSON_H_ */
