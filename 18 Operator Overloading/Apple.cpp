/*
 * Apple.cpp
 *
 *  Created on: Mar 12, 2016
 *      Author: RutvikPatel
 */

#include <iostream>
using namespace std;
#include "Apple.h"

Apple::Apple()
{
}

Apple::Apple(int n)
{
	num = n;
}


Apple Apple::operator +(Apple apple)
{
	Apple result;
	result.num = num + apple.num;
	cout << "result " << result.num << endl;
	return result;
}


