#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str {"Iterableish"};
	for (auto c : str)	//char, but we can use auto
	{
		cout << c << endl;
	}

	for (int i = 0; i < 11; i++)
	{
		if(i == 3 || i == 6)
		{
			cout << "continuing" << endl;
			continue;
		}
		else if(i == 9)
		{
			cout << "breaking" << endl;
			break;
		}
		cout << i << endl;
	}
}
