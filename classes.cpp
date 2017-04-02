#include <iostream>
using namespace std;

//http://www.cplusplus.com/doc/tutorial/classes/
//:: is scope operator
//default access for class members is private

class Rect {

	int width, height;
	int x, y;
	public:
		Rect(int, int);
		Rect();
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

//yas I can overload
Rect::Rect() {
	width = 5;
	height = 5;
}

int main()
{
	//could assign with Rect r1(3,4) or Rect r2 for no arg constructor

	Rect  *r[3];
	r[0] = new Rect(3,4);
	r[1] = new Rect(5,6);
	r[2] = new Rect;	//no arguments, overload constructor
	//cout << "r1 area: " << r1.area() << " perimiter: " << r1.perim() << endl;
	for (int i = 0; i < 3; i++){
		cout << "r" << i << " area: " << (*r[i]).area() << " perimeter: " << r[i]->perim() << endl;
	}
	return 0;
}
