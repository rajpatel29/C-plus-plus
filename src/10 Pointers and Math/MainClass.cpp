
#include <iostream>
using namespace std;

int main()
{
	int array[5] = {11,12,13,14,15};

	int *x1 = &array[0];
	int *x2 = &array[1];
	int *x3 = &array[2];

	cout << "variabe x1 is stored at memory "  << x1 << " location" <<endl ;
	cout << "variabe x2 is stored at memory "  << x2 << " location" <<endl;
	cout << "variabe x3 is stored at memory "  << x3 << " location" <<endl;

	x1  += 2;

	cout << "x1 is now pointing to memorry location " << x1 << endl;


	return 0;
}

