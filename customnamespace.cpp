#include <iostream>
using namespace std;

namespace foo
{
	int a, b;
	int value()
	{
		return 5;
	}
}

namespace bar
{
	double a = 3.6, b, pi = 3.1416;
	double value()
	{
		return a * pi;
	}
}

int main()
{
	cout << foo::value() << endl;
	cout << bar::value() << endl;
	cout << bar::pi << endl;
	bar::a *= 2;
	cout << bar::value() << endl;
	return 0;
}
