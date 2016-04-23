#include "exc5_4.h"
#include <iostream>

int A::show () {
	return i;
}

int B::show () {
	return i;
}

int A::display (B a) {
	return a.i;
}

int B::display (A b) {
	return b.i;
}

int main (int argc, char** argv) {
	A a;
	B b;
	a.i = 20;
	b.i = 23;
	std::cout << b.display(a) << std::endl;
	std::cout << a.display(b) << std::endl;
	return 0;
}
