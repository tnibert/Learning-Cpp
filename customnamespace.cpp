#include <iostream>
using namespace std;

namespace foo
{
	int a=2, b=5;
	int value()
	{
		return 5;
	}
}

namespace bar
{
	double a = 3.6, b = 98.5, pi = 3.1416;
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

	using foo::a;
	using bar::b;
	//now a and b are from foo and bar respectively
	printf("%d\n", a);
	printf("%f\n", b);

	return 0;
}
