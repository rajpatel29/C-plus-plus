/*
 * Banana.cpp
 *
 *  Created on: Feb 18, 2016
 *      Author: RutvikPatel
 */

#include "Banana.h"

#include <iostream>
using namespace std;

Banana::Banana(int i)
{
	counter = i;
}

void Banana::regularMethod()
{
	counter++;
	cout << "In regular method" << endl ;
}
void Banana::constantMethod() const
{
	//we can not change the value for counter
//	counter++;
	cout << "In constant method"  << endl;
}
