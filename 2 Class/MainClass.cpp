
#include <iostream>
using namespace std;

class MyClass
{
	public:
		MyClass(string name)
		{
			setName(name);
		}

		void setName(string xyz)
		{
			name = xyz;
		}

		string getName()
		{
			return name;
		}

		void callMe()
		{
			cout << "Hi there how are you?" << endl;
		}

	private:
		string name;

};

int main()
{
	MyClass obj("Darpan");
	obj.callMe();
	cout << "My Name is " << obj.getName();

	return 0;
}

