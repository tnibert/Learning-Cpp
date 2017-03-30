#include <iostream>
#include <string>
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

	//the above are C strings, must differentiate between that and library strings

	char question1[] = "What is your name? ";
	string question2 = "Where do you live? ";
	char answer1[20];	//apparently if we overflow this it will print but then seg fault, or stack smash detected with core dump
	string answer2;
	cout << question1;
	cin >> answer1;
	cout << question2;
	cin >> answer2;

	cout << "Hello, " << answer1;
	cout << " from " << answer2 << "!\n";

	//converting between C strings and lib strings
	char cstr[] = "text";
	string libstr = cstr;
	cout << libstr;
	cout << libstr.c_str();
	cout << endl;

	return 0;
}
