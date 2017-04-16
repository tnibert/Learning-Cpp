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
	//*ptr = x.content();
	delete ptr;
	ptr = new string (x.content());
	return *this;
    }

    // move occurs when source of an object is unnamed
    // uses move constructor, sources loses the content
    // parameter type is rvalue reference to the class itself
    // move constructor:
    Example4 (Example4&& x) : ptr(x.ptr){
	cout << "In move constructor" << endl;
	x.ptr = nullptr;
    }
    // move assignment:
    Example4& operator= (Example4&& x) {
	cout << "In move assignment" << endl;
	delete ptr;
	ptr = x.ptr;
	x.ptr = nullptr;
	return *this
    }
    // add
    Example4 operator+(const Example4& rhs) {
	cout << "Overloading addition operator" << endl;
	return Example4(contr()+rhs.content());
    }

    //The concept of moving is most useful for objects that manage the storage they use, such as objects that allocate storage with new and delete. In such objects, copying and moving are really different operations:
    //  - Copying from A to B means that new memory is allocated to B and then the entire content of A is copied to this new memory allocated for B.
    //  - Moving from A to B means that the memory already allocated to A is transferred to B without allocating any new storage. It involves simply copying the pointer.


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
