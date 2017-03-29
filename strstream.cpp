#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string mystr;
	int myint;
	cout << "Enter a number: ";
	getline (cin,mystr);
	stringstream(mystr) >> myint;
	printf("%d\n", myint);
	cout << myint << endl;
	return 0;
}
