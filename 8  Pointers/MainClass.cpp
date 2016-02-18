#include <iostream>
using namespace std;

int main()
{

	int f = 100;
	cout << &f << endl;

	int *pointer ;
	pointer = &f;

	cout << *pointer<< endl;


	return 0;
}

