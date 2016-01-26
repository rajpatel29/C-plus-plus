#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{

	//If you dont write this then it will return same numbers again
	srand(time(0));

	for (int i = 0; i < 20; i++)
	{
		cout << 1 + rand() % 6 << endl;
	}

	return 0;
}

