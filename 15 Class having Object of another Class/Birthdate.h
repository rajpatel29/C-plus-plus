/*
 * Birthdate.h
 *
 *  Created on: Feb 19, 2016
 *      Author: RutvikPatel
 */

#ifndef BIRTHDATE_H_
#define BIRTHDATE_H_

class Birthdate
{
	public:
		Birthdate(int m , int d , int y);
		void printBirthdate();
	private:
		int month, day, year;
};

#endif /* BIRTHDATE_H_ */
