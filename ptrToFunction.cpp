#include <iostream>
using namespace std;

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

//yay callback!
int op(int x, int y, int (*func)(int, int))
{
	int g;
	g = (*func)(x, y);
	return (g);
}

int main()
{
	int m, n;
	int (*minus)(int, int) = sub;

	m = op(7, 5, add);
	n = op(20, m, minus);
	cout << n << endl;

	return 0;
}
