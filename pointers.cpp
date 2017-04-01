#include <iostream>
using namespace std;

int main ()
{
	//address of operator &
	int num = 25;
	int * addr = &num;
	cout << addr << endl;	//print address of num variable
	cout << *addr << endl;	//print value at address

	/*
	& "address of"
	* dereference, "value pointed to by"
		this is not the same as when you declare the pointer
	*/

	//ok lets do a demo
	int val1, val2;
	int * ptr;

	//you can assign a pointer to an uninitialized variable
	ptr = &val1;
	*ptr = 10;	//assigns to val1
	ptr = &val2;	//we can change the variable we point to
	*ptr = 20;
	printf("val1 is %d, val2 is %d\n", val1, val2);

	return 0;
}
