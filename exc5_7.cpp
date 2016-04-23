#include "exc5_7.h"
#include <iostream>
#include <cassert>

int main (int argc, char** argv) {
	A a1;
	a1.showAddr();

	return 0;
}

A::A () {
	i = 10;
	j = 11;
	k = 12;
}

void A::showAddr () {
	std::cout << "addr of i : " << &i << std::endl;
	std::cout << "addr of j : " << &j << std::endl;
	std::cout << "addr of k : " << &k << std::endl;
}
