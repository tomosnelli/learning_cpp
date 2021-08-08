// Constructors and Destructors with inheritance

#include <iostream>

using namespace std;

class Base {
	private:
		int value;
	public:
		Base(): value{0} {cout << "Base class no-args constructor invoked" << endl;}
		Base(int x): value{x} {cout << "Base class (int) overloaded constructor invoked" << endl;}
		~Base(){cout << "Base Destrucor invoked" << endl;}

		// getter
		void display(){ cout << value << endl; }
};


class Derived:public Base {
	// any constructors will not be inherited.
	// so if we make an instance of this
	
	// using Base::Base; // this will import the non-special(copy, move stuff) constructors from the parent class Base

	private:
		int doubled_value;
	public:
		Derived():Base {}, doubled_value {0} {cout << "Derived no-args constructor invoked" << endl;}		
		Derived(int x):Base {x}, doubled_value{x*2} {cout << "Derived (int) overloaded constructor invoked" << endl;}
		~Derived(){cout << "Derived Destructor invoked" << endl;}

		// getter
		void show(){ cout << doubled_value << endl; }
};


int main(){
	// Base b;
	// Base b{100};
	Derived test{2};	// won't compile if you do not set your own overloaded constructor
	test.display();
	test.show();
	
	return 0;
}
