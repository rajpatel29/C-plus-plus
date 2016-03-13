/*
 * Apple.h
 *
 *  Created on: Mar 12, 2016
 *      Author: RutvikPatel
 */

#ifndef APPLE_H_
#define APPLE_H_

class Apple
{
	public:
		Apple();
		Apple(int num);
		Apple operator+ (Apple apple);
	private :
		int num;
};

#endif /* APPLE_H_ */
