#include <iostream>
using namespace std;

int main ()
{
	char foo[20] = {'H', 'e', 'l', 'l', 'o', '\0' };
	//sequences of chars in quotes are a null terminated array of chars
	char bar [] = "foo by the foo\n";	//can't set this to foo because foo is 20 chars
	//^now that these have been declared, they cannot be assigned like this again because they are arrays

	cout << foo << endl;
	cout << bar;

	//but this works
	bar[0] = 'b';
	bar[1] = 'a';
	bar[2] = 'r';
	cout << bar;

	return 0;
}
