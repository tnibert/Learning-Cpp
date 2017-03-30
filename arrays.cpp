#include <iostream>
using namespace std;

int main()
{
	int foo[5] = { 12,  20, 3, 4, 10 };

	for (int i : foo)
	{
		cout << i << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << foo[i] << endl;
	}

	return 0;
}
