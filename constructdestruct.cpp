// destructors
#include <iostream>
#include <string>
using namespace std;

class Example4 {
    string* ptr;
  public:
    // constructors:
    Example4() : ptr(new string) { printf("In default constructor\n"); }
    Example4 (const string& str) : ptr(new string(str)) { printf("In constructor with arg\n"); }
    // destructor:
    ~Example4 () {
	delete ptr;
	printf("In destructor\n");
	}
    // access content:
    const string& content() const {return *ptr;}

    // copy constructor to deep copy
    // shallow copy means copying each variable value, e.g. pointer addresses so multiple objects would point to same memory
    // this is just when you construct an object, not when you assign it
    Example4 (const Example4& x) : ptr(new string(x.content())) {
	printf("In copy constructor\n");
	}
    // for assignment you need to overload assignment operator
    // implicit operator does shallow copy
    // explicit:
    Example4& operator= (const Example4& x) {
	printf("In copy assignment\n");
	*ptr = x.content();
	return *this;
    }

    void printPtrAddr(){
	cout << ptr << endl;
    }
};

int main () {
  Example4 foo ("Example");
  Example4 bar = foo;

  cout << "bar's content: " << bar.content() << '\n';

  foo = bar;

  foo.printPtrAddr();
  bar.printPtrAddr();

  cout << "foo's content: " << foo.content() << "\n";

  //destructor is automatically called at end of program

  return 0;
}
