#include <iostream>
#include <string>

int a;
void f () {
}

struct S {
	int a;
	void f();
};

void S::f () {
	::f(); // call the function f()
	//f() would be a recursive call
	::a++; // select the global a
	a++; // The a in struct scope
}
