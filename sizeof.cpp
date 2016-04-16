#include "cppLib.h"
#include "cLib.h"
#include <iostream>
#include <cassert>
#include <string>

struct A {
	int i[100];
};

struct B {
	void f();
};

void B::f() {
}


int main (int argc, char** argv) {
	std::cout << "size of struct A = " << sizeof(A) << "bytes" << std::endl;
	std::cout << "size of struct B = " << sizeof(B) << "bytes" << std::endl;
	std::cout << "size of cStash in C = " << sizeof(cStash) << "bytes" << std::endl;
	std::cout << "size of C++ = " << sizeof(Stash) << "bytes" << std::endl;
	return 0;

}
