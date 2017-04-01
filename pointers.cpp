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
	int * ptr, * ptr2;

	//you can assign a pointer to an uninitialized variable
	ptr = &val1;
	*ptr = 10;	//assigns to val1
	ptr = &val2;	//we can change the variable we point to
	*ptr = 20;
	printf("val1 is %d, val2 is %d\n", val1, val2);

	ptr2 = ptr;	//both now reference val2
	*ptr = 25;
	cout << *ptr2 << endl;	//now we print 25

	/* arrays work like pointers that point to their first value */
	int arr[9] = {1,2,3,4,5,6,7,8,9};
	int * arrptr = arr;
	cout << arr << endl << arrptr << endl;
	cout << arrptr[3] << endl;

	/*whaaaat
	int main ()
	{
	  int numbers[5];
	  int * p;
	  p = numbers;  *p = 10;
	  p++;  *p = 20;
	  p = &numbers[2];  *p = 30;
	  p = numbers + 3;  *p = 40;
	  p = numbers;  *(p+4) = 50;
	  for (int n=0; n<5; n++)
	    cout << numbers[n] << ", ";
	  return 0;
	}
	*/
	*arrptr = -1;
	arrptr++;	//address of next element?
	*arrptr = -2;
	arrptr = &arr[4];
	*arrptr = -5;
	arrptr += 3;
	*arrptr = -8;
	for (int i : arr)
	{
		cout << i;
	}
	cout << endl;

	return 0;
}
