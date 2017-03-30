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
	namespace spam = foo;	//aliasing
	cout << foo::value() << endl;
	cout << bar::value() << endl;
	cout << bar::pi << endl;
	bar::a *= 2;
	cout << bar::value() << endl;

	//using foo::a;
	using bar::b;
	//now a and b are from foo and bar respectively
	printf("%d\n", spam::a);
	printf("%f\n", b);

	//using namespace
	{
		using namespace foo;
		cout << a << endl;
	}
	{
		using namespace bar;
		cout << a << endl;	//apparently a is still from foo in this block because of the earlier using
	}

	int wtf;	//so apparently this auto initializes to 0
	cout << wtf << endl;

	return 0;
}
