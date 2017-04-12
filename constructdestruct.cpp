// destructors
#include <iostream>
#include <string>
using namespace std;

class Example4 {
    string* ptr;
  public:
    // constructors:
    Example4() : ptr(new string) {}
    Example4 (const string& str) : ptr(new string(str)) {}
    // destructor:
    ~Example4 () {
	delete ptr;
	printf("In destructor\n");
	}
    // access content:
    const string& content() const {return *ptr;}

    // copy constructor to deep copy
    // shallow copy means copying each variable value, e.g. pointer addresses so multiple objects would point to same memory
    Example4 (const Example4& x) : ptr(new string(x.content())) {
	printf("In copy constructor\n");
	}
};

int main () {
  Example4 foo ("Example");
  Example4 bar = foo;

  cout << "bar's content: " << bar.content() << '\n';

  //I think destructor is automatically called at end of program

  return 0;
}
