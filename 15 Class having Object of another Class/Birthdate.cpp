/*
 * Birthdate.cpp
 *
 *  Created on: Feb 19, 2016
 *      Author: RutvikPatel
 */

#include "Birthdate.h"

#include <iostream>
using namespace std;

Birthdate::Birthdate(int m , int d , int y)
{
	month = m;
	day = d;
	year = y;
}

void Birthdate::printBirthdate()
{
	cout << month  << "/" <<  day << "/" << year << endl;
}
