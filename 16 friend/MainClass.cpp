
#include <iostream>
using namespace std;

class Apple
{
	public :
		Apple() { x = 0;}
	private :
		int x;

	friend void check(Apple &a);
};

void check(Apple &a)
{
	a.x =90;
	cout << "value of x  is " << a.x << endl ;
}


int main()
{
	Apple apple;
	check(apple);
	return 0;
}


