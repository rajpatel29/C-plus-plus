/*
 * Sally.cpp
 *
 *  Created on: Feb 18, 2016
 *      Author: RutvikPatel
 */

#include "Sally.h"
#include <iostream>
using namespace std;


//this is the way you set constant variable
Sally::Sally(int a , int b): regularVariable(a) , constantVarible(b)
{

}


void Sally::printVariable()
{
	cout << "regularVariable: " << regularVariable << "  constantVariable: " << constantVarible << endl;
}
