
#include <iostream>
using namespace std;

//this is called as function prototyping
void callMe();

int main() {
	int a = 100;
	int b;

	cout << "!!!Hello Rutvik!!! \n";

	callMe();

	cout << "value of a is " << a << endl;

	cout << "Enter value of b \n";
	cin >> b;

	cout << "Sum of a and b is " << a + b << endl;


	return 0;
}

void callMe()
{
	cout << "In callMe method :) \n";
}
