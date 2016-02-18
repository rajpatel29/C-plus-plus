/*
 * Apple.cpp
 *
 *  Created on: Feb 17, 2016
 *      Author: RutvikPatel
 */

#include "Apple.h"

#include <iostream>
using namespace std;

Apple::Apple(int i)
{
	cout << "In constructor " << i << endl;
}

Apple::~Apple()
{
	cout << "In deconstructor" << endl ;
}

