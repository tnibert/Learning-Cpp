#include <iostream>
using namespace std;

//http://www.cplusplus.com/doc/tutorial/classes/
//:: is scope operator
//default access for class members is private
//classes can be defined with struct but default access is public

class Rect {

	int width, height;
	int x, y;
	static int n;	//shared between all instances of class
	public:
		//so there are way too many ways to initialize... check link for all of them
		/*
		The constructor for this class could be defined, as usual, as:

		Rectangle::Rectangle (int x, int y) { width=x; height=y; }

		But it could also be defined using member initialization as:

		Rectangle::Rectangle (int x, int y) : width(x) { height=y; }

		Or even:

		Rectangle::Rectangle (int x, int y) : width(x), height(y) { }
		*/
		Rect(int, int);
		Rect();
		Rect operator+ (const Rect&);
		int area(void)
		{
			return (width * height);
		}
		int perim()
		{
			return (width*2)+(height*2);
		}
};

//overload operator
Rect Rect::operator+ (const Rect &param)
{
	Rect temp;
	temp.width = width + param.width;
	temp.height = height + param.height;
	return temp;
}

Rect::Rect(int a, int b)
{
	width = a;
	height = b;
}

//yas I can overload
//default constructor
Rect::Rect() {
	width = 5;
	height = 5;
}

int main()
{
	//could assign with Rect r1(3,4), or Rect r2 for default constructor

	Rect  *r[4];
	r[0] = new Rect(3,4);
	r[1] = new Rect(5,6);
	r[2] = new Rect;	//no arguments, default constructor
	Rect test = *r[0] + *r[1];	//using the overloaded operator
	r[3] = &test;
	//cout << "r1 area: " << r1.area() << " perimiter: " << r1.perim() << endl;
	for (int i = 0; i < 4; i++){
		cout << "r" << i << " area: " << (*r[i]).area() << " perimeter: " << r[i]->perim() << endl;
	}

	//a little demo of pointers with classes:
	Rect obj (3, 4);
	Rect * foo, * bar, * baz;
	foo = &obj;
	bar = new Rect (5, 6);
	baz = new Rect[2] { {2,5}, {3,6} };	//another way to do array, probably cleaner, {} initialization

	//print it all out
	cout << "obj's area: " << obj.area() << '\n';
	cout << "*foo's area: " << foo->area() << '\n';
	cout << "*bar's area: " << bar->area() << '\n';
	cout << "baz[0]'s area:" << baz[0].area() << '\n';
	cout << "baz[1]'s area:" << baz[1].area() << '\n';

	//free the memory
	delete bar;
	delete[] baz;

	return 0;
}

//when an object is declared const, access to its data from outside the class is read only
//methods cannot be called unless also declared as const
//int funcname() const {}
//look at link for more details, lots of restrictions
//essentially consts only have access to consts?

//blah templates..

/*special members
Default constructor	C::C();
Destructor	C::~C();
Copy constructor	C::C (const C&);
Copy assignment	C& operator= (const C&);
Move constructor	C::C (C&&);
Move assignment	C& operator= (C&&);
*/
