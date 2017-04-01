#include <iostream>
using namespace std;

//http://www.cplusplus.com/doc/tutorial/pointers/

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
	arrptr++;	//when you add 1 to a pointer it increases the address by the size of the initialized type
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

	/* In the chapter about arrays, brackets ([]) were explained as specifying the index of an element of the array. Well, in fact these brackets are a dereferencing operator known as offset operator. They dereference the variable they follow just as * does, but they also add the number between brackets to the address being dereferenced. For example:

	a[5] = 0;       // a [offset of 5] = 0
	*(a+5) = 0;     // pointed to by (a+5) = 0

	These two expressions are equivalent and valid, not only if a is a pointer, but also if a is an array. Remember that if an array, its name can be used just like a pointer to its first element.
	*/

	//++ has higher precedence than a dereference * operator
	//so *p++ is like *(p++) and will increase the pointer, not the value
	//so if you want to increment the value, must user (*p)++
	/*
	*p++   // same as *(p++): increment pointer, and dereference unincremented address
	*++p   // same as *(++p): increment pointer, and dereference incremented address
	++*p   // same as ++(*p): dereference pointer, and increment the value it points to
	(*p)++ // dereference pointer, and post-increment the value it points to 
	*/

	/*const
	int x;
	      int *       p1 = &x;  // non-const pointer to non-const int
	const int *       p2 = &x;  // non-const pointer to const int
	      int * const p3 = &x;  // const pointer to non-const int
	const int * const p4 = &x;  // const pointer to const int

	const int * p2a = &x;  //      non-const pointer to const int
	int const * p2b = &x;  // also non-const pointer to const int
	*/

	//strings are arrays of chars and thus have pointer qualities
	const char * foo = "hello";	//creates array "hello" in memory and assigns address of first element to pointer
	cout << foo << endl; 	//prints hello
	cout << *foo << endl;	//prints h
	cout << &foo << endl;	//prints address of "h"

	for (int i = 0; i < 6; i++)
	{
		cout << foo+i;
	}
	cout << endl;
	//^well that was interesting

	//this is more what we wanted:
	for (int i = 0; i < 6; i++)
	{
		cout << *(foo+i);	//equivalent to foo[i]
	}
	cout << endl;	//that all printed hello

	//pointers to pointers are legit
	char a;
	char * b;
	char ** c;
	a = 'z';
	b = &a;
	c = &b;

	cout << **c << " " << *c << " " << c << endl;	//well that ended up strange and unexpected "z z 0xADDRESS"

	//void pointers
	//flexible, can point to anything, but must be transformed to another type to be dereferenced

	/*
	Neither p nor q point to addresses known to contain a value, but none of the above statements causes an error. In C++, pointers are allowed to take any address value, no matter whether there actually is something at that address or not. What can cause an error is to dereference such a pointer (i.e., actually accessing the value they point to). Accessing such a pointer causes undefined behavior, ranging from an error during runtime to accessing some random value.

	But, sometimes, a pointer really needs to explicitly point to nowhere, and not just an invalid address. For such cases, there exists a special value that any pointer type can take: the null pointer value. This value can be expressed in C++ in two ways: either with an integer value of zero, or with the nullptr keyword:
	*/

	//null pointers
	//all of these are equivalent
	int *l = 0;
	int *m = nullptr;
	int *n = NULL;

	return 0;
}
