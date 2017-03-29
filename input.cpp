#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age, num;
	//prompt for two variables
	//cin >> age >> num;
	//cout << "Age: " << age << " Num: " << num << endl;

	//streaming a string to cin will terminate on any whitespace
	//so we have getline
	string mystr;
	//cout << "Enter your name: ";
	//cin >> mystr;		//if we enter both, it will overflow to the next input?
	//cout << mystr << endl;
	cout << "OK now the whole thing: ";
	getline(cin, mystr);		//so it looks like if we buffer to cin before calling this it fucks it all up
	cout << mystr << endl;

	return 0;
}
