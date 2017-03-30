#include <iostream>
using namespace std;

//C++ passes arrays as pointers
//when you pass a single indexed array, you can declare arr[]
//additional indexes require a value in the declaration
void func (int arr[][2][3])
{
	for (int i : arr)	//well, this doesn't work...
	{
		cout << i;
	}
}

int main()
{

	int arr [3][2][3] = {1, 2, 3,4,5,6,7,8};

	//func(arr);

	int foo[5] = { 12,  20, 3, 4, 10 };

	for (int i : foo)
	{
		cout << i << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << foo[i] << endl;
	}

	int bar[5] = {10,30}; 		//initialize first 2 vals, rest are zeros

	for (int i : bar)
	{
		printf("%d\n", i);
	}

	int spam[] { 1, 2, 3, 4 };	//no = sign needed, auto sets to size 4

	for (int i : spam)
	{
		cout << i << endl;
	}

	return 0;
}
