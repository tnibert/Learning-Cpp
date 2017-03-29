#include <iostream>
using namespace std;

//pass vars by reference
int duplicate (int& a, int& b, int c=3)
{
	//modifies variables a and b where they were called from, pass reference
	a *= 2;
	b *= 2;

	//c can be default value
	cout << c << endl;
	return c;
}

//template
template <class T>
T sum (T a, T b)
{
	return a + b;
}

//non type template args
//the value of N will be compiled into program
template <class T, int N>
T fixed_multiply(T val)
{
	return val * N;
}

int main()
{
	//by reference and default value
	int x = 3, y = 4;
	duplicate(x, y);
	cout << x << " " << y << endl;
	duplicate(x, y, 20);

	//template
	int k = sum<int>(x, y);		//you don't actually need to include <int> if types are clear
	cout << k << endl;
	double l = sum(3.14, 1.72);	//eg sum<double>()
	cout << l << endl;

	//non type template
	cout << fixed_multiply<int,3>(10) << endl;

	return 0;
}
