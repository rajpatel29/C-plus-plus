
#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main()
{
	int x = 13;
	int y = 13;

	passByValue(x);
	passByReference(&y);

	cout << "value of x " << x << endl;
	cout << "value of y " << y << endl;

	//sizeof() gives how much memory a variable takes

	return 0;
}

void passByValue(int x)
{
	x = 90;
}

void passByReference(int *x)
{
	*x = 90;
}
