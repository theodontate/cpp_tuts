#include "exc5_5.h"
#include <iostream>

void A::init () {
	i = 12;
}

void C::doSomething (A a) {
	std::cout << a.i << std::endl;
}

void B::takeAShit (A a) {
	std::cout << a.i << std::endl;
}

int main (int argc, char** argv) {
	A a;
	B b;
	C c;

	a.init();
	b.takeAShit(a);
	c.doSomething(a);

	return 0;
}

