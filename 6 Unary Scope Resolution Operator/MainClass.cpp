#include <iostream>
using namespace std;

int x = 100;

int main()
{
	int x = 50;

	cout << "Local " <<  x << endl;
	cout << "Global " << ::x << endl;

	return 0;
}

