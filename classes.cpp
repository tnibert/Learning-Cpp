#include <iostream>
using namespace std;

//:: is scope operator
//default access for class members is private

class Rect {

	int width, height;
	int x, y;
	public:
		Rect(int, int);
		int area(void)
		{
			return (width * height);
		}
		int perim()
		{
			return (width*2)+(height*2);
		}
};

Rect::Rect(int a, int b)
{
	width = a;
	height = b;
}

int main()
{
	Rect r1(3,4), r2(5,6);
	cout << "r1 area: " << r1.area() << " perimiter: " << r1.perim() << endl;
	cout << "r2 area: " << r2.area() << " perimeter: " << r2.perim() << endl;

	return 0;
}
