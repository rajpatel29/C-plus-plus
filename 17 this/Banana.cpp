/*
 * Banana.cpp
 *
 *  Created on: Mar 11, 2016
 *      Author: RutvikPatel
 */

#include <iostream>
using namespace std;
#include "Banana.h"

Banana::Banana(int num)
:h(num)
{

}

void Banana::callMe()
{
	cout << "h  : " << h << endl;
	cout << "this->h : " << this->h << endl;
	cout << "(*this).h : " << (*this).h << endl;

}
