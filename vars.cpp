#include <iostream>
using namespace std;

#define PI 3.14159

int main()
{
	//declare vars
	int a = 5;
	int b(2);
	int c{3};
	int result;
	float pi = PI;

	//auto and decltype
	auto bar = 4;
	decltype(bar) foo;	//seems to init to 0

	cout << bar;
	cout << (foo);
	cout << "\n";

	//process
	a = a + 1;
	result = (a - b) * c;

	//print result
	cout << result << "\n";		//can put differing types through to cout

	cout << pi << endl;

	//strings
	string str = "Test of " "string";	//concantenation
	cout << str << endl;		//endl is like "\n"

	//bool
	bool mybool = true;
	if(mybool) {
		int* p = nullptr;
		cout << "In if" << endl;
	}

	int x, y, z;

	cout << (x = 5) << endl;	//should return 5

	cout << (z = y = x) << endl;

	x = (y=6, y+10);
	cout << x << endl;

	return 0;
}
