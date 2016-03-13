/*
 * Son.cpp
 *
 *  Created on: Mar 12, 2016
 *      Author: RutvikPatel
 */

#include <iostream>
using namespace std;
#include "Son.h"
#include "Father.h"

Son::Son()
{
	// TODO Auto-generated constructor stub
}

void Son::check()
{
	publicv = 90;

	protectedv = 88;

	cout <<"Public variable " << publicv << "   protected variable: " << protectedv << endl;
	//we can not use public variable in child class
//	privatev = 78;
}
