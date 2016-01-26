#include <iostream>
using namespace std;

void printNumber(int x)
{
	cout << "Int value " << x << endl;
}

void printNumber(float y)
{
	cout << "Float value " << y << endl;
}

int main()
{
	int a = 5;
	float b = 10.10;

	printNumber(a);
	printNumber(b);

	return 0;
}

